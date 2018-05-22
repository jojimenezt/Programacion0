#include <iostream>
#include "numericos.h"
#include "polinomios.h"
#include "arreglos_ent.h"
using namespace std;

double* leer_polinomio(int n){
    double* y = crear_arreglo_double(n+1);
    for(int i=n;i>=0;i--){
        if(i==0){
            cout << "Ingrese el valor del termino independiente: " <<  endl;
            cin >> y[i];
        }else{
            cout << "Ingrese el coeficiente de x^" << i << " : " <<  endl;
            cin >> y[i];
        }
    }return y;
}

double* escribir_pol(double* a, int n){
    for(int i=n;i>=0;i--){
        if(i==0){
                cout<<a[i];
        }else{
            if(a[i-1]>=0){
                cout << a[i] << "x^" << i <<" + " ;
            }else if(a[i-1]<0){
                cout << a[i] << "x^" << i <<" " ;
            }
        }
    }
}

double* eval_pol(double* a,int n, double* b, int m, int x){
    double* r = crear_arreglo_double(2);
    int res1 = 0;
    for(int i=n;i>=0;i--){
        res1 = res1+a[i] * potencia_double(x,i);
    }
    int res2 = 0;
    for(int i=m;i>=0;i--){
        res2= res2+ b[i] * potencia_double(x,i);
    }
    r[0] = res1;
    r[1] = res2;
    return r;
}

double* sumar_pol(double* a,int n, double* b, int m){
    int mayor = mayor_int(n,m);
    double* res = crear_arreglo_double(mayor);
    for(int i=mayor;i>=0;i--){
        if(n==m){
            res[i] = a[i] + b[i];
        }if(n>m){
            res[i] = a[n];
            n--;
        }if(n<m)
            {
            res[i] = b[m];
            m--;
        }
    }
    return res;
}

double* resta_pol(double* a,int n, double* b, int m){
    int mayor = mayor_int(n,m);
    double* res = crear_arreglo_double(mayor);
    for(int i=mayor;i>=0;i--){
        if(n==m){
            res[i]=a[i]-b[i];
        }if(n>m){
            res[i]=a[n];
            n--;
        }if(n<m){
            res[i]=b[m];
            m--;
        }
    }
    return res;
}

double* mult_pol(double* a,int n, double* b, int m){
    int t=m+n;
    double* c= crear_arreglo_double(t);
    for(int i=0;i<t;i++){
        c[i]=0;
    }
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            c[i+j]= c[i+j]+ (a[i]*b[j]);
        }
    }
    return c;
}

double* div_pol(double* a,int n, double* b, int m, double* s, double t){
    double* d = crear_arreglo_double(n+1);
    for(int i=0;i<=n;i++){
        d[i] = a[i];
    }
    for(int i=n;i>=m;i--){
        s[i-m] = (d[i]/b[m]);
        for(int j=0;j<=m;j++){
            d[i-j]-= b[m-j]*s[1-m];
        }
    }
    return s;
}

double* res_pol(double* a,int n, double* b, int m, double* s, double t){
    double* d = crear_arreglo_double(n+1);
    for(int i=0;i<=n;i++){
        d[i] = a[i];
    }
    for(int i=n;i>=m;i--){
        s[i-m] = (d[i]/b[m]);
        for(int j=0;j<=m;j++){
            d[i-j]-= b[m-j]*s[1-m];
        }
    }
    return d;
}
