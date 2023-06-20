#include <iostream>
using namespace std;

class Bebidas{
    public:
        Bebidas(string, int);
        virtual void mostrar();
    private:
        string sabor;
        int mililitros;
};

Bebidas::Bebidas(string _sabor, int _mililitros){
    sabor = _sabor;
    mililitros = _mililitros;
};

void Bebidas::mostrar(){
    cout << "\nNombre: " << sabor << endl;
    cout << "Mililitros: " << mililitros << endl;
};

class Gaseosas: public Bebidas{
    public:
        Gaseosas(string, int, float);
        void mostrar();
    private:
        float calorias;
};

Gaseosas::Gaseosas(string _sabor, int _mililitros, float _calorias):Bebidas(_sabor, _mililitros){
    calorias=_calorias;
};

void Gaseosas::mostrar(){
    Bebidas::mostrar();
    cout << "Calorias: " << calorias << endl;
};

int main(){
    
    Bebidas *vector[2];

    vector[0]= new Gaseosas("Kiwi",100,76.56);
    vector[1]= new Gaseosas("Fresa",200,13.99);

    vector[0]->mostrar();
    cout << "++++++++++++++++++++++++++++++";
    vector[1]->mostrar();
    cout << "++++++++++++++++++++++++++++++";

}