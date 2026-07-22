#include<iostream>
using namespace std;
int main() {
	float comision;
	float descuento;
	string marca;
	string modelo;
	string nombre_vendedor;
	float nuevo_precio;
	int opc;
	string opcion;
	float precio;
	float precio_base;
	cout << "UNIVERSIDAD ABIERTA Y A DISTANCIA DE MEXICO" << endl;
	cout << "ASIGNATURA: FUNDAMENTOS DE PROGRAMACION" << endl;
	cout << "NOMBRE: DANIEL MENDOZA GUTIERREZ" << endl;
	cout << "MATRICULA: ES231109257" << endl;
	cout << "************ VENTA Y COMPRA DE AUTOS************" << endl;
	cout << "¿QUE OPCION DESEA?" << endl;
	cout << "1. ventas de autos" << endl;
	cout << "2. compra de autos" << endl;
	cout << "3. Salir" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "Ingrese la marca del auto:" << endl;
		cin >> marca;
		cout << "Ingrese el modelo del auto:" << endl;
		cin >> modelo;
		cout << "ingrese el nombre del vendedor" << endl;
		cin >> nombre_vendedor;
		cout << "Ingrese el precio base del auto:" << endl;
		cin >> precio;
		if (precio<=100000) {
			cout << "porcentaje de descuento 6%" << endl;
			precio_base = precio*0.06;
			nuevo_precio = precio-precio_base;
			cout << "nuevo precio:" << "$" << nuevo_precio << endl;
			comision = precio_base/2;
			cout << "el auto con la marca:" << marca << "--" << "modelo:" << modelo << "--" << "con precio de base:" << precio << "--" << "tiene el precio con descuento:" << nuevo_precio << "--" << "el vendedor:" << nombre_vendedor << "--" << "tiene una comision por su venta:" << comision << "--" << "presione cualquier tecla para continuar" << endl;
		} else {
			if (precio<=170000 || precio<=250000) {
				cout << "porcentaje de descuento 8%" << endl;
				precio_base = precio*0.08;
				nuevo_precio = precio-precio_base;
				cout << "nuevo precio:" << "$" << nuevo_precio << endl;
				comision = precio_base/2;
				cout << "el auto con la marca:" << marca << "--" << "modelo:" << modelo << "--" << "con precio de base:" << precio << "--" << "tiene el precio con descuento:" << nuevo_precio << "--" << "el vendedor:" << nombre_vendedor << "--" << "tiene una comision por su venta:" << comision << "--" << "presione cualquier tecla para continuar" << endl;
			} else {
				if (precio>=300000) {
					cout << "porcentaje de descuento 10%" << endl;
					precio_base = precio*0.10;
					nuevo_precio = precio-precio_base;
					cout << "nuevo_precio:" << nuevo_precio << endl;
					comision = precio_base/2;
					cout << "el auto con la marca:" << marca << "--" << "modelo:" << modelo << "--" << "con precio de base:" << precio << "--" << "tiene el precio con descuento:" << nuevo_precio << "--" << "el vendedor:" << nombre_vendedor << "--" << "tiene una comision por su venta:" << comision << "--" << "presione cualquier tecla para continuar" << endl;
				}
			}
		}
		break;
	case 2:
		cout << "ingrese marca del auto" << endl;
		cin >> marca;
		cout << "ingrese modelo del auto" << endl;
		cin >> modelo;
		cout << "ingrese precio del auto" << endl;
		cin >> precio;
		precio_base = precio*0.20;
		nuevo_precio = precio+precio_base;
		cout << "el auto marca:" << marca << "--" << "modelo:" << modelo << "--" << "tiene un precio de venta de:" << nuevo_precio << "--" << "precione cualquier tecla para continuar" << endl;
		break;
	case 3:
		cout << "hasta luego" << endl;
		break;
	}
	return 0;
}

