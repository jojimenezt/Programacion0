#include "mat_bin.h"
#include "matrices.h"
using namespace std;



bool** union_rel(bool** r,int n,bool** s,int m){
    bool** x=crear_matriz_bool(x,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x[i][j]= r[i][j] || s[i][j];
        }
    }
    return x;
}

bool** interseccion_rel(bool** r,bool** s,int n,int m){
    bool** T=crear_matriz_bool(T,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j]=r[i][j] && s[i][j];
        }
    }
    return T;
}
