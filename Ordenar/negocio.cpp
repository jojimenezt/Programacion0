#include "negocio.h"
 double costo(double p, int n, int x, int y){
    if(n<x){
	    return p*n;
	}else if (n<y){
	    return n*p*0.9;
	}else {
	    return n*p*0.8;
	}
}
