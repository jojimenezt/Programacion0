#ifndef NUMERICOS_H_INCLUDED
#define NUMERICOS_H_INCLUDED

int potencia(int base, int potencia);

bool es_divisible(int a, int b);

bool es_primo(int numero,int c);

bool es_primo_relativo(int a, int b);

int mcd(int a, int b);

bool es_multiplo_suma(int a, int b, int m);

double eval_pol_punto(double a, double b, double c, double x);

double eval_coef_lineal_der(double a, double b, double c);

double eval_der_punto(double a, double b, double c, double x);

bool es_fib(int n);

double menor(double a, double b);

double valor_absoluto(double a);

double raiz(double a);

int fact(int x);

double mayor(int a, int b);

int num_veces_div(int a, int b);

int mcm(int a, int b);

int mayor_int(int c, int d);

double potencia_double(double base,int exp);

#endif // NUMERICOS_H_INCLUDED
