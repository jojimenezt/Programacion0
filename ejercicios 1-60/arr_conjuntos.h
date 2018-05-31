#ifndef ARR_CONJUNTOS_H_INCLUDED
#define ARR_CONJUNTOS_H_INCLUDED

int* crear_arreglo_int(int n);
int* unio(int* x,int m, int* y,int n);
int* interseccion(int* x,int m, int* y,int n);
int* diferencia(int* x,int m, int* y,int n);
int* diferencia_simetrica(int* x,int m, int* y,int n);
bool* pertenece(int* x,int m, int* y,int n, int p);
bool contenido(int* x,int m, int* y,int n);

#endif // ARR_CONJUNTOS_H_INCLUDED
