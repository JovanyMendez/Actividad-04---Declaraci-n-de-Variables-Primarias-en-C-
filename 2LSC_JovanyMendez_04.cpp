#include<iostream>
#include<stdio.h>
using namespace std;

int variables_otras(){
cout << "Funcion de otras Variables \n" << endl;
char variable_char='A';
cout << "Ejemplo de variable tipo CHAR: " <<variable_char<< endl;
bool variable_booleana = true;
    // bool variable_booleana = false;
cout << "Ejemplo de variable BOOL: " << variable_booleana << endl;

    string variable_string = "cadena de caracteres";
    cout << "Ejemplo de variable tipo STRING: " << variable_string << endl;
    return 0;
}

int variables_numeros() {
    cout << "Funcion de variables numericas \n" << endl;

    int numero_entero = 10;
    cout << "Ejemplo de variable tipo INT: " << numero_entero << endl;

    double numero_double = 10.565765767;
    cout << "Ejemplo de variable tipo DOUBLE: " << numero_double << endl;

    float numero_float = 10.56f;
    cout << "Ejemplo de variable tipo FLOAT: " << numero_float << endl;

    long numero_long = 1234567890;
    cout << "Ejemplo de variable tipo LONG: " << numero_long << endl;

    unsigned long numero_unsigned_long = 4294967295;
    cout << "Ejemplo de variable tipo UNSIGNED LONG: " << numero_unsigned_long << endl;

    long double numero_long_double = 3.1234567890123456L;
    cout << "Ejemplo de variable tipo LONG DOUBLE: " << numero_long_double << endl;

    signed int numero_signed_int = -32456;
    cout << "Ejemplo de variable tipo SIGNED INT: " << numero_signed_int << endl;

    return 0;
}

int main() {
    variables_otras();
    variables_numeros();
    return 0;



}
