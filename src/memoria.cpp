//memoria estatica

#include <iostream>
using namespace std;

int main(){

    cout << "long: " << sizeof(long) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;

    int a = 5;
    cout << &a << endl; //& direccion de memoria
    cout << a << endl; //valor de la variable
    cout << *(&a) << endl; //accede al contenido de la memoria (* operador indirección)

    cout << "long: " << sizeof(long *) << endl;
    cout << "int: " << sizeof(int *) << endl;
    cout << "char: " << sizeof(char *) << endl;
    cout << "bool: " << sizeof(bool *) << endl;
    cout << "float " << sizeof(float *) << endl;
    cout << "double: " << sizeof(double *) << endl;

    int * direccion; //direccion de un entero 8 bites es un tipo de dato
    cout << direccion << endl; //que hay dentro de la memoria
    cout << &direccion << endl; // dirección de la memoria
    cout << *direccion << endl;

    cout << malloc(4) << endl;
    int * dir = (int *) malloc(sizeof(int));//memoria dinamica en c
    *dir = 7;
    cout << *dir << endl;

    int* dir2 = new int;//memoria dinamica en c++

    return 0;
}