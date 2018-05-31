#include "arr_con_opti.h"
#include "arr_conjuntos.h"

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
