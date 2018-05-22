#include "matrices.h"
#include "arreglos_ent.h"
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
        };
    };
    return A;
}

double** multi_matriz_double(double** X,int n,double** Y,int m){
    double** z = crear_matriz_double(z,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                z[i][j] = X[i][j] * Y[i][j];
        }
    }
    return z;
}

double suma_columna_matriz(double** X,int n,int m,int columna){
    int res= 0;
    for(int i = 0; i < n; i++){
        res = res+ X[i][columna];
    }
    return res;
}

double suma_fila_matriz(double** X,int n,int m,int fila){
    int res= 0;
    for(int i = 0; i < m; i++){
        res = res+ X[fila][i];
    }
    return res;
}

double sum_diag_1(double** A, int n, int m){
    double S=0;
    for(int i=0;i<n;i++){
        S= S+A[i][i];
    }
    return S;
}

double sum_diag_2(double** A, int n, int m){
    double S=0;
    for(int i=0;i<n;i++){
        S= S+ A[n-1-i][n-1-i];
    }
    return S;
}

bool filas(double **A, int n, int m){
    for(int i=1;i<n;i++){
        if(suma_fila_matriz(A,n,m,i)!=suma_fila_matriz(A,n,m,i+1)){
            return false;
        }
    }
    return true;
}

bool columnas(double **A, int n, int m){
    for(int i=1;i<m;i++){
        if(suma_columna_matriz(A,n,m,i)!=suma_columna_matriz(A,n,m,i+1)){
            return false;
        }
    }
    return true;
}

bool diagonales(double** A, int n, int m){
    if(sum_diag_1(A,n,m)==sum_diag_2(A,n,m)){
        return true;
    }else{
        return false;
    }
}

bool matriz_magica(double** A, int n, int m){
    return filas(A,n,m) && columnas(A,n,m) && diagonales(A,n,m);
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

double CalcularDeterminante(double** X,int n){
    if (n == 2){
        return (X[0][0]*X[1][1] - X[0][1]*X[1][0]);
    }else{
        int Actual = 0;
        int k = 0;
        int Numero = 0;
        short multiplicador;
        double** Buffer; // Creo una nueva matriz para hacer los adjuntos
        Buffer = new double*[n-1];
        for (int i = 0; i<(n-1); i++){
                Buffer[i] = new double[n-1];
        }
        for (int l = 0; l < n; l++){
            for (int j = 1; j < n; j++){
                for (int i = 0; i < n; i++){
                    if (i != l){
                        Buffer[k][j-1] = X[i][j];
                        k++;
                    }
                }
                k = 0;
            }
            if ( l % 2 != 0)
                multiplicador = -1;
            else
                multiplicador = 1;
            Numero=Numero+(X[l][0]*CalcularDeterminante(Buffer,n-1)*multiplicador);
        }
        return Numero;
    }
}

int** Espiral(int** X, bool** B, int* Y, int* DirF, int* DirC, int direccion, int posF, int posC, int pos, int f, int c){
    if(pos == f * c){
        return X;
    }
    int nf = posF + DirF[direccion];
    int nc = posC + DirC[direccion];
    if(nf >= 0 && nf < f && nc >= 0 && nc < c && !B[nf][nc]){
        cout<<nf<<" "<<nc<<endl;
        X[nf][nc] = Y[pos];
        pos++;
        posF = nf;
        posC = nc;
        B[nf][nc] = true;
    }
    else{
        direccion++;
        if(direccion == 4){
            direccion -= 4;
        }
    }
    return Espiral(X, B, Y, DirF, DirC, direccion, posF, posC, pos, f, c);
}
