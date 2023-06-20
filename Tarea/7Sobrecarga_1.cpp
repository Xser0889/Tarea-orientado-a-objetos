#include <iostream>
using namespace std;

class Fraccion{
    public:
        double numerador,denominador;
        Fraccion(double _numerador, double _denominador){
            numerador=_numerador;
            denominador=_denominador;
        };
        Fraccion operator * (Fraccion z){
            this->numerador= this->numerador * z.numerador;
            this->denominador= this->denominador * z.denominador;
            return Fraccion(this->numerador,this->denominador);
        };

};

int main(){
    Fraccion f1{1,2};
    Fraccion f2{1,4};
    Fraccion f3 = f1 * f2;
    cout << "\nNumerador final: " << f3.numerador << endl;
    cout << "Denominador final: " << f3.denominador << endl;
    cout << "La multiplicacion de 1/2 y 1/4 es " << f3.numerador << "/" << f3.denominador << endl;
}