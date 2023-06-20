#include <iostream>
using namespace std;

class Complejo{
    public:
        double real,imag;
        Complejo(double _real, double _imag){
            real=_real;
            imag=_imag;
        };
        Complejo operator + (Complejo z){
            Complejo total(1,1);
            total.real= real + z.real;
            total.imag= imag + z.imag;
            return total;
        }
        Complejo operator - (Complejo z){
            Complejo total(1,1);
            total.real= real - z.real;
            total.imag= imag - z.imag;
            return total;
        }
        Complejo operator * (Complejo z){
            Complejo total(1,1);
            total.real = real * z.real - imag * z.imag;
            total.imag = real * z.imag - imag * z.real;
            return total;
        }
        Complejo operator / (Complejo z){
            Complejo total(1,1);
            total.real = (real * z.real + imag * z.imag)/(z.real * z.real + z.imag * z.imag);
            total.imag = (imag * z.real - real * z.imag)/(z.real * z.real + z.imag * z.imag); 
            return total;
        }
        Complejo operator % (float k){              
            Complejo total(1,1);
            total.real = real*k;
            total.imag = imag*k;
            return total;
        }
};

int main(){
    Complejo z1(10,20);
    Complejo z2(5,50);
    Complejo z3(0,0);
    z3= z1 + z2;
    cout << "\nSuma:" << "(" << z3.real << "," << z3.imag <<")" << endl;
    z3= z1 - z2;
    cout << "Resta:" << "(" << z3.real << "," << z3.imag <<")" << endl;
    z3= z1 * z2;
    cout << "Producto:" << "(" << z3.real << "," << z3.imag <<")" << endl;
    z3= z1 / z2;
    cout << "Division:" << "(" << z3.real << "," << z3.imag <<")" << endl;
    z3=z1 % 10;
    cout << "Producto por un escalar:" << "(" << z3.real << "," << z3.imag <<")" << endl;
}