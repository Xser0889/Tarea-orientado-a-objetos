#include <iostream>
using namespace std;

class vehiculo{
    public:
        vehiculo();
        vehiculo(string, string, int, int);
        string get_numero_serie(){
            return numero_serie;
        };
        string get_marca(){
            return marca;
        };
        int get_ano(){
            return ano;
        };
        int get_precio(){
            return precio;
        }

    protected:
        string numero_serie;
        string marca;
        int ano;
        int precio;
};

vehiculo::vehiculo(string _numero_serie, string _marca, int _ano, int _precio){
    numero_serie = _numero_serie;
    marca = _marca;
    ano = _ano;
    precio = _precio;
};

class auto_compacto : public vehiculo{
    public:
        auto_compacto (string _numero_serie, string _marca, int _ano, int _precio, float _cantidad);
        void resultadoauto_compacto();
    protected:
        float cantidad;
};

auto_compacto::auto_compacto(string _numero_serie, string _marca, int _ano, int _precio, float _cantidad):vehiculo(_numero_serie, _marca, _ano, _precio){
        cantidad= _cantidad;
};

void auto_compacto::resultadoauto_compacto(){
    cout << "\nAuto compacto: " << endl;
    cout << "Numero de serie del motor: " << numero_serie << endl;
    cout << "Marca: " << marca << endl;
    cout << "Ano: " << ano << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad de pasajeros: " << cantidad << endl;
};

class auto_de_lujo : public vehiculo{
    public:
        auto_de_lujo (string _numero_serie, string _marca, int _ano, int _precio, string _hibrido);
        void resultadode_lujo();
    protected:
        string hibrido;
};

auto_de_lujo::auto_de_lujo (string _numero_serie, string _marca, int _ano, int _precio, string _hibrido):vehiculo(_numero_serie, _marca, _ano, _precio){
        hibrido = _hibrido;
};

void auto_de_lujo::resultadode_lujo(){
    cout << "\nAuto de lujo: " << endl;
    cout << "Numero de serie del motor: " << numero_serie << endl;
    cout << "Marca: " << marca << endl;
    cout << "Ano: " << ano << endl;
    cout << "Precio: " << precio << endl;
    cout << "Es hibrido: " << hibrido << endl;
};

class camioneta : public vehiculo{
    public:
        camioneta (string _numero_serie, string _marca, int _ano, int _precio, float _carga, float _ejes);
        void resultado_camioneta();
    protected:
        float carga;
        float ejes;
};

camioneta::camioneta(string _numero_serie, string _marca, int _ano, int _precio, float _carga, float _ejes):vehiculo(_numero_serie, _marca, _ano, _precio){
    carga = _carga;
    ejes = _ejes;
};

void camioneta::resultado_camioneta(){
    cout << "\nCamioneta: " << endl;
    cout << "Numero de serie del motor: " << numero_serie << endl;
    cout << "Marca: " << marca << endl;
    cout << "Ano: " << ano << endl;
    cout << "Precio: " << precio << endl;
    cout << "Capacidad de carga: " << carga << " kg" << endl;
    cout << "Cantidad de ejes: " << ejes << endl;
};

class vagoneta : public vehiculo{
    public:
        vagoneta (string _numero_serie, string _marca, int _ano, int _precio, float _canti);
        void resultado_vagoneta();
    protected:
        float canti;
};

vagoneta::vagoneta(string _numero_serie, string _marca, int _ano, int _precio, float _canti):vehiculo(_numero_serie, _marca, _ano, _precio){
        canti= _canti;
};

void vagoneta::resultado_vagoneta(){
    cout << "\nVagoneta: " << endl;
    cout << "Numero de serie del motor: " << numero_serie << endl;
    cout << "Marca: " << marca << endl;
    cout << "Ano: " << ano << endl;
    cout << "Precio: " << precio << endl;
    cout << "Cantidad de pasajeros: " << canti << endl;
};

int main(){
    auto_compacto Miauto_compacto("1G1YY25R69570001", "Ford", 2015 , 639000, 5);
    auto_de_lujo Miauto_de_lujo("ZFFKA35BOOO84201", "Ferrari", 2014, 5250000, "No" );
    camioneta Micamioneta("MROFR2202A0558099", "Chevrolet", 2021, 900000, 921, 2);
    vagoneta Mivagoneta("1HGBH41JXMN109186", "Toyota",2016, 314900, 15);

    Miauto_compacto.resultadoauto_compacto();
    Miauto_de_lujo.resultadode_lujo();
    Micamioneta.resultado_camioneta();
    Mivagoneta.resultado_vagoneta();
}