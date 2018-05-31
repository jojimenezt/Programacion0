#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

int longitud_parcial(char* x, int i);
int longitud_cadena(char* x);
int ocurrencias(char a, char* x);
int pos_inicio(char a, char* b);
bool subcadena(char* a, char* b);
int cant(char* a, int l);
bool subcadena2(char* a, char* b);
char* invertir(char* a);
bool palindrome(char* a);
char* no_espa(char* a);
bool frase_palindrome(char* a);
char* corri_izq(char* a);
char* corri_der(char* a);
char* codigo(int n);
char* codificar(char* a, char* cod);
char* decodificar(char* a, char* cod);

#endif // CADENAS_H_INCLUDED
