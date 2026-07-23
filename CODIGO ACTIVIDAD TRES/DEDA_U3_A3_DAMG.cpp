#include <iostream>
#include <string>
#include <sstream>
#include <limits>
//Numero de nodos maximos en el arbol
const int NodosMaximos = 30; 
//Estructura de Destino
struct Destino {
    std::string Nombre;
    double Precio;
    int TiempoTotalVuelo;
    bool Vacio = true; // Se verifica si el nodo esta libre 
};
//Funciones de arbol
void InicioArbol(Destino Arbol[]);
void Ingresar(Destino Arbol[], const std::string& Nombre, double Precio, int TiempoTotalVuelo);
int Buscar(Destino Arbol[], const std::string& Nombre);
void Eliminar(Destino Arbol[], const std::string& Nombre);
void PreOrden(Destino Arbol[], int Indice);
void InOrden(Destino Arbol[], int Indice);
void PostOrden(Destino Arbol[], int Indice);
void ProyectarMenu();
void ProyectarNodo(const Destino& destino);
double LeerPrecio();
int main() {
    Destino Arbol[NodosMaximos];
    InicioArbol(Arbol);
    // Datos iniciales 
    Ingresar(Arbol, "CDMX", 500.0, 120);
    Ingresar(Arbol, "Guadalajara", 300.0, 60);
    Ingresar(Arbol, "Monterrey", 400.0, 90);
    Ingresar(Arbol, "Cancun", 700.0, 150);
    Ingresar(Arbol, "Tijuana", 600.0, 180);
    Ingresar(Arbol, "Puebla", 450.0, 80);
    Ingresar(Arbol, "Merida", 550.0, 130);
    Ingresar(Arbol, "Acapulco", 350.0, 70);
    Ingresar(Arbol, "Hermosillo", 650.0, 200);
    Ingresar(Arbol, "Veracruz", 400.0, 100);
    Ingresar(Arbol, "Chihuahua", 500.0, 160);
    int Opcion;
    do {
        ProyectarMenu();
        std::cout << "Elige una opcion: ";
        std::cin >> Opcion;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Opcion no valida\n";
            continue;
        }
        std::string Nombre;
        double Precio;
        int TiempoTotalVuelo;
        int Posicion;
        switch (Opcion) {
        	// Ingresar un nuevo destino
            case 1: 
                std::cout << "Ingresa el nombre del destino: ";
                std::getline(std::cin, Nombre); 
                std::cout << "Ingresa el precio (MXN): ";
                Precio = LeerPrecio();
                std::cout << "Ingresa el tiempo de vuelo (minutos): ";
                while (true) {
                    std::cin >> TiempoTotalVuelo;
                    if (std::cin.fail() || TiempoTotalVuelo < 0) {
                        std::cin.clear(); 
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                        std::cout << "Tiempo de vuelo no valido. ";
                    } else {
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpiar el buffer de entrada
                        break; 
                    }
                }
                Ingresar(Arbol, Nombre, Precio, TiempoTotalVuelo);
                break;
            // Buscar un destino   
            case 2: 
                std::cout << "Ingresa el nombre del destino a buscar: ";
                std::getline(std::cin, Nombre); 
                Posicion = Buscar(Arbol, Nombre);
                if (Posicion != -1) {
                    std::cout << "Destino encontrado en la posicion " << Posicion << ":\n";
                    ProyectarNodo(Arbol[Posicion]);
                } else {
                    std::cout << "Destino no encontrado.\n";
                }
                break;
            //Eliminar un destino
            case 3: 
                std::cout << "Ingresa el nombre del destino a eliminar: ";
                std::getline(std::cin, Nombre); 
                Eliminar(Arbol, Nombre);
                break;
            //PreOrden    
            case 4: 
                std::cout << "Mostrar datos en PREORDEN:\n";
                PreOrden(Arbol, 0);
                std::cout << std::endl;
                break;
            //InOrden
            case 5: 
                std::cout << "Mostrar datos en INORDEN:\n";
                InOrden(Arbol, 0);
                std::cout << std::endl;
                break;
            //PostOrden
            case 6: 
                std::cout << "Mostrar datos en POSTORDEN:\n";
                PostOrden(Arbol, 0);
                std::cout << std::endl;
                break;
            case 7: 
                std::cout << "Daniel Mendoza Gutierrez /// Matricula: ES231109257.\n";
                std::cout << "Saliendo del programa \n";
                break;
            default:
                std::cout << "Opcion no valida.\n";
        }
    } while (Opcion != 7);
    return 0;
}
//Inicio deL arbol
void InicioArbol(Destino Arbol[]) {
    for (int i = 0; i < NodosMaximos; ++i) {
        Arbol[i].Vacio = true;
    }
}
// Ingresar un destino
void Ingresar(Destino Arbol[], const std::string& Nombre, double Precio, int TiempoTotalVuelo) {
    for (int i = 0; i < NodosMaximos; ++i) {
        if (Arbol[i].Vacio) {
            Arbol[i].Nombre = Nombre;
            Arbol[i].Precio = Precio;
            Arbol[i].TiempoTotalVuelo = TiempoTotalVuelo;
            Arbol[i].Vacio = false;
            std::cout << "Destino " << Nombre << " ingresado en la posicion " << i << ".\n";
            return;
        }
    }
    std::cout << "El arbol está lleno.\n";
}
// Buscar un destino 
int Buscar(Destino Arbol[], const std::string& Nombre) {
    for (int i = 0; i < NodosMaximos; ++i) {
        if (!Arbol[i].Vacio && Arbol[i].Nombre == Nombre) {
            return i;
        }
    }
    return -1;
}
// Eliminar un destino
void Eliminar(Destino Arbol[], const std::string& Nombre) {
    int Posicion = Buscar(Arbol, Nombre);
    if (Posicion != -1) {
        Arbol[Posicion].Vacio = true;
        std::cout << "Destino " << Nombre << " eliminado de la posicion " << Posicion << ".\n";
    } else {
        std::cout << "Destino no encontrado.\n";
    }
}
// PreOrden
void PreOrden(Destino Arbol[], int Indice) {
    if (Indice >= NodosMaximos || Arbol[Indice].Vacio) return;
    ProyectarNodo(Arbol[Indice]);
    PreOrden(Arbol, 2 * Indice + 1);
    PreOrden(Arbol, 2 * Indice + 2);
}
// InOrden
void InOrden(Destino Arbol[], int Indice) {
    if (Indice >= NodosMaximos || Arbol[Indice].Vacio) return;
    InOrden(Arbol, 2 * Indice + 1); 
    ProyectarNodo(Arbol[Indice]);
    InOrden(Arbol, 2 * Indice + 2); 
}
//PostOrden
void PostOrden(Destino Arbol[], int Indice) {
    if (Indice >= NodosMaximos || Arbol[Indice].Vacio) return;
    PostOrden(Arbol, 2 * Indice + 1); 
    PostOrden(Arbol, 2 * Indice + 2); 
    ProyectarNodo(Arbol[Indice]);
}
//Menú principal
void ProyectarMenu() {
    std::cout << "\n--- Menu VuelosMex ---\n";
    std::cout << "1. Insertar nuevo destino\n";
    std::cout << "2. Buscar un destino\n";
    std::cout << "3. Eliminar un destino\n";
    std::cout << "4. Mostrar datos en PREORDEN\n";
    std::cout << "5. Mostrar datos en INORDEN\n";
    std::cout << "6. Mostrar datos en POSTORDEN\n";
    std::cout << "7. Salir\n";
}
// Mostrar los detalles de un nodo destino
void ProyectarNodo(const Destino& destino) {
    std::cout << "Destino: " <<destino.Nombre << ", Precio: " << destino.Precio << " MXN, Tiempo de Vuelo: " << destino.TiempoTotalVuelo << " minutos\n";
}
double LeerPrecio() {
    std::string Entrada;
    while (true) {
        std::getline(std::cin, Entrada);
        std::stringstream ss(Entrada);
        double Precio;
        if (ss >> Precio && Precio >= 0) {
            return Precio;
        } else {
            std::cout << "Precio no valido, intente de nuevo: ";
        }
    }
}
