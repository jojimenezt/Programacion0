#ifndef POLINOMIOS_H_INCLUDED
#define POLINOMIOS_H_INCLUDED

double* leer_polinomio(int n);

double* escribir_pol(double* a, int n);

double* eval_pol(double* a,int n, double* b, int m, int x);

double* sumar_pol(double* a,int n, double* b, int m);

double* resta_pol(double* a,int n, double* b, int m);

double* mult_pol(double* a,int n, double* b, int m);

double* div_pol(double* a,int n, double* b, int m, double* s, double t);

double* res_pol(double* a,int n, double* b, int m, double* s, double t);

#endif // POLINOMIOS_H_INCLUDED
