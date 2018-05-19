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

double** suma_matriz(double** X,int n,double** Y,int m,int posX,int posY){
    if(posX == n){
        return X;
    }
    else{
        if(posY == m){
            posY = 0;
            posX++;
            return suma_matriz(X,n,Y,m,posX, posY);
        }
        else{
            X[posX][posY] += Y[posX][posY];
            posY++;
            return suma_matriz(X,n,Y,m,posX,posY);
        }
    }
}

double** multi_matriz_double(double** X,int n,double** Y,int m,int posX,int posY){
    if(posX == n){
        return X;
    }
    else{
        if(posY == m){
            posY = 0;
            posX++;
            return multi_matriz_double(X,n,Y,m,posX,posY);
        }
        else{
            X[posX][posY] *= Y[posX][posY];
            posY++;
            return multi_matriz_double(X,n,Y,m,posX,posY);
        }
    }
}

double suma_columna_matriz(double** X,int n,int m,int columna,int posX,double sum){
    if(posX == n){
        return sum;
    }else{
        sum += X[posX][columna];
        posX++;
        return suma_columna_matriz(X,n,m,columna,posX,sum);
    }
}

double suma_fila_matriz(double** X,int n,int m,int fila,int posY,double sum){
    if(posY == m){
        return sum;
    }
    else{
        sum += X[fila][posY];
        posY++;
        return suma_fila_matriz(X,n,m,fila,posY,sum);
    }
}

bool matriz_magica(double** X, int n, int m){
    double val = suma_fila_matriz(X,n,m,0,0,0);
    for(int i = 1; i < n; i++){
        if(suma_fila_matriz(X,n,m,i,0,0) != val){
            return false;
        }
    }
    for(int j = 0; j < m; j++){
        if(suma_columna_matriz(X,n,m,j,0,0) != val){
            return false;
        }
    }
    double d1 = 0;
    for(int i = 0; i < n; i++){
        d1=d1+X[i][i];
    }
    double d2 = 0;
    for(int i = 0; i < n; i++){
        d2=d2+ X[i][n - i - 1];
    }
    if(d1!=val||d2!=val){
        return false;
    }else{
        return true;
    }
}

double** menores_mayores_x(double** X,int n,int m,int posX,int posY,int val){
    if(posX == n){
        return X;
    }
    else{
        if(posY == m){
            posY = 0;
            posX++;
            return menores_mayores_x(X,n,m,posX,posY,val);
        }
        else{
            if(val<X[posX][posY]){
                X[posX][posY] = 1;
            }
            else{
                X[posX][posY] = 0;
            }
            posY++;
            return menores_mayores_x(X,n,m,posX,posY,val);
        }
    }
}

double CalcularDeterminante(double** X,int n){
    if (n == 2)
    {
        return (X[0][0]*X[1][1] - X[0][1]*X[1][0]);
    }
    else
    {
        int Actual = 0;
        int k = 0;
        int Numero = 0;
        short multiplicador;
        double** Buffer; // Creo una nueva matriz para hacer los adjuntos
        Buffer = new double*[n-1];
        for (int i = 0; i<(n-1); i++){
                Buffer[i] = new double[n-1];
        }
        for (int l = 0; l < n; l++){ // Desarrollo por filas
            for (int j = 1; j < n; j++){ // Creo una nueva matriz adjunta
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
