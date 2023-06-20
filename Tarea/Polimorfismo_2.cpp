#include <iostream>
using namespace std;

class Figura{
    public:
    void obtener(int, int);
    virtual float area();
    protected:
    int largo;
    int alto;
    float ar;
};

float Figura::area(){
    return 0;
};

void Figura::obtener(int _largo, int _alto){
    largo = _largo;
    alto = _alto;
};

class rectangulo:public Figura{
    public:
    float area();
    void obtener(int, int);
    protected:
    float ar;
};

void rectangulo::obtener(int _largo, int _alto){
    largo = _largo;
    alto = _alto;
};

float rectangulo::area(){
    ar = largo * alto;
    return ar;
};

class triangulo:public Figura{
    public:
    float area();
    void obtener(int, int);
    protected:
    float ar;
};

void triangulo::obtener(int _largo, int _alto){
    largo = _largo;
    alto = _alto;
};

float triangulo::area(){
    ar = (largo * alto)/2;
    return ar;
};


int main(){
    Figura *vector[2];
    vector[0]= new rectangulo();
    vector[0]->obtener(4,5);

    vector[1]= new triangulo();
    vector[1]->obtener(4,5);
    
    cout << "\nArea de retangulo: " << vector[0]->area() << endl;
    cout << "\nArea de triangulo: " << vector[1]->area() << endl;
}
