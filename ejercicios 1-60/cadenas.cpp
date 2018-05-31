#include "cadenas.h"
#include <iostream>
using namespace std;

int longitud_parcial(char* x, int i){
    if(x[i] == '\0' ){
        return 0;
    };
    return 1 + longitud_parcial(x, i + 1);
};

int longitud_cadena(char* x){
    return longitud_parcial(x, 0);
};

int ocurrencias(char a, char* x){
    int n = longitud_cadena(x);
    int p=0;
    for(int i=0;i<n;i++){
        if(x[i]==a){
            p++;
        }
    }
    return p;
}

int pos_inicio(char a, char* b){
    int pos = 0;
    int n = longitud_cadena(b);
    for(int i=0;i<n && pos==0;i++){
        if(b[i]==a){
            pos = i;
        }
    }
    return pos;
}

bool subcadena(char* a, char* b){
    bool y = true;
    int n = longitud_cadena(a);
    int m = longitud_cadena(b);
    if(n>m){
        y = false;
    }else{
        int h = pos_inicio(a[0],b);
        for(int i=0;i<n;i++){
            y = y && a[i] == b[h];
            h++;
        }
    }
    return y;
}

int cant(char* a, int l){
    int c = 0;
    int n = longitud_cadena(a);
    for(int i=0;i<n;i++){
        if(a[l]==a[i]){
            c++;
        }
    }
    return c;
}

bool subcadena2(char* a, char* b){
    bool y = true;
    int n = longitud_cadena(a);
    for(int i=0;i<n;i++){
        if(ocurrencias(a[i],b)<cant(a,i)){
            y = false;
        }
    }
    return y;
}

char* invertir(char* a){
    int n = longitud_cadena(a);
    char* b = new char[n];
    for(int i=0;i<n;i++){
        b[i] = a[n-1-i];
    }
    return b;
}

bool palindrome(char* a){
    int n = longitud_cadena(a);
    bool g = true;
    for(int i=0;i<n;i++){
        g = g && a[i] == a[n-1-i];
    }
    return g;
}

char* no_espa(char* a){
    int h=0;
    int n = longitud_cadena(a);
    char* l= new char[h];
    for(int i=0;i<n;i++){
        if(a[i] != ' '){
            l[h++] = a[i];
        }else{
            n++;
        }
    }
    return l;
}

bool frase_palindrome(char* a){
    char* b = new char;
    b = no_espa(a);
    bool i = palindrome(b);
    return i;
}

char* corri_izq(char* a){
    int n=longitud_cadena(a);
    char* b = new char[n];
    b[n-1] = a[0];
    for(int i=1;i<n;i++){
        b[i-1] = a[i];
    }
    return b;
}

char* corri_der(char* a){
    int n=longitud_cadena(a);
    char* b = new char[n];
    b[0] = a[n-1];
    for(int i=1;i<n;i++){
        b[i] = a[i-1];
    }
    return b;
}

char* codigo(int n){
    char* x = new char[n];
    char a = 97;
    for(int i=0;i<n;i++){
        cout << "Ingrese el caracter equivalente a " << a << ": ";
        cin >> x[i];
        a++;
    }return x;
}

char* codificar(char* a, char* cod){
    int n = longitud_cadena(a);
    for(int i=0;i<n;i++){
        if(a[i]>96 && a[i]<123){
            int r = 0;
            r = a[i];
            r = r-97;
            a[i] = cod[r];
        }
    }
    return a;
}

char* decodificar(char* a, char* cod){
    int n = longitud_cadena(a);
    for(int i=0;i<n;i++){
        if(a[i]>96 && a[i]<123){
            int r = 0;
            for(int j=0;j<26 && r==0;j++){
                if(a[i]==cod[j]){
                    r = j+97;
                }
            }
            a[i] = r;
        }
    }return a;
}
