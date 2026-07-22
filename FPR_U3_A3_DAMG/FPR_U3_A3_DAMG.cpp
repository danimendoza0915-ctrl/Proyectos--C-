#include<iostream>
using namespace std;


int main() {
	int cantidad;
	int i;
	float impuestos;
	float ingresostotales;
	string mensaje;
	string menu;
	string meses;
	float monto;
	int productostotales;
	float totalventa;
	productostotales = 0;
	ingresostotales = 0;
	impuestos = 0.16;
	totalventa = 0;
	cout << "UNIVERSIDAD ABIERTA Y A DISTANCIA DE MEXICO" << endl;
	cout << "ASIGNATURA: FUNDAMENTOS DE PROGRAMACION" << endl;
	cout << "NOMBRE: DANIEL MENDOZA GUTIERREZ" << endl;
	cout << "MATRICULA: ES231109257" << endl;
	for (i=1;i<=12;i++) {
		switch (i) {
		case 1:
			meses = "Enero";
			break;
		case 2:
			meses = "Febrero";
			break;
		case 3:
			meses = "Marzo";
			break;
		case 4:
			meses = "Abril";
			break;
		case 5:
			meses = "Mayo";
			break;
		case 6:
			meses = "Junio";
			break;
		case 7:
			meses = "Julio";
			break;
		case 8:
			meses = "Agosto";
			break;
		case 9:
			meses = "Septiembre";
			break;
		case 10:
			meses = "Octubre";
			break;
		case 11:
			meses = "Noviembre";
			break;
		case 12:
			meses = "Diciembre";
			break;
		}
		mensaje = "Ingrese la cantidad de productos vendidos en "+meses+": ";
		cout << mensaje << endl;
		cin >> cantidad;
		mensaje = "Ingrese el monto de ingresos en "+meses+": ";
		cout << mensaje << endl;
		cin >> monto;
		impuestos = monto*0.16;
		totalventa = monto+impuestos;
		productostotales = productostotales+cantidad;
		ingresostotales = ingresostotales+monto+impuestos;
		cout << "Monto: $" << monto << endl;
		cout << "Impuestos (IVA 16%): $" << impuestos << endl;
		cout << "Total de venta: $" << totalventa << endl;
	}
	cout << "Total de productos vendidos en el año: " << +productostotales << endl;
	cout << "Ingresos totales en el año: $" << +ingresostotales << endl;
	return 0;
}

