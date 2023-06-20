#include <iostream>
using namespace std;

class Libro{
        public:
            Libro(string _Titulo, int _Paginas, string _Codigo){
                Titulo = _Titulo;
                Paginas = _Paginas;
                Codigo = _Codigo;
            }
            string getTitulo(){
                return Titulo;
            }
            int getPaginas(){
                return Paginas;
            }
            string getCodigo(){
                return Codigo;
            }
        private:
            string Titulo;
            int Paginas;
            string Codigo;
};

int main(){

    Libro MiLibro1("Algebra de Baldor", 450 , "MAT3568");
    cout << "\nNombre: " << MiLibro1.getTitulo();
    cout << "\nPagina: " << MiLibro1.getPaginas();
    cout << "\nCodigo: " << MiLibro1.getCodigo();
};