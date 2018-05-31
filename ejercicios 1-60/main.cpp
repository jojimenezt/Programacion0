#include <iostream>
#include "granja.h"
#include "numericos.h"
#include "geometricos.h"
#include "otros.h"
#include "arreglos.h"
#include "arr_conjuntos.h"
#include "arr_polinomios.h"
#include "matrices.h"
#include "rela_bina.h"
#include "cadenas.h"
using namespace std;

char** Opciones (int n){
    char** X = new char*[n];
    return X;
};

int menu( char** opciones, int n ){
    for( int i=0; i<n; i++ ){
        cout << (i+1) << ". " << opciones[i] << endl;
    };
    cout << "0. Salir" << endl;
    int opc;
    do{
      cout << "Ingrese opcion:";
      cin >> opc;
      if( opc<0 || opc>n ){
        cout << "Opcion invalida, por favor intente de nuevo" << endl;
      };
    }while( opc < 0 || opc>n );
    return opc;
};

void litrosleche(){
    int V;
    double M;
    double N;
    double m;
    double X;
    cout << "Ingrese la cantidad de vacas de la granja: ";
    cin >> V;
    cout << "Ingrese un lado del corral de la granja: ";
    cin >> M;
    cout << "Ingrese el otro lado del corral de la granja: ";
    cin >> N;
    cout << "Ingrese la cantidad en metros cuadrados que necesita una vaca para producir X litros de leche: ";
    cin >> m;
    cout << "Ingrese X: ";
    cin >> X;
    cout << "la cantidad de litros de leche producidos en la granja son: " << litrosleche(V,M,N,m,X) << endl;
}

void huevos(){
    int A;
    cout << "Ingrese el numero de aves en la granja: ";
    cin >> A;
    cout << "La cantidad de huevos producidos por las gallinas de la granja son: " << huevos(A) << endl;
};

void kilosescorpiones(){
    int G;
    int M;
    int P;
    cout << "Ingrese la cantidad de escorpiones grandes que hay en la granja: ";
    cin >> G;
    cout << "Ingrese la cantidad de escorpiones medianos que hay en la granja: ";
    cin >> M;
    cout << "Ingrese la cantidad de escorpiones peque\244os que hay en la granja: ";
    cin >> P;
    cout << "EL maximo de kilos que se puede vender sin que la poblacion decrezca a menos de 2/3 es: " << kilosescorpiones(G,M,P) << endl;
};

void cercacorral(){
    double P;
    double Q;
    double S;
    double M;
    double N;
    cout << "Ingrese el costo del alambre de puas por metro: ";
    cin >> P;
    cout << "Ingrese el costo de las tablas por metro: ";
    cin >> Q;
    cout << "Ingrese el costo de las varillas por metro: ";
    cin >> S;
    cout << "Ingrese un lado del corral de la granja: ";
    cin >> M;
    cout << "Ingrese el otro lado del corral de la granja: ";
    cin >> N;
    cout << "La forma de cercar el corral mas economica es: " << cercacorral(P,Q,S,M,N) << endl;
}

void granja(){
    char** opciones = new char*[4];
    opciones[0] = "Litros de leche";
    opciones[1] = "Huevos por mes";
    opciones[2] = "Kilos de escorpiones";
    opciones[3] = "Cercado mas barato";
    int opc;
    do{
      opc = menu(opciones, 4);
      switch( opc ){
        case 1: litrosleche(); break;
        case 2: huevos(); break;
        case 3: kilosescorpiones(); break;
        case 4: cercacorral(); break;
      };
    }while(opc!=0);
};

void potencia(){
    int b;
    int p;
    cout << "Ingrese la base de la potencia: ";
    cin >> b;
    cout << "Ingrese el exponente: ";
    cin >> p;
    cout << "La potencia de la base dada al exponente dado es: " << potencia(b,p) << endl;
}

void divisible(){
    int n;
    int d;
    cout << "Ingrese el numero que quiere saber si es divisible: ";
    cin >> n;
    cout << "Ingrese el numero por el que quiere saber si el numero anterior es divisible: ";
    cin >> d;
    if(divisible(n,d)){
        cout << "Es divisible" << endl;
    }else{
        cout << "No es divisible" << endl;
    }
}

void primo(){
    int n;
    cout << "Ingrese el numero que quiere identificar si es primo: ";
    cin >> n;
    if(primo(n)){
        cout << "Es primo" << endl;
    }else{
        cout << "No es primo" << endl;
    }
}

void primorelativo(){
    int n;
    int m;
    cout << "Ingrese el primer numero a verificar: ";
    cin >> n;
    cout << "Ingrese el segundo numero a verificar: ";
    cin >> m;
    if(primorelativo(n,m)){
        cout << "Son primos relativos" << endl;
    }else{
        cout << "No son primos relativos" << endl;
    }
};

void multiplo(){
    int a;
    int b;
    int m;
    cout << "Es m multiplo de la suma de los numeros a y b" << endl;
    cout << "Ingrese m: ";
    cin >> m;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    if(multiplo(m,a,b)){
        cout << "Es multiplo" << endl;
    }else{
        cout << "No es multiplo" << endl;
    }
};

void poldado(){
    double a;
    double b;
    double c;
    double x;
    cout << "Introduzca el coeficiente cuadratico: ";
    cin >> a;
    cout << "Introduzca el coeficiente lineal: ";
    cin >> b;
    cout << "Introduzca el coeficiente independiente: ";
    cin >> c;
    cout << "Introduzca la variable: ";
    cin >> x;
    cout << "El polinomio evaluado en ese punto da como resultado: " << poldado(a,b,c,x) << endl;
}

void pollinder(){
    double a;
    double b;
    double c;
    cout << "Introduzca el coeficiente cuadratico: ";
    cin >> a;
    cout << "Introduzca el coeficiente lineal: ";
    cin >> b;
    cout << "Introduzca el coeficiente independiente: ";
    cin >> c;
    cout << "EL coeficiente lineal de la derivada es: " << pollinder(a,b,c) << endl;
};

void poldadoder(){
    double a;
    double b;
    double c;
    double x;
    cout << "Introduzca el coeficiente cuadratico: ";
    cin >> a;
    cout << "Introduzca el coeficiente lineal: ";
    cin >> b;
    cout << "Introduzca el coeficiente independiente: ";
    cin >> c;
    cout << "Introduzca la variable: ";
    cin >> x;
    cout << "La derivada del polinomio evaluado en ese punto da como resultado: " << poldadoder(a,b,c,x) << endl;
};

void esfibo(){
    int n;
    cout << "Ingrese el numero que desea saber si pertenece a Fibonacci: ";
    cin >> n;
    if(esfibo(n)){
        cout << "Pertenece a Fibonacci" << endl;
    }else{
        cout << "No pertenece a Fibonacci" << endl;
    }
}

void numericos(){
    char** opciones = new char*[9];
    opciones[0] = "Potencia";
    opciones[1] = "Divisible";
    opciones[2] = "Primo";
    opciones[3] = "Primos relativos";
    opciones[4] = "Multiplo";
    opciones[5] = "Calcular un polinomio cuadrado";
    opciones[6] = "Calcular el coeficiente lineal de la derivada";
    opciones[7] = "Calcular la derivada";
    opciones[8] = "Fibonnacci";
    int opc;
    do{
      opc = menu(opciones, 9);
      switch( opc ){
        case 1: potencia(); break;
        case 2: divisible(); break;
        case 3: primo(); break;
        case 4: primorelativo(); break;
        case 5: multiplo(); break;
        case 6: poldado(); break;
        case 7: pollinder(); break;
        case 8: poldadoder(); break;
        case 9: esfibo(); break;
      };
    }while(opc!=0);
};

void par_per_nin(){
    double a;
    double ya;
    double b;
    double yb;
    cout << "Ingresa la pendiente de la primera recta: ";
    cin >> a;
    cout << "Ingresa el punto de corte la primera recta: ";
    cin >> ya;
    cout << "Ingresa la pendiente de la segunda recta: ";
    cin >> b;
    cout << "Ingresa el punto de corte la segunda recta: ";
    cin >> yb;
    cout << "Las dos recas ingresadas " << par_per_nin(a,ya,b,yb) << endl;
};

void pun_int(){
    double a;
    double ya;
    double b;
    double yb;
    cout << "Ingresa la pendiente de la primera recta: ";
    cin >> a;
    cout << "Ingresa el punto de corte la primera recta: ";
    cin >> ya;
    cout << "Ingresa la pendiente de la segunda recta: ";
    cin >> b;
    cout << "Ingresa el punto de corte la segunda recta: ";
    cin >> yb;
    cout << "El punto de interseccion entre las dos rectas es: " << pun_int(a,ya,b,yb) << endl;
}

void area_tri_cir(){
    int r;
    cout << "Ingrese el radio del circulo que inscribe al triangulo: ";
    cin >> r;
    cout << "El area del triangulo que inscribe a la circunferencia es: " << area_tri_cir(r) << endl;
}

void peri_area(){
    double r;
    cout << "Ingresa el radio de la circunferencia donde quieres inscribir y circunscribir al cuadrado, pentagono y hexagono: ";
    cin >> r;
    double* p= per_are_poli(r);
    cout << "El perimetro del cuadrado inscrito es: " << p[0] << endl;
    cout << "El area del cuadrado inscrito es: " << p[1] << endl;
    cout << "El perimetro del cuadrado circunscrito es: " << p[2] << endl;
    cout << "El area del cuadrado circunscrito es: " << p[3] << endl;
    cout << "El perimetro del pentagono inscrito es: " << p[4] << endl;
    cout << "El area del pentagono inscrito es: " << p[5] << endl;
    cout << "El perimetro del pentagono circunscrito es: " << p[6] << endl;
    cout << "El area del pentagono circunscrito es: " << p[7] << endl;
    cout << "El perimetro del hexagono inscrito es: " << p[8] << endl;
    cout << "El area del hexagono inscrito es: " << p[9] << endl;
    cout << "El perimetro del hexagono circunscrito es: " << p[10] << endl;
    cout << "El area del hexagono circunscrito es: " << p[11] << endl;
}

void telarana(){
    int r;
    cout << "Ingrese el radio para calcular la cantidad de telara\244a: ";
    cin >> r;
    cout << "La cantidad de telara\244a que requiere la ara\244a es de: " << telarana(r) << endl;
};

void geometricos(){
    char** opciones = new char*[5];
    opciones[0] = "Las rectas son paralelas, perpendiculares o ninguna de las dos";
    opciones[1] = "Punto de interseccion de dos rectas";
    opciones[2] = "Area de un triangulo circunscrito";
    opciones[3] = "Calculadora de Area y Perimetro del cuadrado, pentagono y hexagono, inscrito y circunscrito";
    opciones[4] = "Telara\244a";
    int opc;
    do{
      opc = menu(opciones, 5);
      switch( opc ){
        case 1: par_per_nin(); break;
        case 2: pun_int(); break;
        case 3: area_tri_cir(); break;
        case 4: peri_area(); break;
        case 5: telarana(); break;
      };
    }while(opc!=0);;
};

void arboles(){
    int t;
    int p;
    int k;
    cout << "Introduzca la cantidad de hojas que quiere: ";
    cin >> t;
    cout << "Introduzca la cantidad de hojas por rama: ";
    cin >> p;
    cout << "Introduzca la cantidad de ramas por arbol: ";
    cin >> k;
    cout << "La cantidad de arboles que se deben podar son: " << arboles(t,p,k) << endl;
}

void in_simple(){
    double K;
    double i;
    cout << "Ingrese la cantidad que le prestaron: ";
    cin >> K;
    cout << "Ingrese el interes diario al que se le fue prestado el monto: ";
    cin >> i;
    cout << "En una semana usted debera pagar: " << in_simple(K,i) << endl;
}

void in_compuesto(){
    double K;
    double i;
    cout << "Ingrese la cantidad que le prestaron: ";
    cin >> K;
    cout << "Ingrese el interes diario al que se le fue prestado el monto: ";
    cin >> i;
    cout << "En una semana usted debera pagar: " << in_compuesto(K,i) << endl;
}

void interes(){
    char** opciones = new char*[2];
    opciones[0] = "Simple";
    opciones[1] = "Compuesto";
    int opc;
    do{
      opc = menu(opciones, 2);
      switch( opc ){
        case 1: in_simple(); break;
        case 2: in_compuesto(); break;
      };
    }while(opc!=0);;
}

void fichas1(){
    int n;
    cout << "Ingresa un n, para completar la base, dada por 1xn: ";
    cin >> n;
    cout << "Las posibilidades don fichas de 1x1 y 1x2 son: " << pos_2fich(n) << endl;
}

void fichas2(){
    int n;
    cout << "Ingresa un n, para completar la base, dada por 1xn: ";
    cin >> n;
    cout << "Las posibilidades don fichas de 1x1, 1x2 y 1x3 son: " << pos_3fich(n) << endl;
}

void fichas(){
    char** opciones = new char*[2];
    opciones[0] = "Fichas de 1x1 y 1x2, en una base de 1xn";
    opciones[1] = "Fichas de 1x1,1x2 y 1x3, en una base de 1xn";
    int opc;
    do{
      opc = menu(opciones, 2);
      switch( opc ){
        case 1: fichas1(); break;
        case 2: fichas2(); break;
      };
    }while(opc!=0);;
}

void otros(){
    char** opciones = new char*[3];
    opciones[0] = "Cuantos arboles podar";
    opciones[1] = "Interes simple y compuesto";
    opciones[2] = "Fichas de lego";
    int opc;
    do{
      opc = menu(opciones, 3);
      switch( opc ){
        case 1: arboles(); break;
        case 2: interes(); break;
        case 3: fichas(); break;
      };
    }while(opc!=0);;
};

int* leer_arreglo_int(int n){
    int* x = new int[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    };
    return x;
};
double* leer_arreglo_double(int n){
    double* x = new double[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    };
    return x;
};

int* imprimir(int* x){
    int s = x[0];
    for(int i=1;i<s;i++){
        cout << x[i] << endl;
    }
    return x;
};
double* imprimir(double* x){
    double s = x[0];
    for(int i=1;i<s;i++){
        cout << x[i] << endl;
    }
    return x;
};

int* escribir(int* x, int n){
    for(int i=0;i<n;i++){
        cout << x[i] << endl;
    }
}
double* escribir(double* x, int n){
    for(int i=0;i<n;i++){
        cout << x[i] << endl;
    }
}

void criba(){
    int n;
    cout << "Introduzca el numero hasta el que quiere calcular la criba de Eratostenes: ";
    cin >> n;
    bool* i = arreglocribaerast(n);
    cout << "Los numeros primos desde 2 hasta n son: ";
    escribircribaerast(i,n);
    cout << endl;
}

void suma(){
    int n;
    cout << "Ingrese el tama\244o del arreglo que quiere sumar: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "La suma de los elemntos del arreglo es: " << suma(x,n) << endl;
}

void promedio(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere el promedio: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "El promedio de los elemntos del arreglo es: " << promedio(x,n) << endl;
}

void producto(){
    int n;
    cout << "Ingrese el tama\244o de los arreglos de los cuales quiere calcular el producto: ";
    cin >> n;
    cout << "Ingrese los datos del primer arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "Ingrese los datos del segundo arreglo: ";
    int* y = leer_arreglo_int(n);
    cout << "El producto de los dos arreglos es: " << producto(x,y,n) << endl;
}

void minimo(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere saber el elemento minimo: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "El minimo de los elemntos del arreglo es: " << minimoarr(x,n) << endl;
}

void maximo(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere saber el elemento maximo: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "El minimo de los elemntos del arreglo es: " << maximoarr(x,n) << endl;
}

void producto_directo(){
    int n;
    cout << "Ingrese el tama\244o de los arreglos de los cuales quiere calcular el producto directo: ";
    cin >> n;
    cout << "Ingrese los datos del primer arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "Ingrese los datos del segundo arreglo: ";
    int* y = leer_arreglo_int(n);
    cout << "El producto directo de los dos arreglos es: ";
    double* p = producto_directo(x,y,n);
    imprimir(p);
    cout << endl;
}

void mediana(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere saber la mediana: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "La mediana del arreglo es: " << mediana(x,n) << endl;
}

void cerosfinal(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere separar los ceros y ponerlos al final: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    int* y = cerosfinal(x,n);
    cout << "El arreglo quedara: ";
    escribir(y,n);
}

void bin2dec(){
    int n;
    cout << "Ingrese la cantidad de digitos del numero binario a convertir: ";
    cin >> n;
    cout << "Ingrese el numero binario al reves: ";
    int* x = leer_arreglo_int(n);
    cout << "La conversion de su numero binario a decimal es: " << bin2dec(x,n) << endl;
}

void dec2bin(){
    int n;
    cout << "Ingrese el numero a convertir a binario: ";
    cin >> n;
    int* x = dec2bin(n);
    cout << "EL numero que dio convertido a binario al reves es: ";
    imprimir(x);
}

void max_div(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere saber el maximo comun divisor: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "El maximo comun divisor de el arreglo es: " << max_div(x,n) << endl;
}

void min_mul(){
    int n;
    cout << "Ingrese el tama\244o del arreglo del cual quiere saber el minimo comun multiplo: ";
    cin >> n;
    cout << "Ingrese los datos del arreglo: ";
    int* x = leer_arreglo_int(n);
    cout << "El minimo comun multiplo de el arreglo es: " << min_mul(x,n) << endl;
}

void arreglos(){
    char** opciones = new char*[13];
    opciones[0] = "Criba de Eratostenes";
    opciones[1] = "Suma";
    opciones[2] = "Promedio";
    opciones[3] = "Producto";
    opciones[4] = "Minimo";
    opciones[5] = "Maximo";
    opciones[6] = "Producto directo";
    opciones[7] = "Mediana";
    opciones[8] = "Ceros al final";
    opciones[9] = "De binarios a decimal";
    opciones[10] = "De decimal a binarios";
    opciones[11] = "Maximo comun divisor del arreglo";
    opciones[12] = "Minimo comun multiplo del arreglo";
    int opc;
    do{
      opc = menu(opciones, 13);
      switch( opc ){
        case 1: criba(); break;
        case 2: suma(); break;
        case 3: promedio(); break;
        case 4: producto(); break;
        case 5: minimo(); break;
        case 6: maximo(); break;
        case 7: producto_directo(); break;
        case 8: mediana(); break;
        case 9: cerosfinal(); break;
        case 10: bin2dec(); break;
        case 11: dec2bin(); break;
        case 12: max_div(); break;
        case 13: min_mul(); break;
      };
    }while(opc!=0);
};

void arr_conj_opti(){
}

void arr_conjuntos(){
    int n;
    int m;
    cout << "Ingrese el tama\244o del primer conjunto: ";
    cin >> n;
    cout << "Ingrese los datos del primer conjunto: ";
    int* x = leer_arreglo_int(n);
    cout << "Ingrese el tama\244o del segundo conjunto: ";
    cin >> m;
    cout << "Ingrese los datos del segundo conjunto: ";
    int* y = leer_arreglo_int(m);
    char** opciones = new char*[7];
    opciones[0] = "Union";
    opciones[1] = "Interseccion";
    opciones[2] = "Diferencia";
    opciones[3] = "Diferencia simetrica";
    opciones[4] = "Pertenece";
    opciones[5] = "Contenido";
    opciones[6] = "Menu optimizado";
    int opc;
    do{
      opc = menu(opciones, 7);
      switch( opc ){
    case 1: cout << "La union de los conjuntos es: ";
            imprimir(unio(x,n,y,m));
            cout << endl; break;
        case 2: cout << "La interseccion entre los conjuntos es: ";
        imprimir(interseccion(x,n,y,m));
        cout << endl; break;
        case 3: cout << "La diferencia del primer conjunto con el segundo es: ";
            imprimir(diferencia(x,n,y,m));
            cout << endl; break;
        case 4: cout << "La diferencia simetrica de los conjuntos es: ";
            imprimir(diferencia_simetrica(x,n,y,m));
            cout << endl; break;
        case 5: {int p;
                cout << "Ingrese el numero a verificar si esta en alguno de los conjuntos: ";
                cin >> p;
                bool* l = pertenece(x,n,y,m,p);
                if(l[0]==1){
                    cout << "Pertenece al primer conjunto" << endl;
                }else{
                    cout << "No pertenece al primer conjunto"<< endl;
                }
                if(l[1]==1){
                    cout << "Pertenece al segundo conjunto"<< endl;
                }else{
                    cout << "No pertenece al segundo conjunto"<< endl;
                }
                }break;
        case 6: if(contenido(x,n,y,m)==1){
                cout << "El primer conjunto esta contenido en el segundo" << endl;
            }else{
                cout << "El primer conjunto no esta contenido en el segundo" << endl;
            }
             break;
        case 7: arr_conj_opti(); break;
      };
    }while(opc!=0);
}

double* escribir_pol(double* a, int n){
    for(int i=n;i>=0;i--){
        if(a[i]>=0){
            cout << "+";
        }
        cout << a[i] << "x^" << i;
    }
}

void arr_pol(){
    int n;
    int m;
    cout << "Ingrese el grado del primer polinomio: ";
    cin >> n;
    cout << "Ingrese los coeficientes del primer polinomio: ";
    double* x = leer_polinomio(n);
    cout << "Ingrese el grado del segundo polinomio: ";
    cin >> m;
    cout << "Ingrese los coeficientes del segundo polinomio: ";
    double* y = leer_polinomio(m);
    char** opciones = new char*[6];
    opciones[0] = "Evaluar los polinomios";
    opciones[1] = "Sumar los polinomios";
    opciones[2] = "Restar los polinomios";
    opciones[3] = "Multiplicar los polinomios";
    opciones[4] = "Dividir los polinomios";
    opciones[5] = "Residuo de la division";
    int opc;
    do{
      opc = menu(opciones, 6);
      switch( opc ){
        case 1:{
            int e;
            cout << "Ingrese la x para evaluar los dos polinomios: ";
            cin >> e;
            double* v = evaluar(x,n,y,m,e);
            cout << "El primer polinomio da: " << v[0] << endl;
            cout << "El segundo polinomio da: " << v[1] << endl;
        } break;
        case 2: {
            cout << "la suma de los polinomios da: ";
            double* a = suma_pol(x,n,y,m);
            int b = max_int(n,m);
            escribir_pol(a,b);
            cout << endl;
            }break;
        case 3: {
            cout << "la resta de los polinomios da: ";
            double* a = resta_pol(x,n,y,m);
            int b = max_int(n,m);
            escribir_pol(a,b);
            cout << endl;
            }break;
        case 4: {
            cout << "La multiplicacion de los polinomios da: ";
            double* a = mult_pol(x,n,y,m);
            escribir_pol(a,n+m);
            cout << endl;
            }break;
        case 5: {
            cout << "La division de los polinomios da: ";
            double* r = new double[n-m+1];
            double* a = div_pol(x,n,y,m,r,n-m);
            escribir_pol(a,n-m);
            cout << endl;
            }break;
        case 6:  {
            cout << "el redisuo de la división de los polinomios da: ";
            double* r = new double[n-m+1];
            double* a = res_pol(x,n,y,m,r,n-m);
            escribir_pol(a,n);
            cout << endl;
            }break;
      };
    }while(opc!=0);
}

double** leer_matriz_double(double** X, int n, int m){
    for(int i = 0;i < n; i++){
        for(int j = 0;j<m; j++){
            cout << "X[" << i << "][" << j << "] = " ;
            cin >> X[i][j];
        }
    }
    return X;
}

void escribir_matriz_double(double** X, int n, int m){
    for(int i = 0;i < n; i++){
        for(int j = 0;j<m; j++){
            cout << "|" <<X[i][j] << "\t";
        }
        cout << "|" << endl;
    }
}

void suma_matriz(){
    int n; int m;
    cout << "Ingrese el numero de filas de las matrices: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de las matrices: ";
    cin >> m;
    cout << "Ingrese los datos de la primera matriz: ";
    double** x = crear_matriz_double(n,m);
    leer_matriz_double(x,n,m);
    cout << "Ingrese los datos de la segunda matriz: ";
    double** y = crear_matriz_double(n,m);
    leer_matriz_double(y,n,m);
    cout << "La suma de las matrices dadas es: ";
    double** z = suma_matriz(x,y,n,m);
    escribir_matriz_double(z,n,m);
}

void multi_matrices(){
    int n; int m; int l;
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la primera matriz y el numero de filas de la segunda matriz: ";
    cin >> m;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> l;
    cout << "Ingrese los datos de la primera matriz: ";
    double** x = crear_matriz_double(n,m);
    leer_matriz_double(x,n,m);
    cout << "Ingrese los datos de la segunda matriz: ";
    double** y = crear_matriz_double(m,l);
    leer_matriz_double(y,m,l);
    cout << "La multiplicacion de las matrices dadas es: ";
    double** z = crear_matriz_double(n,l);
    z = multi_matrices(x,y,n,m,l);
    escribir_matriz_double(z,n,l);
}

void suma_matriz_columna(){
    int n; int m; int p;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> m;
    cout << "Ingrese la columna a sumar de la matriz(teniendo en cuenta que las columnas empiezan en 0 y van hasta n-1): ";
    cin >> p;
    cout << "Ingrese los datos de la matriz: ";
    double** x = crear_matriz_double(n,m);
    leer_matriz_double(x,n,m);
    cout << "La suma de esa columna de la matriz es: " << suma_matriz_columna(x,n,m,p) << endl;
}

void suma_matriz_fila(){
    int n; int m; int p;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> m;
    cout << "Ingrese la fila a sumar de la matriz(teniendo en cuenta que las filas empiezan en 0 y van hasta n-1): ";
    cin >> p;
    cout << "Ingrese los datos de la matriz: ";
    double** x = crear_matriz_double(n,m);
    leer_matriz_double(x,n,m);
    cout << "La suma de esa fila de la matriz es: " << suma_matriz_fila(x,n,m,p) << endl;
}

void matriz_magica(){
    int n;
    cout << "Ingrese la cantidad de filas(y columnas ya que la matriz es cuadrada) de la matriz: ";
    cin >> n;
    cout << "Ingrese los datos de la matriz: ";
    double** x = crear_matriz_double(n,n);
    leer_matriz_double(x,n,n);
    bool c = matriz_magica(x,n);
    if(c==1){
        cout << "La matriz es una matriz magica" << endl;
    }else{
        cout << "La matriz no es una matriz magica" << endl;
    }
}

void may_men_num(){
    int n; int m; int p;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> m;
    cout << "Ingrese el numero a verificar en la matriz: ";
    cin >> p;
    double** x = crear_matriz_double(n,m);
    cout << "Ingrese los datos de la matriz: ";
    leer_matriz_double(x,n,m);
    cout << "Su matriz modificada, con los numeros mayores al numero daco con 1 y menor o igual con 0 quedara: ";
    double** y = may_men_num(x,n,m,p);
    escribir_matriz_double(y,n,m);
}

void determinante(){
    int n;
    cout << "Ingrese el tama\244o de la matriz: ";
    cin >> n;
    double** x = crear_matriz_double(n,n);
    cout << "Ingrese los datos de la matriz: ";
    x = leer_matriz_double(x,n,n);
    int y = determinante(x,n);
    cout << "El determinante de la matriz es: " << y << endl;
}

void ecu_lin(){
    int n;
    cout << "Se calculara una solucion X, para el sistem AX = B, siendo A una matriz y B un arreglo" << endl << "Ingrese el tama\244o de la matriz y del arreglo(son el mismo): ";
    cin>> n;
    double** a = crear_matriz_double(n,n);
    cout << "Ingrese los datos de la matriz(A): ";
    a = leer_matriz_double(a,n,n);
    double* s = crear_arreglo_double(n);
    cout << "Ingrese los datos del arreglo(B) ";
    s = leer_arreglo_double(n);
    double* o = ecu_lin(a,n,s);
    cout << "La solucion de la ecuacion (X) es: ";
    escribir(o,n);
}

void matriz_inver(){
    int n;
    cout << "Ingrese el tama\244o de la matriz: ";
    cin >> n;
    cout << "Ingrese los datos de la matriz: ";
    double** a =crear_matriz_double(n,n);
    a = leer_matriz_double(a,n,n);
    double** b = matriz_inver(a,n);
    cout << "La matriz inversa quedara: ";
    escribir_matriz_double(b,n,n);
}

void matriz_espir(){
    int n;
    cout << "Se creara un arreglo de tama\244o n^2, introduzca el n(tenga en cuenta que no esta al cuadrado): ";
    cin >> n;
    double* a = crear_arreglo_double(n*n);
    cout << "Ingrese los datos del arreglo: ";
    a = leer_arreglo_double(n*n);
    double** b = matriz_espir(n,a);
    cout << "La arreglo convertido a una matriz espiral de tama\244o n quedara asi: ";
    escribir_matriz_double(b,n,n);
}

void matrices(){
    char** opciones = new char*[10];
    opciones[0] = "Suma de dos matrices";
    opciones[1] = "Multiplicacion de dos matrices";
    opciones[2] = "Suma de la columna dada de una matriz";
    opciones[3] = "Suma de la fila dada de una matriz";
    opciones[4] = "Matriz magica";
    opciones[5] = "Mayor o menor o iguala un numero dado";
    opciones[6] = "Determinante de una matriz cuadrada";
    opciones[7] = "Sistema de ecuaciones lineales con una matriz";
    opciones[8] = "Matriz inversa";
    opciones[9] = "Matriz en espiral";
    int opc;
    do{
      opc = menu(opciones, 10);
      switch( opc ){
        case 1: suma_matriz(); break;
        case 2: multi_matrices(); break;
        case 3: suma_matriz_columna(); break;
        case 4: suma_matriz_fila(); break;
        case 5: minimo(); break;
        case 6: may_men_num(); break;
        case 7: determinante(); break;
        case 8: ecu_lin(); break;
        case 9: matriz_inver(); break;
        case 10: matriz_espir(); break;
      };
    }while(opc!=0);
}

int** crear_rela(int n, int m){
    int** l = crear_matriz_int(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "Se relaciona el elemento " << i << " del primer conjunto, con el elemento " << j << " del segundo conjunto: ";
            cin >> l[i][j];
        }
    }
    return l;
}

void escribir_matriz_int(int** X, int n, int m){
    for(int i = 0;i < n; i++){
        for(int j = 0;j<m; j++){
            cout << "|" <<X[i][j] << "\t";
        }
        cout << "|" << endl;
    }
}

void rela_bin(){
    int n; int m;
    cout << "Ingrese el tama\244o del primer conjunto: ";
    cin >> n;
    int* a = crear_arreglo_int(n);
    a = leer_arreglo_int(n);
    cout << "Ingrese el tama\244o del segundo conjunto: ";
    cin >> m;
    int* b = crear_arreglo_int(m);
    b = leer_arreglo_int(m);
    cout << "Ingrese la primera relacion, siendo 1 si estan relacionados, y 0 si no: " << endl;
    int** r = crear_rela(n,m);
    cout << "Ingrese la segunda relacion, siendo 1 si estan relacionados, y 0 si no: " << endl;
    int** s = crear_rela(n,m);
    char** opciones = new char*[10];
    opciones[0] = "Union";
    opciones[1] = "Interseccion";
    opciones[2] = "Simetria de la primera relacion";
    opciones[3] = "Reflexividad de la primera relacion";
    opciones[4] = "Transitividad de la primera relacion";
    opciones[5] = "Relacion de orden de la primera relacion";
    opciones[6] = "Relacion de equivalencia de la primera relacion";
    opciones[7] = "Funcion";
    opciones[8] = "Funcion inyectiva";
    opciones[9] = "Funcion sobreyectiva";
    int opc;
    do{
      opc = menu(opciones, 10);
      switch( opc ){
        case 1: {cout << "La union de las relaciones seria: ";
            int** a = union_rel(r,s,n,m);
            escribir_matriz_int(a,n,m);} break;
        case 2: {cout << "La union de las relaciones seria: ";
            int** a = interseccion_rel(r,s,n,m);
            escribir_matriz_int(a,n,m);} break;
        case 3: {bool t = simetr_rel(r,n,m,a,b);
            if(t==1){
                cout << "La primera relacion es simetrica" << endl;
            }else{
                cout << "La primera relacion no es simetrica" << endl;
            }    } ; break;
        case 4: {bool t = reflec_rel(r,n,m,a,b);
            if(t==1){
                cout << "La primera relacion es reflexiva" << endl;
            }else{
                cout << "La primera relacion no es reflexiva" << endl;
            }    } ; break;
        case 5: {bool t = transi_rel(r,n,m,a,b);
            if(t==1){
                cout << "La primera relacion es transitiva" << endl;
            }else{
                cout << "La primera relacion no es transitiva" << endl;
            }    } ; break;
        case 6: {bool t = orden_rel(r,n,m,a,b);
            if(t==1){
                cout << "La primera relacion es de orden" << endl;
            }else{
                cout << "La primera relacion no es de orden" << endl;
            }    } ; break;
        case 7: {bool t = equiv_rel(r,n,m,a,b);
            if(t==1){
                cout << "La primera relacion es de equivalencia" << endl;
            }else{
                cout << "La primera relacion no es de equivalencia" << endl;
            }    } ; break;
        case 8: {bool t = funcion(r,n,m);
            if(t==1){
                cout << "La primera relacion es funcion" << endl;
            }else{
                cout << "La primera relacion no es funcion" << endl;
            }    } ; break;
        case 9: {bool t = fun_inyec(r,n,m);
            if(t==1){
                cout << "La primera relacion es funcion inyectiva" << endl;
            }else{
                cout << "La primera relacion no es funcion inyectiva" << endl;
            }    } ; break;
        case 10: {bool t = fun_sobre(r,n,m);
            if(t==1){
                cout << "La primera relacion es funcion sobreyectiva" << endl;
            }else{
                cout << "La primera relacion no es funcion sibreyectiva" << endl;
            }    } ; break;
      };
    }while(opc!=0);
}

char* escribir(char* x){
    int n = longitud_cadena(x);
    for(int i=0; i<n; i++){
        cout << x[i];
    }cout << endl;
    return x;
}

char* leer_cadena(istream& is ,char* a, int n){
    is.getline(a,n);
    return a;
}

void ocurrencias(){
    char* x = new char;
    cout << "Ingrese una frase: ";
    cin.ignore();
    leer_cadena(cin,x,80);
    char a;
    cout << "Ingrese la letra que quiere saber cuantas veces aparece en la cadena: ";
    cin >> a;
    cout << "La letra aparece " << ocurrencias(a,x) << " veces en la cadena" << endl;
}

void subcadena(){
    char* a = new char;
    cout << "Ingrese la primera frase: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    char* b = new char;
    cout << "Ingrese la segunda frase: ";
    leer_cadena(cin,b,80);
    bool k = subcadena(a,b);
    if(k==1){
        cout << "Si es subcadena" << endl;
    }else{
        cout << "No es subcadena" << endl;
    }
}

void subcadena2(){
    char* a = new char;
    cout << "Ingrese la primera frase: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    char* b = new char;
    cout << "Ingrese la segunda frase: ";
    leer_cadena(cin,b,80);
    bool k = subcadena2(a,b);
    if(k==1){
        cout << "Si es subcadena" << endl;
    }else{
        cout << "No es subcadena" << endl;
    }
}

void invertir(){
    char* a = new char;
    cout << "Ingrese la frase a invertir: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    int n = longitud_cadena(a);
    char* o = invertir(a);
    cout << "La frase invertida seria: ";
    escribir(o);
    cout << endl;
}

void palindrome(){
    char* a = new char;
    cout << "Ingrese la frase a verificar si es palindrome: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    int n = longitud_cadena(a);
    bool k = palindrome(a);
    if(k==1){
        cout << "Si es palindrome" << endl;
    }else{
        cout << "No es palindrome" << endl;
    }
}

void frase_palindrome(){
    char* a = new char;
    cout << "Ingrese la frase a verificar si es palindrome: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    int n = longitud_cadena(a);
    bool k = frase_palindrome(a);
    if(k==1){
        cout << "Si es palindrome" << endl;
    }else{
        cout << "No es palindrome" << endl;
    }
}

void corri_izq(){
    char* a = new char;
    cout << "Ingrese la frase a correr a la izquierda: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    char* o = corri_izq(a);
    cout << "La frase corrida a la izquierda seria: ";
    escribir(o);
    cout << endl;
}

void corri_der(){
    char* a = new char;
    cout << "Ingrese la frase a correr a la derecha: ";
    cin.ignore();
    leer_cadena(cin,a,80);
    char* o = corri_der(a);
    cout << "La frase corrida a la derecha seria: ";
    escribir(o);
    cout << endl;
}

void codificar(){
    int n = 26;
    cout << "Ingrese la correspondencia de su nuevo orden alfabetico: " << endl;
    char* l = codigo(n);
    char* o = new char;
    cout << "Ingrese la frase a codificar: ";
    cin.ignore();
    leer_cadena(cin,o,80);
    char* p = codificar(o,l);
    cout << "La frase codificada quedaria: ";
    escribir(p);
}

void decodificar(){
    int n = 26;
    cout << "Ingrese la correspondencia de su nuevo orden alfabetico: " << endl;
    char* l = codigo(n);
    char* o = new char;
    cout << "Ingrese la frase a decodificar: ";
    cin.ignore();
    leer_cadena(cin,o,50);
    char* p = decodificar(o,l);
    cout << "La frase decodificada quedaria: ";
    escribir(p);
}

void cadenas(){
    char** opciones = new char*[10];
    opciones[0] = "Ocurrencias de un caracter en una cadena";
    opciones[1] = "Verifica si la primera es subcadena de la segunda";
    opciones[2] = "Verifica si la primera es subcadena de la segunda(sin contar el orden)";
    opciones[3] = "Invertir la cadena";
    opciones[4] = "Verifica si es palindrome";
    opciones[5] = "Verifica si es palindrome(sin tener en cuenta los espacios)";
    opciones[6] = "Corrimiento circular a la izquierda";
    opciones[7] = "Corrimiento circular a la derecha";
    opciones[8] = "Codificar una frase dada dado un equivalente a un alfabeto previamente dado";
    opciones[9] = "Decodificar una frase dada dado un equivalente a un alfabeto previamente dado";
    int opc;
    do{
      opc = menu(opciones, 10);
      switch( opc ){
        case 1: ocurrencias(); break;
        case 2: subcadena(); break;
        case 3: subcadena2(); break;
        case 4: invertir(); break;
        case 5: palindrome(); break;
        case 6: frase_palindrome(); break;
        case 7: corri_izq(); break;
        case 8: corri_der(); break;
        case 9: codificar(); break;
        case 10: decodificar(); break;
      };
    }while(opc!=0);
}

void menu_principal(){
    char** opciones = new char*[10];
    opciones[0] = "Granja";
    opciones[1] = "Numericos";
    opciones[2] = "Geometricos";
    opciones[3] = "Otros";
    opciones[4] = "Arreglos";
    opciones[5] = "Arreglos como conjuntos";
    opciones[6] = "Arreglos como polinomios";
    opciones[7] = "Matrices";
    opciones[8] = "Matrices como relaciones binarias";
    opciones[9] = "Cadenas";
    int opc;
    do{
      opc = menu(opciones, 10);
      switch( opc ){
        case 1: granja(); break;
        case 2: numericos(); break;
        case 3: geometricos(); break;
        case 4: otros(); break;
        case 5: arreglos(); break;
        case 6: arr_conjuntos(); break;
        case 7: arr_pol(); break;
        case 8: matrices(); break;
        case 9: rela_bin(); break;
        case 10: cadenas(); break;
      };
    }while(opc!=0);
};



int main(){
    int n;
    cin >> n;
    double** a = crear_matriz_double(n,n);
    a = leer_matriz_double(a,n,n);
    double** b = matriz_inver(a,n);
    escribir_matriz_double(b,n,n);
}



