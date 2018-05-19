#ifndef ARREGLOS_ENT_H_INCLUDED
#define ARREGLOS_ENT_H_INCLUDED

int* crear_arreglo_int(int n);

int* leer_arreglo_int(int* x, int n);

void escribir_arreglo_int(int* X, int n);

void escribir_arreglo_double(double* X, int n);

bool* arreglo_criba_erast(int n);

void escribir_criba_erast(bool *a, int n);

double suma_arr(int* a, int n);

double promedio_arr(int* a, int n);

double producto_arrs(int* a, int* b, int n);

double minimo_arr(int* a, int n);

double maximo_arr(int* a, int n);

double* producto_direct_arrs(int* a, int* b, int n);

int* ordenar(int* a,int n);

double mediana_arr(int* a, int n);

int* fin_ceros(int* a, int n);

int bin2dec(int* x, int n);

int* dec2bin(int x);

int mcd_arr(int *a, int n);

int mcm_arr(int *a, int n);

int* elm_repetidos(int* a, int n);

int repetidos(int* a, int n);

int* imprimir(int* x);

double* crear_arreglo_double(int n);

bool* crear_arreglo_bool(int n);

void liberar_arreglo_int(int* x);

void liberar_arreglo_double(double* x);

void liberar_arreglo_bool(bool* x);

double* leer_arreglo_double(double* x, int n);

#endif // ARREGLOS_ENT_H_INCLUDED
