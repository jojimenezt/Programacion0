#include <iostream>
#include "geometricos.h"
#include "numericos.h"

char* son_par_per(double m1, double x1, double m2, double x2){
    if(m1 == m2){
        return "Paralelas";
    }
    else if(m1 * m2 == -1){
        return "Perpendiculares" ;
    }
    else{
        return "Ninguna";
    }
}

double interseccion_x(double m1, double x1, double m2, double x2){
    return (x2-x1)/(m1-m2);
}

double interseccion_y(double m1, double x1, double m2, double x2){
    return m1*(interseccion_x(m1,x1,m2,x2)+x1);
}

double area_tri_circuns(double r){
	return ((2*raiz(3)*r)*3*r)/2;
}

double area_cuad_ins(double r){
    return potencia((raiz(2)*r),2);
}

double peri_cuad_ins(double r){
    return 4*raiz(2)*r;
}

double area_penta_ins(double r){
    return (5*potencia(r,2)*raiz(10+2*raiz(5)))/8;
}

double peri_penta_ins(double r){
    return 5*(r*raiz(10+2*raiz(5)))/8;
}

double area_hexa_ins(double r){
    return (3*potencia(r,2)*raiz(3))/2;
}

double peri_hexa_ins(double r){
    return 6*r;
}

double area_cuad_cir(double r){
	return 4*potencia(r,2);
}

double peri_cuad_cir(double r){
    return 8*r;
}

double area_penta_cir(double r){
    return (5*2*(r/raiz(3))*r)/2;
}

double peri_penta_cir(double r){
    return (5*2*(r/raiz(3)));
}

double area_hexa_cir(double r){
	return (6*2*(r/raiz(3)*r))/2;
}

double peri_hexa_cir(double r){
    return (6*2*(r/raiz(3)));
}

double telarana(double r){
    return arana(r,1);
}

double arana(double r, double m){
    if(r==m){
        return 6*m;
    }else{
        return arana(r,m+1)+6*m;
    }
}
