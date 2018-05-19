#include "numericos.h"

int potencia(int base, int exp){
    if(exp==0 && base!=0){
        return 1;
    }else if(exp<0){
        return 1/potencia(base,exp-1)*base;
    }else{
        return potencia(base,exp-1)*base;
    }
}

bool es_divisible(int a, int b){
    return a % b == 0;
}

bool es_primo(int numero,int c){
    if(numero%c ==0 && numero!=2){
        return false;
    }else if(c>numero/2){
        return true;
    }else{
        return es_primo(numero,c+1);
    }
}

bool es_primo_relativo(int a, int b){
    if(mcd(a,b)==1){
        return 1;
    }else{
        return 0;
    }
}

int mcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return mcd(b,a%b);
    }
}

bool es_multiplo_suma(int a, int b, int m){
    return m%(a+b)==0;
}

double eval_pol_punto(double a, double b, double c, double x){
    return a*x*x+b*x+c;
}

double eval_coef_lineal_der(double a, double b, double c){
    return 2*a;
}

double eval_der_punto(double a, double b, double c, double x){
    return 2*a*x+b;
}

bool es_fib(int n){
    int fib=1;
    int fib1=1;
    int temp;
    do{
        temp=fib1+fib;
        fib=fib1;
        fib1=temp;
    }while(n>temp);
    return n == temp;
}

double raiz(double a){
    double Xo;
    double Xi = a;
    do{
        Xo = Xi;
        Xi = 0.5 * (Xo + a / Xo);
    }while(valor_absoluto(Xo - Xi) >= 1e-4);
    return 0.5 * (Xi + a / Xi);
};

double valor_absoluto(double a){
    if(a>0){
        return a;
    }else{
        return -a;
    }
}

int fact(int x){
    if(x==1){
        return 1;
    }else{
        return x*fact(x-1);
    }
}

double mayor(int a, int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}

double menor(double a, double b){
    if(a>=b){
        return b;
    }else{
        return a;
    }
}

int menor(int a, int b){
    if(a>=b){
        return b;
    }else{
        return a;
    }
}

int num_veces_div(int a, int b){
    if(a>1){
        a=a/2;
        return num_veces_div(a,b+1);
    }else{
        return b+1;
    }
}

int mcm(int a, int b){
    return a*b/(mcd(a,b));
}

int mayor_int(int c, int d){
    if(c>=d){
        return c;
    }else{
        return d;
    }
}

double potencia_double(double base,int exp){
    if(exp==0 && base!=0){
        return 1;
    }else if(exp<0){
        return 1/potencia_double(base,exp-1)*base;
    }else{
        return potencia_double(base,exp-1)*base;
    }
}
