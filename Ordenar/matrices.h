#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

int** crear_matriz_int(int** X, int n, int m);

double** crear_matriz_double(double** X, int n, int m);

bool** crear_matriz_bool(bool** X, int n, int m);

int** llenar_matriz_int(int** X, int n, int m);

double** llenar_matriz_double(double** X, int n, int m);

int escribir_matriz_int(int** X, int n, int m);

double escribir_matriz_double(double** X, int n, int m);

double** suma_matriz(double** X,int n,double** Y,int m);

double** multi_matriz_double(double** X,int n,double** Y,int m);

double suma_columna_matriz(double** X,int n,int m,int columna);

double suma_fila_matriz(double** X,int n,int m,int fila);

bool filas_suma(double** x,int n);

bool columnas_suma(double** x,int n);

double suma_matriz_diagonal(double** x, int n);

bool matriz_magica(double** A, int n);

double** menores_mayores_x(double** X,int n,int m,int val);

double CalcularDeterminante(double** X,int n);

int** Espiral(int** X, bool** B, int* Y, int* DirF, int* DirC, int direccion, int posF, int posC, int pos, int f, int c);

#endif // MATRICES_H_INCLUDED
