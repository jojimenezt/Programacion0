#include "arr_polinomios.h"
#include "numericos.h"
#include <iostream>
using namespace std;

double* crear_arreglo_double(int n){
    return new double[n];
}

double* leer_polinomio(int n){
    double* y = crear_arreglo_double(n+1);
    for(int i=n;i>=0;i--){
        cout << "Ingrese el coeficiente de x^" << i << " : " <<  endl;
        cin >> y[i];
    }return y;
}

double* evaluar(double* a,int n, double* b, int m, int x){
    double* p = crear_arreglo_double(2);
    int ac = 0;
    for(int i=n;i>=0;i--){
        ac = ac + a[i] * potencia(x,i);
    }
    int bc = 0;
    for(int i=m;i>=0;i--){
        bc = bc + b[i] * potencia(x,i);
    }
    p[0] = ac;
    p[1] = bc;
    return p;
}

int max_int(int a, int b){
    if(a>b) return a;
    else return b;
}

double* suma_pol(double* a,int n, double* b, int m){
    int j = max_int(m,n);
    double* y = crear_arreglo_double(j);
    for(int i=j;i>=0;i--){
        if(n==m){
            y[i] = a[i] + b[i];
        }if(n>m){
            y[i] = a[n];
            n--;
        }if(n<m)
            {
            y[i] = b[m];
            m--;
        }
    }
    return y;
}

double* resta_pol(double* a,int n, double* b, int m){
    int j = max_int(m,n);
    double* y = crear_arreglo_double(j);
    for(int i=j;i>=0;i--){
        if(n==m){
            y[i] = a[i] - b[i];
        }if(n>m){
            y[i] = a[n];
            n--;
        }if(n<m)
            {
            y[i] = -b[m];
            m--;
        }
    }
    return y;
}

double* mult_pol(double* a,int n, double* b, int m){
    int t=m+n;
    double* c= crear_arreglo_double(t);
    for(int i=0;i<t;i++){
            c[i]=0;
    }for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
                c[i+j] = c[i+j]+ (a[i]*b[j]);
        }
    }return c;
}

double* div_pol(double* a,int n, double* b, int m, double* r, double p){
    double* d = crear_arreglo_double(n+1);
    for(int i=0;i<=n;i++){
        d[i] = a[i];
    }
    for(int i=n;i>=m;i--){
        r[i-m] = (d[i]/b[m]);
        for(int j=0;j<=m;j++){
            d[i-j]-= b[m-j]*r[i-m];
        }
    }
    return r;
}

double* res_pol(double* a,int n, double* b, int m, double* r, double p){
    double* d = crear_arreglo_double(n+1);
    for(int i=0;i<=n;i++){
        d[i] = a[i];
    }
    for(int i=n;i>=m;i--){
        r[i-m] = (d[i]/b[m]);
        for(int j=0;j<=m;j++){
            d[i-j]-= b[m-j]*r[i-m];
        }
    }
    return d;
}
