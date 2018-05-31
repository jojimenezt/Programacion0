#include "otros.h"

int arboles(int t, int p, int k){
    if(t%(p*k)!=0){
        return t/(p*k) + 1;
    }else{
        return t/(p*k);
    }
};

double in_simple(double K, double i){
    return K *(1.0+ i*7.0);
};

double in_compuesto(double K, double i){
    double d = i+1;
    for(int p = 1; p<7; p++){
        d = d * (i+1);
    }
    return K*d;
};

int fibo(int n){
    if(n<2){
        return n;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
};

int pos_2fich(int n){
    return fibo(n+1);
};

int tribo(int n){
    if(n<2){
        return n;
    }else{
        return tribo(n-1)+tribo(n-2)+tribo(n-3);
    }
};

int pos_3fich(int n){
    return tribo(n+3);
};



