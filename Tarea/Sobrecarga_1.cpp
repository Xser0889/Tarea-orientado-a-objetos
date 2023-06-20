#include <iostream>
#include <string>
using namespace std;

class Fraccion {
private:
    int numerador;
    int denominador;
public:
    Fraccion(int numerador, int denominador): numerador{numerador}, denominador{denominador} {}
    int getNumerador() const {
        return numerador;
    }
    int getDenominador() const {
        return denominador;
    }
    Fraccion operator-(const Fraccion &fraccion) {
        if (denominador == fraccion.denominador) {
            return Fraccion{numerador-fraccion.numerador, denominador};
        } else {
            int n = numerador * fraccion.denominador - fraccion.numerador * denominador;
            int d = denominador * fraccion.denominador;
            return Fraccion{n,d};
        }
    }
    Fraccion operator+(int entero) {
        return Fraccion{numerador + entero * denominador, denominador};
    }

    friend ostream& operator<<(ostream &os, const Fraccion &f1) {
        os << f1.numerador << " / " << f1.denominador;
        return os;
    }
};

int main() {
    Fraccion f1{1,2};
    Fraccion f2{1,4};
    Fraccion f3 = f1 - f2;
    cout << "\nNumerador final: " << f3.getNumerador() << endl;
    cout << "Denominador final: " << f3.getDenominador() << endl;
    cout << "La resta de 1/2 y 1/4 es: " << f3 << endl;
}