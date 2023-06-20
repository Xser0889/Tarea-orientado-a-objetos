#include <iostream>
using namespace std;

class Transporte{
    public:
        Transporte(string, int);
        virtual void modelo();
    private:
        string marca;
        int numeropasa;
};

Transporte::Transporte(string _marca, int _numeropasa){
    marca = _marca;
    numeropasa = _numeropasa;
};

void Transporte::modelo(){
    cout << "La marca de vehiculo es: " << marca << endl;
    cout << "Transporta hasta " << numeropasa << " pasajeros" << endl;
};

class Moto: public Transporte{
    public:
        Moto(string, int, int);
        void modelo();
    private:
        int precio;
};

Moto::Moto(string _marca, int _numeropasa, int _precio):Transporte(_marca, _numeropasa){
    precio = _precio;
};

void Moto::modelo(){
    Transporte::modelo();
    cout << "El precio de la moto es: " << precio << endl;
};

class Camion: public Transporte{
    public:
        Camion(string, int, int);
        void modelo();
    private:
        int carga;
};

Camion::Camion(string _marca, int _numeropasa, int _carga):Transporte(_marca, _numeropasa){
    carga = _carga;
};

void Camion::modelo(){
    Transporte::modelo();
    cout << "El Camion puede transportar hasta " << carga << "toneladas" << endl;
};

int main(){
    Transporte *vector[3];

    vector[0]= new Moto("Honda",2,35000);
    vector[1]= new Camion("Isuzu",3,1);
    vector[2]= new Transporte("BMW",4);

    vector[0]->modelo();
    cout << "- - - - - - - -" << endl;
    vector[1]->modelo();
    cout << "- - - - - - - -" << endl;
    vector[2]->modelo();
}