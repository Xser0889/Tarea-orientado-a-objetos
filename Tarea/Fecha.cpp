#include <iostream>
using namespace std;

class Fecha
{
  int dia;
  int mes;
  int ano;

public:
  Fecha (int d, int m, int y);
  void set_dia (int dia);
  void set_mes (int mes);
  void set_ano (int ano);
  int get_day ();
  int get_mes ();
  int get_ano ();
  void mostrarFecha ();

};

Fecha::Fecha (int d, int m, int y)
{
  if (m < 1 || m >12)
    mes = 1;
  else
    mes = m;
  dia = d;
  ano = y;
}
void Fecha::set_dia (int dia)
{
  this->dia = dia;
}
void Fecha::set_mes (int mes)
{
  this->mes = mes;
}
void Fecha::set_ano (int ano)
{
  this->ano = ano;
}
int Fecha::get_day ()
{
  return dia;
}
int Fecha::get_mes ()
{
  return mes;
}
int Fecha::get_ano ()
{
  return ano;
}
void Fecha::mostrarFecha ()
{
  cout << dia << "/" << mes << "/" << ano << endl;
}

int main ()
{
  int dia, mes, ano;

  cout << "Dia: ";
  cin >> dia;

  cout << "Mes: ";
  cin >> mes;

  cout << "Año: ";
  cin >> ano;

  Fecha fecha (dia, mes, ano);

  fecha.mostrarFecha ();

  system ("pause");
  return 0;
}