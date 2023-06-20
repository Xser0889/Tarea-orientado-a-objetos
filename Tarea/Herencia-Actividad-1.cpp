#include <iostream>
using namespace std;

class Persona{
    public:
        Persona();
        Persona(string, int);
        string get_nombre(){
            return nombre;
        };
        int get_edad(){
            return edad;
        };
        void ImprimirPersona();
    protected:
        string nombre;
        int edad;

};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
};
    

void Persona::ImprimirPersona()
{
    cout << "Nombre: " << nombre << endl; 
    cout << "Edad: " << edad << endl;
};

class Empleado: public Persona {
protected:
    float salario; 
public:
    Empleado (string _nombre, int _edad, float Sal); 
    void ImprimirEmpleado();
};

Empleado::Empleado(string _nombre, int _edad, float Sal): Persona(_nombre, _edad){
    salario= Sal;
};

void Empleado::ImprimirEmpleado(){
    cout << "Empleado: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Salario: " << salario << endl;
};


int main(){

    Persona ObjPersona ("Kevin", 19);
    Empleado ObjEmpleado ("Ashantii", 21, 5000);
    
    ObjPersona.ImprimirPersona();
    ObjEmpleado.ImprimirEmpleado();
    
}