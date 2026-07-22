#include<iostream>
using namespace std;

int main() {
	float capacidad_permitida;
	int capacidad_total;
	int clientes_ingresados;
	int clientes_nuevos;
	int porcentaje_maximo;
	capacidad_total = 60;
	porcentaje_maximo = 75;
	capacidad_permitida = capacidad_total*porcentaje_maximo/100;
	clientes_ingresados = 0;
	if ((clientes_ingresados<capacidad_permitida)) {
		cout << ("Ingrese el numero de clientes que desea ingresar: ") << endl;
		cin >> clientes_nuevos;
		clientes_ingresados = clientes_ingresados+clientes_nuevos;
		if ((clientes_ingresados>=capacidad_permitida/2)) {
			cout << ("Se ha alcanzado la mitad del aforo maximo.") << endl;
		}
		if ((clientes_ingresados<capacidad_permitida)) {
			cout << ("Todavia existe disponibilidad de acceso a algunos clientes.") << endl;
		}
	}
	cout << ("Capacidad maxima permitida alcanzada. No se permiten mas clientes.") << endl;
	cout << "Daniel Mendoza Gutierrz Matricula: es231109257" << endl;
	return 0;
}

