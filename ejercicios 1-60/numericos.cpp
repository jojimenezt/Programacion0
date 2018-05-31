#include "numericos.h"

double potencia(int b, int p){
    if(p == 0){
        return 1;
    }else if(p > 0){
        return b*potencia(b,p-1);
    }else{
        return 1/potencia(b,-p);
    }
};

bool divisible(int n, int d){
    return n%d == 0;
};

bool primo(int n){
    int p = 0;
    for(int i=1;i<=n;i++){
        if(divisible(n,i)==1){
            p++;
        }
    }
    return p==2;
};

int mcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return mcd(b,a%b);
    }
}

bool primorelativo(int a, int b){
    return mcd(a,b)==1;
};

bool multiplo(int m, int a, int b){
    return m%(a+b)==0;
};

double poldado(double a, double b, double c, double x){
    return a*x*x + b*x + c;
};

double pollinder(double a, double b, double c){
    return 2*a;
};

double poldadoder(double a, double b, double c, double x){
    return 2*a*x + b;
};

bool esfibo(int n){
    int a=1;
    int b=1;
    int c;
    do{
        c=b+a;
        a=b;
        b=c;
    }while(n>c);
    return n == c;
}

