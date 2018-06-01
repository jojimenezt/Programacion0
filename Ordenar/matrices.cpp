#include "matrices.h"
#include "arreglos_ent.h"
#include "numericos.h"
#include <iostream>
using namespace std;

int** crear_matriz_int(int** X, int n, int m){
    X = new int*[n];
    for(int i = 0; i < n; i++){
        X[i] = new int[m];
    }
    return X;
}

double** crear_matriz_double(double** X, int n, int m){
    X = new double* [n];
    for(int i = 0; i < n; i++){
        X[i] = new double[m];
    }
    return X;
}

bool** crear_matriz_bool(bool** X, int n, int m){
    X = new bool* [n];
    for(int i = 0; i < n; i++){
        X[i] = new bool[m];
    }
    return X;
}

int** llenar_matriz_int(int** X, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<"valor para la posicion: ["<<i<<"]["<<j<<"]"<<endl;
            cin>>X[i][j];
        }
    }
    return X;
}

double** llenar_matriz_double(double** X, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<"valor para la posicion: ["<<i<<"]["<<j<<"]"<<endl;
            cin>>X[i][j];
        }
    }
    return X;
}

int escribir_matriz_int(int** X, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<X[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
}

double escribir_matriz_double(double** X, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<X[i][j];
            cout<<"\t";
        }
        cout<<endl;
    }
}

double** suma_matriz(double** X,int n,double** Y,int m){
    double** A=crear_matriz_double(A,n,m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            A[i][j] = X[i][j]+ Y[i][j];
        }
    }
    return A;
}

double** multi_matriz_double(double** X,int n,double** Y,int m,int l){
    double** z = crear_matriz_double(z,n,l);
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            z[i][j] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<l; j++){
            for(int s=0; s<m; s++){
                z[i][j] += X[i][s] * Y[s][j];
            }
        }
    }
    return z;
}

double suma_columna_matriz(double** X,int n,int m,int columna){
    double res= 0;
    for(int i = 0; i < n; i++){
        res = res+ X[i][columna];
    }
    return res;
}

double suma_fila_matriz(double** X,int n,int m,int fila){
    double res= 0;
    for(int i = 0; i < m; i++){
        res = res+ X[fila][i];
    }
    return res;
}

bool filas_suma(double** x,int n){
    double p = suma_fila_matriz(x,n,n,0);
    bool c = true;
    for(int i=1;i<n;i++){
        if(suma_fila_matriz(x,n,n,i)!=p){
            c = false;
        }
    }
    return c;
}

bool columnas_suma(double** x,int n){
    double p = suma_columna_matriz(x,n,n,0);
    bool c = true;
    for(int i=1;i<n;i++){
        if(suma_columna_matriz(x,n,n,i)!=p){
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
        double a = suma_fila_matriz(x,n,n,0);
        double b = suma_columna_matriz(x,n,n,0);
        double c = suma_matriz_diagonal(x,n);
        if(a==b && b==c){
            return true;
        }
    }
    return false;
}

double** menores_mayores_x(double** X,int n,int m,int val){
    double** y=crear_matriz_double(y,n,m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(X[i][j]>val){
                y[i][j] = 1;
            }else{
                y[i][j] = 0;
            }
        }
    }
    return y;
}

int cofact_det(double** a,int n, int f, int c){
    double** s = crear_matriz_double(s,n-1,n-1);
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
    return potencia(-1,f+c) * CalcularDeterminante(s,n-1);
}

double CalcularDeterminante(double** X, int n){
    double det = 0;
    if(n==1){
        det = X[0][0];
    }else if(n==2){
        det = (X[0][0]*X[1][1] - X[0][1]*X[1][0]);
    }else{
        for(int j=0;j<n;j++){
            det = det + X[0][j] * cofact_det(X,n,0,j);
        }
    }
    return det;
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

double** Espiral(int n, double* b){
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
