#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout << "\nIngresa el valor de A: ";
    cin >> a;
    cout << "Ingresa el valor de B: ";
    cin >> b;

    int *ptrA = &a;
    int *ptrB;
    ptrB = &b;

    cout << "Valor de ptrA es: " << *ptrA << " y esta almacenado en la direccion: " << ptrA << endl;
    cout << "Valor de ptrB es: " << *ptrB << " y esta almacenado en la direccion: " << &b << endl;

    cout <<"Direccion de memoria de ptrA: " << &ptrA << endl;
}

