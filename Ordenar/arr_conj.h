#ifndef ARR_CONJ_H_INCLUDED
#define ARR_CONJ_H_INCLUDED

int* union_arrs(int* a,int n,int* b,int m);

int* inter_arrs(int* a,int n,int* b,int m);

int tam_inter_arrs(int* a,int n,int* b,int m);

int* dif_arrs(int* x,int m, int* y,int n);

int tam_dif_arrs(int* x,int m, int* y,int n);

int* dif_sim_arrs(int* x,int m, int* y,int n);

bool* pert_arrs(int* a,int n, int* b,int m, int x);

bool cont_arrs(int* a,int n,int* b,int m);

#endif // ARR_CONJ_H_INCLUDED
