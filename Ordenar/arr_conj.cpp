#include "arr_conj.h"
#include "arreglos_ent.h"

int* union_arrs(int* a,int n,int* b,int m){
    int r=n+m;
    int* c = crear_arreglo_int(r);
    for(int i=0;i<n;i++){
        c[i] = a[i];
    }
    for(int i=n;i<r;i++){
        c[i] = b[i-n];
    }
    return c;
}

int* inter_arrs(int* a,int n,int* b,int m){
    int h =1;
    int* c = crear_arreglo_int(h);
    for(int i=0;i<n;i++){
        for(int l=0;l<m;l++){
            if(b[l]==a[i]){
                c[h-1] = a[i];
                h++;
            }
        }
    }
    return c;
}

int tam_inter_arrs(int* a,int n,int* b,int m){
    int h =1;
    int* c = crear_arreglo_int(h);
    for(int i=0;i<n;i++){
        for(int l=0;l<m;l++){
            if(b[l]==a[i]){
                h++;
            }
        }
    }
    return h-1;
}

int* dif_arrs(int* a,int n,int* b,int m){
    int* u = crear_arreglo_int(m);
    for(int i=0;i<m;i++){
        u[i] = a[i];
    }
    for(int i=0;i<m;i++){
        for(int l=0;l<n;l++){
            if(a[i]==b[l]){
                u[i] = 0;
            }
        }
    }
    int h=1;
    int* c = new int[h];
    for(int i=0;i<m;i++){
        if(u[i]!=0){
            c[h-1] = u[i];
            h++;
        }
    }
    return c;
}

int tam_dif_arrs(int* a,int n,int* b,int m){
    int* u = crear_arreglo_int(m);
    for(int i=0;i<m;i++){
        u[i] = a[i];
    }
    for(int i=0;i<m;i++){
        for(int l=0;l<n;l++){
            if(a[i]==b[l]){
                u[i] = 0;
            }
        }
    }
    int h=1;
    int* c = new int[h];
    for(int i=0;i<m;i++){
        if(u[i]!=0){
            h++;
        }
    }
    return h-1;
}

int* dif_sim_arrs(int* a,int n, int* b,int m){
    int* p = dif_arrs(a,n,b,m);
    int* o = dif_arrs(b,m,a,n);
    int t = tam_dif_arrs(a,n,b,m);
    int r = tam_dif_arrs(b,m,a,n)
    int s = t+r-2;
    int* d = crear_arreglo_int(s);
    for(int i=0;i<t;i++){
        d[i] = p[i];
    }
    int ss=0;
    for(int i=t;i<s;i++){
            d[i] = o[ss];
            ss++;
    }
    return d;
}

bool* pert_arrs(int* a,int n, int* b,int m, int x){
    bool* o = new bool[2];
    o[0] = false;
    o[1] = false;
    for(int i=0;i<n;i++){
        if(a[i]== x){
            o[0] = true;
        }
    }for(int l=0;l<m;l++){
        if(b[l]==x){
            o[1] = true;
        }
    }
    return o;
}

bool cont_arrs(int* a,int n,int* b,int m){
    bool* c = new bool[n];
    for(int f=0;f<n;f++){
        c[f] = false;
    }for(int i=0;i<n;i++){
        for(int l=0;l<m;l++){
            if(a[i]==b[l]){
                c[i] = true;
            }
        }
    }
    int p=0;
    for(int r=0;r<n;r++){
        if(c[r]==true){
            p++;
        }
    }
    return p==n;
}
