#include<iostream>
using namespace std;

int main() {
	int administacion;
	int anestesiologia;
	int cardiologia;
	float descuento;
	int edad;
	int especialidad;
	int experiencia;
	float monto_total;
	int neumologia;
	float nuevo_total;
	int oncologia;
	int opc;
	int otra_opcion;
	int produccion;
	int sueldo;
	int ventas;
	cout << "menu de opciones" << endl;
	do {
		cout << "1 contratacion de personal" << endl;
		cout << "2 servicios medicos" << endl;
		cout << "3 salir" << endl;
		cout << "ingrese opcion que desee" << endl;
		cin >> opc;
	} while (!((opc>0 && opc<4)));
	switch (opc) {
	case 1:
		cout << "Bienvenidos" << endl;
		cout << "Ingrese el area de interes" << endl;
		cout << "1 administracion" << endl;
		cout << "2 produccion" << endl;
		cout << "3 ventas" << endl;
		cin >> opc;
		switch (opc) {
		case 1:
			opc = administacion;
			cout << "ingrese su edad" << endl;
			cin >> edad;
			if (edad<30 || edad>35) {
				cout << "fuera del rango de edad, no puede ser contratado" << endl;
				cout << "Hasta luego" << endl;
			} else {
				cout << "ingrese su Experiencia laboral en meses" << endl;
				cin >> experiencia;
				if (experiencia<6) {
					cout << "poca Experiencia, no puede ser contratado" << endl;
					cout << "Hasta luego" << endl;
				} else {
					cout << "ingrese Sueldo mensual deseado" << endl;
					cin >> sueldo;
					if (sueldo<10000 || sueldo>12000) {
						cout << "sueldo fuera del rango estipulado, no puede ser contratado" << endl;
						cout << "Hasta luego" << endl;
					} else {
						cout << "su solicitud fue aceptada" << endl;
						cout << "Hasta luego" << endl;
					}
				}
			}
			break;
		case 2:
			opc = produccion;
			cout << "ingrese su edad" << endl;
			cin >> edad;
			if (edad<30 || edad>35) {
				cout << "fuera del rango de edad, no puede ser contratado" << endl;
				cout << "Hasta luego" << endl;
			} else {
				cout << "ingrese su Experiencia laboral en meses" << endl;
				cin >> experiencia;
				if (experiencia<6) {
					cout << "poca Experiencia, no puede ser contratado" << endl;
					cout << "Hasta luego" << endl;
				} else {
					cout << "ingrese Sueldo mensual deseado" << endl;
					cin >> sueldo;
					if (sueldo<8000 || sueldo>10000) {
						cout << "sueldo fuera del rango estipulado, no puede ser contratado" << endl;
					} else {
						cout << "su solicitud fue aceptada" << endl;
						cout << "Hasta luego" << endl;
					}
				}
			}
			break;
		case 3:
			opc = ventas;
			cout << "ingrese su edad" << endl;
			cin >> edad;
			if (edad<30 || edad>35) {
				cout << "fuera del rango de edad, no puede ser contratado" << endl;
			} else {
				cout << "ingrese su Experiencia laboral en meses" << endl;
				cin >> experiencia;
				if (experiencia<6) {
					cout << "poca Experiencia, no puede ser contratado" << endl;
				} else {
					cout << "ingrese Sueldo mensual deseado" << endl;
					cin >> sueldo;
					if (sueldo<5000 || sueldo>7000) {
						cout << "sueldo fuera del rango estipulado, no puede ser contratado" << endl;
						cout << "Hasta luego" << endl;
					} else {
						cout << "su solicitud fue aceptada" << endl;
						cout << "Hasta luego" << endl;
					}
				}
			}
			break;
		}
		cout << "Daniel mendoza Gutierrez   matricula:ES231109257" << endl;
		break;
	case 2:
		cout << "bienvenido al hospital" << endl;
		cout << "Ingrese el monto a pagar:" << endl;
		cin >> monto_total;
		cout << "Especialidades que ofrecen descuento:" << endl;
		cout << "1 Oncologia:" << "5%" << endl;
		cout << "2 Neumologia:" << "8%" << endl;
		cout << "3 Cardiologia:" << "6%" << endl;
		cout << "4 Anestesiologia:" << "9%" << endl;
		cout << "5 otra opcion" << endl;
		cout << "Ingrese la especialidad a la que asistio:" << endl;
		cin >> opc;
		switch (opc) {
		case 1:
			especialidad = oncologia;
			descuento = monto_total*0.05;
			nuevo_total = monto_total-descuento;
			cout << "Monto total: $" << monto_total << endl;
			cout << "Descuento: $" << descuento << endl;
			cout << "Nuevo total con descuento: $" << nuevo_total << endl;
			break;
		case 2:
			especialidad = neumologia;
			descuento = monto_total*0.08;
			nuevo_total = monto_total-descuento;
			cout << "Monto total: $" << monto_total << endl;
			cout << "Descuento: $" << descuento << endl;
			cout << "Nuevo total con descuento: $" << nuevo_total << endl;
			break;
		case 3:
			especialidad = cardiologia;
			descuento = monto_total*0.06;
			nuevo_total = monto_total-descuento;
			cout << "Monto total: $" << monto_total << endl;
			cout << "Descuento: $" << descuento << endl;
			cout << "Nuevo total con descuento: $" << nuevo_total << endl;
			break;
		case 4:
			especialidad = anestesiologia;
			descuento = monto_total*0.09;
			nuevo_total = monto_total-descuento;
			cout << "Monto total: $" << monto_total << endl;
			cout << "Descuento: $" << descuento << endl;
			cout << "Nuevo total con descuento: $" << nuevo_total << endl;
			break;
		case 5:
			especialidad = otra_opcion;
			cout << "Lo siento, la especialidad a la que asistio no aplica descuento." << endl;
			break;
		}
		cout << "Daniel Mendoza Gutierrez matricula:ES231109257" << endl;
		break;
	case 3:
		cout << "hasta luego" << endl;
		cout << "Daniel Mendoza Gutierrez matricula:ES231109257" << endl;
		break;
	}
	return 0;
}

