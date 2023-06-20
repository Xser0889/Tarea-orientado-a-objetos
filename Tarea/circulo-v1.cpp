#include <iostream>
#include <math.h>
using namespace std;

class circulo{
public:
  void pideRadio(double r){
    radio = r;
  };
  double cir_area() {
    ar = M_PI * radio * radio;
    return ar;
  };
  double circ_perimetro() {
    per = 2 * M_PI * radio;
    return per;
  };

private:
  double ar;
  double per;
  double radio;
};


int main(){
    
    circulo circulo1;
    circulo circulo2;
    circulo1.pideRadio(5);
    circulo2.pideRadio(3);
  
    cout << "\nCirculo 1 Area: " << circulo1.cir_area() << endl;
    cout << "Circulo 1 Periemtro: " << circulo1.circ_perimetro() << endl;
    cout << "\nCirculo 2 Area: " << circulo2.cir_area() << endl;
    cout << "Circulo 2 Periemtro: " << circulo2.circ_perimetro() << endl;
}