#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

double** crear_matriz_double(int n, int m);
double** suma_matriz(double** x, double** y, int n, int m);
double** multi_matrices(double** x,double** y,int n, int m, int l);
double suma_matriz_columna(double** x, int n, int m, int p);
double suma_matriz_fila(double** x, int n, int m, int p);
bool filas_suma(double** x,int n);
bool columnas_suma(double** x,int n);
double suma_matriz_diagonal(double** x, int n);
bool matriz_magica(double** x,int n);
double** may_men_num(double** x, int n, int m, int p);
int cofactor(double** a,int n, int f, int c);
int determinante(double** matriz, int n);
double** remplazar_col(double** A, int n, double* B, int j);
double* ecu_lin(double** A, int n, double* B);
double** matriz_trans(double** a, int n);
double** matriz_inver(double** a, int n);
double** llenar_cero(int n);
double** matriz_espir(int n, double* b);

#endif // MATRICES_H_INCLUDED
