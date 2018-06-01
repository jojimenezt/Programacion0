#include "arreglos_ent.h"
#include <iostream>
#include "numericos.h"
using namespace std;

int* crear_arreglo_int(int n){
    return new int[n];
}

int* leer_arreglo_int(int* x, int n){
    for(int i = 0; i < n; i++){
        int b=0;
        cout<<"Ingrese el valor del arreglo en la posicion "<<i<<endl;
        cin>>b;
        x[i] = b;
    }
    return x;
}

void escribir_arreglo_int(int* X, int n){
    for(int i=0;i<n;i++){
            cout<<X[i]<<" ";
        }
}

void escribir_arreglo_double(double* X, int n){
    for(int i=0;i<n;i++){
        cout<<X[i]<<" ";
    }
}

bool* arreglo_criba_erast(int n){
    bool* criba_erast=new bool[n];
    for(int i=1;i<=n;i++){
        criba_erast[i]=true;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 2; i*j <=n; j++){
            criba_erast[i*j] = false;
        }
    }
    return criba_erast;
}

void escribir_criba_erast(bool *a, int n){
    for(int i = 2; i<=n;i++){
        if(a[i]){
            cout<<i<<" ";
        }
    }
}

double suma_arr(int* a, int n){
    double suma=0.0;
    for(int i=0; i < n; i++){
        suma= suma+ a[i];
    }
    return suma*1.0;
}

double promedio_arr(int* a, int n){
    double suma=0;
    for(int i=0; i < n; i++){
        suma= suma+ a[i];
    }
    return suma*1.0/n;
}

double producto_arrs(int* a, int* b, int n){
    double producto=0;
    for(int i = 0; i < n; i++){
        producto=producto+(a[i]*b[i]);
    }
    return producto;
}

double minimo_arr(int* a, int n){
    if(n==1){
        return a[0];
    }else{
        return menor(minimo_arr(a,n-1),a[n-1]);
    }
}

double maximo_arr(int* a, int n){
        if(n==1){
            return a[0];
        }else{
            return mayor(maximo_arr(a,n-1),a[n-1]);
    }
}

double* producto_direct_arrs(int* a, int* b, int n){
    double* c= new double[n];
    for(int i = 0; i < n; i++){
        c[i]=a[i]*b[i];
    }
    return c;
}

int* ordenar(int* a,int n){
    int temp=0;
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    return ordenar(a, n-1);
    }
}

double mediana_arr(int* a, int n){
    a=ordenar(a, n);
    if(n%2==0){
        return (a[(n/2)-1]+a[n/2])/2.0;
    }else{
        return a[(n-1)/2];
    }
}

int* fin_ceros(int* a, int n){
    int temp=0;
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(a[i]==0){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        return fin_ceros(a, n-1);
    }
}

int bin2dec(int* x, int n){
    if(n==1){
        return x[0]*1;
    }else{
        return bin2dec(x,n-1)+(x[n-1]*potencia(2,n-1));
    }
}

int* dec2bin(int x){
    int n=num_veces_div(x,0);
    int* a=crear_arreglo_int(n);
    for(int i = 0; i < n; i++){
        a[i] = x % 2;
        x= x/2;
    }
    a[n]=x/2;
    return a;
}

int mcd_arr(int *a, int n){
    if(n==1){
        return a[0];
    }else{
        return mcd(a[n-1],mcd_arr(a,n-1));
    }
}

int mcm_arr(int *a, int n){
    if(n==0){
		return a[0];
	}else{
		return mcm(mcm_arr(a, n-1), a[n-1]);
	}
}

int* elm_repetidos(int* a, int n){
    int j=0,z=0,cont,num;
    int* aux=crear_arreglo_int(n);
    int* f=crear_arreglo_int(n);
    for(int i=0;i<n;i++){
        cont=0;
        num=a[i];
        aux[j]=num;
        j++;
        for(int k=0;k<n;k++){
            if(aux[k]==num){
                cont++;
            }
        }
        if(cont==1){
            f[z]=num;
            z++;
        }
    }
    return f;
}

int repetidos(int* a, int n){
    int j=0,z=0,cont,num;
    int* aux=crear_arreglo_int(n);
    int* f=crear_arreglo_int(n);
    for(int i=0;i<n;i++){
        cont=0;
        num=a[i];
        aux[j]=num;
        j++;
        for(int k=0;k<n;k++){
            if(aux[k]==num){
                cont++;
            }
        }
        if(cont==1){
            f[z]=num;
            z++;
        }
    }
    return z;
}

double* crear_arreglo_double(int n){
    return new double[n];
}

bool* crear_arreglo_bool(int n){
    return new bool[n];
}

void liberar_arreglo_int(int* x){
    delete[] x;
    return;
}

void liberar_arreglo_double(double* x){
    delete[] x;
    return;
}

void liberar_arreglo_bool(bool* x){
    delete[] x;
    return;
}

double* leer_arreglo_double(double* x, int n){
    for(int i = 0; i < n; i++){
        int b=0;
        cout<<"Ingrese el valor del arreglo en la posicion "<<i<<endl;
        cin>>b;
        x[i] = b;
    }
    return x;
}
