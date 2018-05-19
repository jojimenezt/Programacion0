#include "granja.h"

double litros_leche(int v,double n, double m, double M, double x){
    if(v==0){
        return 0;
    }else{
        return (n*m*x)/(M);
    }
}

int cant_huevos(int A){
    return 8*A/3;
}

double kil_esc(int P, int M, int G){
        int pob_max=(P+M+G)*1/3;
        if (pob_max<=G){
            return pob_max*0.05;
        }else if (6+M>=pob_max){
            return G*0.05+(pob_max-G)*0.03;
        }else{
            return G*0.05+M*0.03+(pob_max-G-M)*0.02;
        }
}

char* cer_eco(double m, double n, int p, int q, int s){
    int p_mad = 2*4*q*(m+n);
    int p_ace = 2*5*p*(m+n);
    int p_var = 2*8*s*(m+n);
    if(p_mad<p_ace && p_mad<p_var){
        return "Madera";
    }else{
        if(p_ace<p_var){
            return "Alambre";
        }
        else{
            return "Varilla";
        }
    }
}
