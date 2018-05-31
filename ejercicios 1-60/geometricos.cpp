#include<iostream>
#include "geometricos.h"
using namespace std;

char* par_per_nin(double a, double ya, double b, double yb){
    if(a==b && ya!=yb){
        return "son paralelas";
    }else if(a*b == -1){
        return "son perpendiculares";
    }else{
        return "no son paralelas ni perpendiculares";
    };
};

double* pun_int(double a, double ya, double b, double yb){
    double* x = new double[2];
    x[0]= (yb-ya)/(a-b);
    x[1]= a*x[0] + ya;
    cout << x[0] << " , " << x[1] << endl;
}

double area_tri_cir(double r){
    return 3*r*r*1.7320508075;
};

double *per_are_poli(double r){
    double *B= new double[12];
    B[0]=4*r*1.4142135623731; //Perimetro del cuadrado inscrito
    B[1]=2*r*r; //Area cuadrado inscrito
    B[2]=8*r; //Perimetro cuadrado circunscrito
    B[3]=4*r*r; //Area cuadrado circunscrito
    B[4]=10*r*0.587785252292; //Perimetro del pentagono inscrito
    B[5]=5*r*r*0.587785252292*0.809016994375; //Area pentagono inscrito
    B[6]=10*r*0.5568933069; //Perimetro pentagono circunscrito
    B[7]=5*r*r*0.5568933069; //Area pentagono circunscrito
    B[8]=6*r; //Perimetro del hexagono inscrito
    B[9]=(3*r*r*1.7320508075)/2; //Area hexagono inscrito
    B[10]=4*r*1.7320508075; //Perimetro hexagono circunscrito
    B[11]=2*r*r*1.7320508075; //Area hexagono circunscrito
    return B;
}

int fact(int n){
    if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
};

double telarana(double r){
    return 6*(fact(r)+r);
}





