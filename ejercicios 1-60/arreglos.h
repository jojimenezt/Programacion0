#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

bool* arreglocribaerast(int n);
void escribircribaerast(bool *a, int n);
double suma(int* x, int n);
double promedio(int* x, int n);
double producto(int* v, int* w, int n);
double minimoarr(int* x, int n);
double maximoarr(int* x, int n);
double* producto_directo(int* v, int* w, int n);
int posmaximo(int* x, int n);
int* ordenar(int* x, int n);
double mediana(int* x, int n);
int* cerosfinal(int* a, int n);
int bin2dec(int* x, int n);
int tama(int n);
int* dec2bin(int x);
int max_div(int* x, int n);
int mcm(int a, int b);
int min_mul(int* x, int n);

#endif // ARREGLOS_H_INCLUDED
