#include "granja.h"

double litrosleche(int V, double M, double N, double m, double X){
    if(V==0){
        return 0;
    }else{
        return M*N*X/m;
    };
};

int huevos(int A){
    return 8*(A/3);
};

double kilosescorpiones(int G,int M, int P){
    int t = (G + M + P)* 1/3;
    double peso = 0;
    if(G>=t){
        peso = t * 0.05;
    }else if(G + M >=t){
        peso = G * 0.05 + (t-G) * 0.03;
    }else{
        peso = G * 0.05 + M * 0.03 + (t-G-M) * 0.02;
    }
    return peso;
};

char* cercacorral(double P, double Q, double S, double M, double N){
    double m = 2*M*N*P*5;
    double n = 2*M*N*Q*4;
    double j = 2*M*N*S*8;
    if(m<n && m<j){
        return "Alambre";
    }else if(n<m && n<j){
        return "Madera";
    }else{
        return "Varilla";
    };
};
