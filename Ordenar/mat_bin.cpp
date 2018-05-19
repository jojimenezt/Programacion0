#include "mat_bin.h"
#include "matrices.h"
using namespace std;



int** union_rel(int** r,int n,int** s,int m){
    int** x=crear_matriz_int(x,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[i][j]= r[i][j] || s[i][j];
        }
    }
    return x;
}

int** interseccion_rel(int** r,int** s,int n,int m){
    int** T=crear_matriz_int(T,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j]=r[i][j] && s[i][j];
        }
    }
    return T;
}
