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

int* dif_arrs(int* x,int m, int* y,int n){
    int* r = inter_arrs(x,m,y,n);
    int u = tam_inter_arrs(x,m,y,n);
    int* l = crear_arreglo_int(m-u);
    int f=0;
    for(int i=0;i<m;i++){
        bool t = true;
        for(int j=0;j<m-u;j++){
            if(x[i]==r[j]){
                t =  false;
            }
        }if(t){
            l[f++] = x[i];
        }
    }
    return l;
}

int tam_dif_arrs(int* x,int m, int* y,int n){
    int* r = inter_arrs(x,m,y,n);
    int u = tam_inter_arrs(x,m,y,n);
    int* l = crear_arreglo_int(m-u);
    int f=0;
    for(int i=0;i<m;i++){
        bool t = true;
        for(int j=0;j<m-u;j++){
            if(x[i]==r[j]){
                t =  false;
            }
        }if(t){
            f++;
        }
    }
    return f;
}

int* dif_sim_arrs(int* x,int m, int* y,int n){
    int* p = dif_arrs(x,m,y,n);
    int* o = dif_arrs(y,n,x,m);
    int a = tam_dif_arrs(x,m,y,n);
    int b = tam_dif_arrs(y,n,x,m);
    int s = a+b;
    int* d = crear_arreglo_int(s);
    for(int i=0;i<a;i++){
        d[i] = p[i];
    }
    int t=0;
    for(int i=a;i<s;i++){
            d[i] = o[t];
            t++;
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
