#include <iostream>
#include <string>
using namespace std;
// Estructura de la informacion del Zapato
struct InfoZapato {
    string Modelo;
    int Talla;
    float Precio;
};
// Estructura del Nodo
struct Nodo {
    InfoZapato InfoZapato;
    Nodo* Izquierda;
    Nodo* Derecha;
};
// Función para  poder ingresar la informacion de un nuevo zapato
Nodo* Ingresar(Nodo* Raiz, InfoZapato InfoZapato) {
    if (Raiz == nullptr) {
        Nodo* Nuevo = new Nodo();
        Nuevo->InfoZapato = InfoZapato;
        Nuevo->Izquierda = nullptr;
        Nuevo->Derecha = nullptr;
        return Nuevo;
    }
    if (InfoZapato.Talla < Raiz->InfoZapato.Talla) {
        Raiz->Izquierda = Ingresar(Raiz->Izquierda, InfoZapato);
    } else if (InfoZapato.Talla > Raiz->InfoZapato.Talla) {
        Raiz->Derecha = Ingresar(Raiz->Derecha, InfoZapato);
    } else {
        cout << "Talla ya existente." << endl;
    }

    return Raiz;
}
// Funcion para modificar la informacion 
void Modificar(Nodo* Raiz, string Modelo) {
    if (Raiz == nullptr) {
        cout << "El modelo de zapato no encontrado." << endl;
        return;
    }
    if (Modelo < Raiz->InfoZapato.Modelo) {
        Modificar(Raiz->Izquierda, Modelo);
    } else if (Modelo > Raiz->InfoZapato.Modelo) {
        Modificar(Raiz->Derecha, Modelo);
    } else {
        cout << "Ingrese la talla: ";
        cin >> Raiz->InfoZapato.Talla;
        cout << "Ingrese el precio: ";
        cin >> Raiz->InfoZapato.Precio;
        cout << "Se modifico de una manera correcta la informacion." << endl;
    }
}
//Funcion InOrden
void InOrden(Nodo* Raiz) {
    if (Raiz != nullptr) {
        InOrden(Raiz->Izquierda);
        cout << "Modelo: " << Raiz->InfoZapato.Modelo << ", Talla: " << Raiz->InfoZapato.Talla << ", Precio: \n" << Raiz->InfoZapato.Precio << endl;
        InOrden(Raiz->Derecha);
    }
}
// Funcion PreOrden
void PreOrden(Nodo* Raiz) {
    if (Raiz != nullptr) {
        cout << "Modelo: " << Raiz->InfoZapato.Modelo << ", Talla: " << Raiz->InfoZapato.Talla << ", Precio: \n" << Raiz->InfoZapato.Precio << endl;
        PreOrden(Raiz->Izquierda);
        PreOrden(Raiz->Derecha);
    }
}
// Funcion PostOrden
void PostOrden(Nodo* Raiz) {
    if (Raiz != nullptr) {
        PostOrden(Raiz->Izquierda);
        PostOrden(Raiz->Derecha);
        cout << "\nModelo: " << Raiz->InfoZapato.Modelo << ", Talla: " << Raiz->InfoZapato.Talla << ", Precio: \n" << Raiz->InfoZapato.Precio << endl;
    }
}
void Menu() {
    cout << "\n//Menu del Catalogo de Zapatos//" << endl;
    cout << "1. Alta (Agregar nuevo zapato)" << endl;
    cout << "2. Modificar zapato existente" << endl;
    cout << "3. Recorrido Inorden" << endl;
    cout << "4. Recorrido Preorden" << endl;
    cout << "5. Recorrido Postorden" << endl;
    cout << "0. Salir" << endl;
    cout << "Seleccione una opcion:";
}
bool Validar(int Opcion) {
    return Opcion >= 0 && Opcion <= 5;
}
int main() {
    Nodo* Raiz = nullptr;
    int Opcion;
    do {
        Menu();
        cin >> Opcion;

        if (!Validar(Opcion)) {
            cout << "Opcion no valida." << endl;
           continue;
        }
        if (Opcion == 1) {
            InfoZapato InfoZapato;
            cout << "Ingrese el modelo: ";
            cin >> InfoZapato.Modelo;
            cout << "Ingrese la talla: ";
            cin >> InfoZapato.Talla;
            cout << "Ingrese el precio: ";
            cin >> InfoZapato.Precio;
            Raiz = Ingresar(Raiz, InfoZapato);
        } else if (Opcion == 2) {
            string Modelo;
            cout << "Ingrese el modelo que desea modificar: ";
            cin >> Modelo;
            Modificar(Raiz, Modelo);
        } else if (Opcion == 3) {
            if (Raiz == nullptr) {
                cout << "El arbol esta vacio" << endl;
            } else {
                InOrden(Raiz);
            }
        } else if (Opcion == 4) {
            if (Raiz == nullptr) {
                cout << "El arbol esta vacio" << endl;
            } else {
                PreOrden(Raiz);
            }
        } else if (Opcion == 5) {
            if (Raiz == nullptr) {
                cout << "El arbol esta vacio" << endl;
            } else {
                PostOrden(Raiz);
            }
        }
    } while (Opcion != 0);
    cout << "\nCerrando programa." << endl;
    cout << "Nombre: Daniel Mendoza Gutierrez  /// Matricula: ES231109257" << endl;
    return 0;
}
