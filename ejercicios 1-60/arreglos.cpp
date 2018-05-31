#include "Arreglos.h"
#include "numericos.h"
#include <iostream>
using namespace std;
bool* arreglocribaerast(int n){
    bool* criba_erast=new bool[n];
    for(int i=1;i<=n;i++){
            criba_erast[i]=true;
    }for(int i = 2; i <= n; i++){
        for(int j = 2; i*j <=n; j++){
                criba_erast[i*j] = false;
        }
    }
    return criba_erast;
};

void escribircribaerast(bool *a, int n){
    for(int i = 2; i<=n;i++){
            if(a[i]){
                cout<<i<<" ";
            }
    };
};

double suma(int* x, int n){
    int ac = 0;
    for(int i = 0; i<n ; i++){
        ac = x[i] + ac;
    };
    return ac;
};

double promedio(int* x, int n){
    return suma(x,n)/n;
};

double producto(int* v, int* w, int n){
    int* x = new int[n];
    for(int i=0; i<n; i++){
        x[i] = v[i] * w[i];
    };
    return suma(x,n);
};

double minimoarr(int* x, int n){
    if(n == 1){
        return x[0];
    };
    int M = minimoarr(x, n - 1);
    if(M < x[n - 1]){
        return M;
    };
    return x[n - 1];
};

double maximoarr(int* x, int n){
    if(n == 1){
        return x[0];
    };
    int M = maximoarr(x, n - 1);
    if(M > x[n - 1]){
        return M;
    };
    return x[n - 1];
};

double* producto_directo(int* v, int* w, int n){
    double* x = new double[n+1];
    x[0] = n+1;
    for(int i=1; i<=n; i++){
        x[i] = v[i-1] * w[i-1];
    }return x;
};

int posmaximo(int* x, int n){
    if(n == 1){
        return 0;
    };
    int k = posmaximo(x, n - 1);
    if(x[k] > x[n - 1]){
        return k;
    };
    return n - 1;
};

int* ordenar(int* x, int n){
    if(n == 1){
        return x;
    }else{
        int k = posmaximo(x, n);
        int t = x[k];
        x[k] = x[n-1];
        x[n-1] = t;
        return ordenar(x, n-1);
    };
};

double mediana(int* x, int n){
    ordenar(x,n);
    if(n%2!=0){
        return x[n/2];
    }else{
        return (x[n/2]+x[n/2-1])/2.0;
    };
};

int* cerosfinal(int* a, int n){
    int temp=0;
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        return cerosfinal(a, n-1);
    }
}

int bin2dec(int* x, int n){
    int* y = new int[n];
    int a = 1;
    y[0] = a;
    for(int i = 1; i< n; i++){
        a = a*2;
        y[i] = a;
    }
    double z = producto(x,y,n);
    return z;
};

int tama(int n){
    if(n==0) return 1;
    int c=0;
    while(potencia(2,c)<=n){
        c++;
    }
    return c;
}

int* dec2bin(int n){
    int u = tama(n)+1;
    int* x= new int[u];
    x[0] = u;
    for(int i=1;i<u;i++){
        x[i] = n%2;
        n = n/2;
    }
    return x;
}

int max_div(int* x, int n){
    if(n==1){
        return x[0];
    }else{
        return mcd(max_div(x,n-1),x[n-1]);
    }
}

int mcm(int a, int b){
    return a*b/(mcd(a,b));
}

int min_mul(int* x, int n){
    if(n==1){
        return x[0];
    }else{
        return mcm(min_mul(x,n-1),x[n-1]);
    }
}
