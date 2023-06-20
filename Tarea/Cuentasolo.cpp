#include <iostream>
using std::cout;
using std::cin;

class Cuenta
{
public:
	Cuenta (int);
	void Agregar(int);
	void Retirar(int);
	int obtenerSaldo();
private:
	int saldoActual;
};

Cuenta::Cuenta (int saldoInicial)
{
	if ( saldoInicial >= 0)
	{
		saldoActual = saldoInicial;
	}
	if ( saldoInicial < 0)
	{
		saldoInicial = 0;
		cout << "Error el saldo inicial es invalido";
	}
}
 
void Cuenta::Agregar(int acreditar)
{
	saldoActual = saldoActual + acreditar;
}
 
void Cuenta::Retirar(int cargar)
{
	if (saldoActual > cargar)
	{
	saldoActual = saldoActual - cargar;
	}
	if (saldoActual < cargar)
	{
		cout << "El monto a cargar excede el saldo de la cuenta.";
	}
}
 
int Cuenta::obtenerSaldo()
{
	cin.get();
	return saldoActual;
}


int main()
{
	int saldoInicial;
	cout << "Saldo inicial: ";
	cin >> saldoInicial;
	Cuenta objeto1(saldoInicial);
 
	cout << "Monto a acreditar: ";
	int acreditar;
	cin >> acreditar;
	Cuenta objeto2(acreditar);
	objeto2.Agregar(acreditar);
	cout << "\nMonto a cargar: ";
	int cargar;
	cin >> cargar;
	objeto2.Retirar(cargar);
	cout << "\nEl saldo actual: " << objeto2.obtenerSaldo();
	cin.get();
	return 0;
}