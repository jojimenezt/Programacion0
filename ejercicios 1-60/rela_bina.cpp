#include "rela_bina.h"

int** crear_matriz_int(int n, int m){
    int** X = new int*[n];
    for(int i = 0; i < n; i++){
        X[i] = new int[m];
    };
    return X;
};

int** union_rel(int** r, int** s, int n, int m){
    int** T = crear_matriz_int(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j] = r[i][j] || s[i][j];
        }
    }
    return T;
}

int** interseccion_rel(int** r, int** s, int n, int m){
    int** T = crear_matriz_int(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            T[i][j] = r[i][j] && s[i][j];
        }
    }
    return T;
}

bool con_igu(int* a,int n, int* b, int m){
    bool y = true;
    if(n!=m) y = false;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            y=false;
        }
    }return y;
}

bool simetr_rel(int** r, int n, int m,int* a, int* b){
    bool y= true;
    if(con_igu(a,n,b,m)!=1){
        y=false;
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i][j]!=r[j][i]){
                    y = false;
                }
            }
        }
    }return y;
}

bool reflec_rel(int** r, int n, int m,int* a, int* b){
    bool y= true;
    if(con_igu(a,n,b,m)!=1){
        y=false;
    }else{
        for(int i=0;i<n;i++){
            if(r[i][i]!=1){
                y = false;
            }
        }
    }return y;
}

bool transi_rel(int** r, int n, int m,int* a, int* b){
    bool y= true;
    if(con_igu(a,n,b,m)!=1){
        y=false;
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int c=0;c<m;c++){
                    if(r[i][j]==1 && r[j][c]==1){
                        y = y && r[i][c]==1;
                    }
                }
            }
        }
    }return y;
}

bool antisim_rel(int** r, int n, int m,int* a, int* b){
    bool y= true;
    if(con_igu(a,n,b,m)!=1){
        y=false;
    }else{
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i][j]==r[j][i]){
                    y = y && j==i;
                }
            }
        }
    }return y;
}

bool orden_rel(int** r, int n, int m,int* a, int* b){
    if(reflec_rel(r,n,m,a,b)==1 && antisim_rel(r,n,m,a,b)==1 && transi_rel(r,n,m,a,b)==1){
        return true;
    }else{
        return false;
    }
}

bool equiv_rel(int** r, int n, int m,int* a, int* b){
    if(reflec_rel(r,n,m,a,b)==1 && simetr_rel(r,n,m,a,b)==1 && transi_rel(r,n,m,a,b)==1){
        return true;
    }else{
        return false;
    }
}

bool funcion(int** r, int n, int m){
    bool y = true;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(r[i][j]==1){
                c++;
            }
        }
         y = y && (c==1 || c==0);
    } return y;
}

bool fun_inyec(int** r, int n, int m){
    bool y = true;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(r[i][j]==1){
                c++;
            }
        } y = y && c==1;
    } return y;
}

bool fun_sobre(int** r, int n, int m){
    bool y = true;
    for(int j=0;j<m;j++){
        int c=0;
        for(int i=0;i<n;i++){
            if(r[i][j]==1){
                c++;
            }
        } y = y && c==1;
    } return y;
}





