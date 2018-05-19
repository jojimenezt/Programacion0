#include "otros.h"
#include "numericos.h"

double poda_arboles(int p, int k, int t){
    return t/(k*1.0*p);
}

int pago_int_sim(int k, int i){
    return k+(i*7);
}

int pago_int_comp(int k, int i){
    return k*potencia((i/k)+1,7);
}

int fib(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}

int tribo(int n){
    if(n<=1){
        return 1;
    }
    else if(n==2){
        return 2;
    }else{
        return tribo(n - 1) + tribo(n - 2)+tribo(n-3);
    }
}
