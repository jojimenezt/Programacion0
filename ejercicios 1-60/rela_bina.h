#ifndef RELA_BINA_H_INCLUDED
#define RELA_BINA_H_INCLUDED

int** crear_matriz_int(int n, int m);
int** union_rel(int** r, int** s, int n, int m);
int** interseccion_rel(int** r, int** s, int n, int m);
bool con_igu(int* a,int n, int* b, int m);
bool simetr_rel(int** r, int n, int m,int* a, int* b);
bool reflec_rel(int** r, int n, int m,int* a, int* b);
bool transi_rel(int** r, int n, int m,int* a, int* b);
bool antisim_rel(int** r, int n, int m,int* a, int* b);
bool orden_rel(int** r, int n, int m,int* a, int* b);
bool equiv_rel(int** r, int n, int m,int* a, int* b);
bool funcion(int** r, int n, int m);
bool fun_inyec(int** r, int n, int m);
bool fun_sobre(int** r, int n, int m);

#endif // RELA_BINA_H_INCLUDED
