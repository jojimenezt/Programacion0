#ifndef ARR_POLINOMIOS_H_INCLUDED
#define ARR_POLINOMIOS_H_INCLUDED

double* crear_arreglo_double(int n);
double* leer_polinomio(int n);
double* evaluar(double* a,int n, double* b, int m, int x);
int max_int(int a, int b);
double* suma_pol(double* a,int n, double* b, int m);
double* resta_pol(double* a,int n, double* b, int m);
double* mult_pol(double* a,int n, double* b, int m);
double* div_pol(double* a,int n, double* b, int m, double* r, double p);
double* res_pol(double* a,int n, double* b, int m, double* r, double p);

#endif // ARR_POLINOMIOS_H_INCLUDED
