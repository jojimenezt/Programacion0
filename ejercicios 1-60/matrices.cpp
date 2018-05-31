#include "matrices.h"
#include "arreglos.h"
#include "numericos.h"

double** crear_matriz_double(int n, int m){
    double** X = new double*[n];
    for(int i = 0; i < n; i++){
        X[i] = new double[m];
    }return X;
};

double** suma_matriz(double** x, double** y, int n, int m){
    double** c = crear_matriz_double(n, m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = x[i][j] + y[i][j];
        };
    };
    return c;
};

double** multi_matrices(double** x,double** y,int n, int m, int l){
    double** z = crear_matriz_double(n,l);
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            z[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            for(int s=0; s<m; s++){
                z[i][j] += x[i][s] * y[s][j];
            }
        }
    }
    return z;
}

double suma_matriz_columna(double** x, int n, int m, int p){
    int ac = 0;
    for(int i = 0; i < n; i++){
        ac  = ac + x[i][p];
    };
    return ac;
};

double suma_matriz_fila(double** x, int n, int m, int p){
    int ac = 0;
    for(int j = 0; j < m; j++){
        ac  = ac + x[p][j];
    };
    return ac;
};

bool filas_suma(double** x,int n){
    double p = suma_matriz_fila(x,n,n,0);
    bool c = true;
    for(int i=1;i<n;i++){
        if(suma_matriz_fila(x,n,n,i)!=p){
            c = false;
        }
    }
    return c;
}

bool columnas_suma(double** x,int n){
    double p = suma_matriz_columna(x,n,n,0);
    bool c = true;
    for(int i=1;i<n;i++){
        if(suma_matriz_columna(x,n,n,i)!=p){
            c = false;
        }
    }
    return c;
}

double suma_matriz_diagonal(double** x, int n){
    int ac=0;
    for(int i=0;i<n;i++){
        ac = ac + x[i][i];
    }
    return ac;
}

bool matriz_magica(double** x,int n){
    if(filas_suma(x,n)==1 && columnas_suma(x,n)==1){
        double a = suma_matriz_fila(x,n,n,0);
        double b = suma_matriz_columna(x,n,n,0);
        double c = suma_matriz_diagonal(x,n);
        if(a==b && b==c){
            return true;
        }
    }
    return false;
}

double** may_men_num(double** x, int n, int m, int p){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(x[i][j]>p){
                x[i][j] = 1;
            }else{
                x[i][j] = 0;
            }
        };
    };
    return x;
}

int cofactor(double** a,int n, int f, int c){
    double** s = crear_matriz_double(n-1,n-1);
    int x = 0, y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=f && j!=c){
                s[x][y] = a[i][j];
                y++;
                if(y>=n-1){
                    x++;
                    y = 0;
                }
            }
        }
    }
    return potencia(-1,f+c) * determinante(s,n-1);
}

int determinante(double** matriz, int n){
    int det = 0;
    if(n==1){
        det = matriz[0][0];
    }else if(n==2){
        det = (matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0]);
    }else{
        for(int j=0;j<n;j++){
            det = det + matriz[0][j] * cofactor(matriz,n,0,j);
        }
    }return det;
}

double** remplazar_col(double** A, int n, double* B, int j){
    double** s = crear_matriz_double(n,n);
    for(int i=0;i<n;i++){
        for(int l=0;l<n;l++){
            s[i][l] = A[i][l];
        }
    }
    for(int i=0;i<n;i++){
        s[i][j] = B[i];
    }
    return s;
}

double* ecu_lin(double** A, int n, double* B){
    double h = determinante(A,n);
    double* l = new double[n];
    for(int j=0;j<n;j++){
        l[j] = determinante(remplazar_col(A,n,B,j),n)/h;
    }
    return l;
}

double** matriz_trans(double** a, int n){
    double** b = crear_matriz_double(n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j] = cofactor(a,n,i,j);
        }
    }double** c = crear_matriz_double(n,n);
    for(int l=0;l<n;l++){
        for(int t=0;t<n;t++){
            c[l][t] = b[t][l];
        }
    }
    return c;
}

double** matriz_inver(double** a, int n){
    double** b = crear_matriz_double(n,n);
    b = matriz_trans(a,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j] = b[i][j]/determinante(a,n);
        }
    }
    return b;
}

double** llenar_cero(int n){
    double** x = crear_matriz_double(n,n);
    for(int i=0;i<n;i++){
        for(int l=0;l<n;l++)
            x[l][i] = 0;
    }
    return x;
}

double** matriz_espir(int n, double* b){
    double**  a = crear_matriz_double(n,n);
    a = llenar_cero(n);
    int con = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                a[i][j] = b[con];
                con++;
            }
        }
        for(int j=0;j<n;j++){
            if(a[j][n-(i+1)]==0){
                a[j][n-(i+1)] = b[con];
                con++;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(a[n-(i+1)][j]==0){
                a[n-(i+1)][j] = b[con];
                con++;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(a[j][i]==0){
                a[j][i] = b[con];
                con++;
            }
        }
    }
    return a;
}
