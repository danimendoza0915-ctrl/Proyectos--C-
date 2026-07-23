#include <iostream>
#include <string>
using namespace std; 
//Declaracion de funciones 
void Menu (int ID[], string Titulo[], string Nombre[], string Telefono [], int N);
void OrdenarLibros (int ID[], string Titulo[], string Nombre[], string Telefono [], int N);
void OrdenarPersonas (int ID[], string Titulo[], string Nombre[], string Telefono [], int N);
void BuscarLibros (int ID[], string Titulo[], string Nombre[], string Telefono [], int N);
void BuscarPersona (int ID[], string Titulo[], string Nombre[], string Telefono [], int N);
//Funcion de ordenamiento 
void Burbuja (int ID[], string Arr1[],string Arr2[],string Arr3[],int N);
void Insercion(int ID[], string Arr1[],string Arr2[],string Arr3[],int N);
void Seleccion(int ID[], string Arr1[],string Arr2[],string Arr3[],int N);
void Quicksort (int ID[], string Arr1[],string Arr2[],string Arr3[],int low, int high);
int Particion (int ID[], string Arr1[],string Arr2[],string Arr3[],int low, int high);
//Funcion de busqueda
int Secuencial (string Arr[], string Clave, int N);
int Binaria (string Arr[], string Clave, int N);
int InterPolacion(int ID[], string Arr[], string Clave, int low, int high);
int main(){
	int ID[10] = {2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010};
    string Titulo[10] = {"El Viajero del Tiempo", "La Galaxia Perdida", "Universo Paralelo", "La Nave Espacial Eterna", 
                          "El Legado de Andromeda", "Mundos en Colision", "La Rebelion de los Cyborgs", "Horizonte de Eventos", 
                          "Los Guardianes del Multiverso", "La Inteligencia Artificial Suprema"};
    string Nombre[10] = {"Carlos", "Laura", "Andres", "Sofia", "Miguel", "Daniela", "Jorge", "Valentina", "Alejandro", "Lucia"};
    string Telefono[10] = {"555-1234-567", "555-2345-678", "555-3456-789", "555-4567-890", "555-5678-901", 
                            "555-6789-012", "555-7890-123", "555-8901-234", "555-9012-345", "555-0123-456"};
    int N = 10;

    Menu(ID, Titulo, Nombre, Telefono, N);
	cout<<"Nombre: Daniel Mendoza Gutierrez  // Matricula:ES231109257" <<endl;
	return 0;
}
//Funcion para menu
void Menu (int ID[], string Titulo[], string Nombre[], string Telefono [], int N){
	int Opcion;
    do {
        cout << "MENU DE OPCIONES" << endl;
        cout << "1. Ordenar Libros por titulo" << endl;
        cout << "2. Ordenar Personas por nombre" << endl;
        cout << "3. Buscar un libro" << endl;
        cout << "4. Buscar una persona" << endl;
        cout << "5. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> Opcion;
        switch (Opcion){
        	case 1:
        		OrdenarLibros (ID, Titulo, Nombre,  Telefono, N);
        		break;
        	case 2:
        		OrdenarPersonas (ID, Titulo, Nombre,Telefono, N);
        		break;
        	case 3:
        		BuscarLibros (ID, Titulo, Nombre, Telefono , N);
        		break;
        	case 4:
        		BuscarPersona (ID, Titulo, Nombre, Telefono , N);
        		break;
        	case 5:
        		cout <<"Saliendo del programa"<<endl;
        		break;
        	default:
        		cout<<"Opcion no valida"<<endl;
		}
   } while (Opcion !=5);
}
//Funcion de menu de ordenar libros
void OrdenarLibros (int ID[], string Titulo[], string Nombre[], string Telefono [], int N){
	char Opcion;
	cout << "SELECCIONA UN METODO DE ORDENAMIENTO" << endl;
    cout << "a. Burbuja" << endl;
    cout << "b. Insercion" << endl;
    cout << "c. Seleccion" << endl;
    cout << "d. Quicksort" << endl;
    cout << "Selecciona una opcion: ";
    cin >> Opcion;
    switch(Opcion){
    	case 'a':
    		Burbuja (ID,Titulo, Nombre, Telefono, N);
    		break;
    	case 'b':
    		Insercion (ID, Titulo, Nombre,Telefono, N);
    		break;
    	case 'c':
    		Seleccion(ID,Titulo,Nombre,Telefono, N);
    		break;
    	case 'd':
    		Quicksort(ID,Titulo, Nombre,Telefono, 0, N -1);
    		break;
    	default:
    		cout<<"Opcion no valida"<<endl;
    		return;
	}
}
//Funcion de menu para ordenar personas 
void OrdenarPersonas (int ID[], string Titulo[], string Nombre[], string Telefono [], int N){
	char Opcion;
	cout << "SELECCIONA UN METODO DE ORDENAMIENTO" << endl;
    cout << "a. Burbuja" << endl;
    cout << "b. Insercion" << endl;
    cout << "c. Seleccion" << endl;
    cout << "d. Quicksort" << endl;
    cout << "Selecciona una opcion: ";
    cin >> Opcion;
    switch(Opcion){
    	case 'a':
    		Burbuja (ID,Nombre, Titulo, Telefono, N);
    		break;
    	case 'b':
    		Insercion(ID,Nombre,Titulo, Telefono, N);
    		break;
    	case 'c':
    		Seleccion(ID, Nombre,Titulo, Telefono, N);
    		break;
    	case 'd':
    		Quicksort(ID,Nombre,Titulo,Telefono, 0, N-1);
    		break;
    	default:
    		cout<<"Opcion no valida"<<endl;
    		return;
	}
}
//Funcion de menu para buscar libros
void BuscarLibros (int ID[], string Titulo[], string Nombre[], string Telefono [], int N){
	char Opcion;
	cout << "SELECCIONA UN METODO DE BUSQUEDA" << endl;
    cout << "a. Secuencial" << endl;
    cout << "b. Binaria" << endl;
    cout << "c. Por interpolacion" << endl;
    cout << "Selecciona una opcion: ";
    cin >> Opcion;
    string TituloABuscar;
    cout<<"Ingrese el titulo del libro que desea buscar: ";
    cin.ignore();
    getline(cin,TituloABuscar);
    int Indice =-1;
    switch (Opcion){
    	case 'a':
            Indice = Secuencial (Titulo, TituloABuscar,N); 
		    break;
    	case 'b':
    		Indice = Binaria (Titulo, TituloABuscar,N);
    		break;
    	case 'c':
    		Indice = InterPolacion(ID,Titulo,TituloABuscar, 0, N-1);
    		break;
    	default:
    		cout<<"Opcion no valida"<<endl;
	}
	if (Indice !=-1){
	    cout << "Libro encontrado." << endl;
        cout << "Nombre: " << Nombre[Indice] << endl;
        cout << "Telefono: " << Telefono[Indice] << endl;
    } else {
        cout << "El dato no ha sido localizado." << endl;
    }
}
//Funcion de menu para buscar persona
void BuscarPersona (int ID[], string Titulo[], string Nombre[], string Telefono [], int N){
	char Opcion;
	cout << "SELECCIONA UN METODO DE BUSQUEDA" << endl;
    cout << "a. Secuencial" << endl;
    cout << "b. Binaria" << endl;
    cout << "c. Por interpolacion" << endl;
    cout << "Selecciona una opcion: ";
    cin >> Opcion;
    string NombreABuscar;
    cout << "Ingrese el nombre de la persona a buscar: ";
    cin.ignore();
    getline(cin, NombreABuscar);
    int Indice=-1;
    switch (Opcion){
    	case 'a':
    		Indice=Secuencial(Nombre, NombreABuscar,N);
    		break;
    	case 'b':
    		Indice= Binaria(Nombre, NombreABuscar,N);
    	case 'c':
    		Indice= InterPolacion(ID,Nombre, NombreABuscar,0,N-1);
    		break;
    	default:
    		cout<<"Opcion no valida"<<endl;
    		return;
      }
      if (Indice != -1) {
        cout << "Persona encontrada." << endl;
        cout << "Titulo del libro: " << Titulo[Indice] << endl;
        cout << "ID del libro: " << ID[Indice] << endl;
      } else {
        cout << "El dato no ha sido localizado." << endl;
    }
}
//Metodos de orden y busqueda
void Burbuja (int ID[], string Arr1[], string Arr2[], string Arr3[],int N){
	for (int i=0; i< N-1;i++){
		for(int j=0; j<N-i-1;j++){
		 if (Arr1[j] > Arr1[j + 1]) {
                swap(Arr1[j], Arr1[j + 1]);
                swap(Arr2[j], Arr2[j + 1]);
                swap(Arr3[j], Arr3[j + 1]);
                swap(ID[j], ID[j + 1]);
            }
        }
        cout << "Iteracion " << i + 1 << ": ";
        for (int k=0; k<N; k++) {
            cout<<Arr1[k] << (k<N - 1?", ":"\n");
        }
    }
}
void Insercion(int ID[], string Arr1[], string Arr2[], string Arr3[],int N){
    for (int i = 1; i < N; i++) {
        string Key1 = Arr1[i];
        string Key2 = Arr2[i];
        string Key3 = Arr3[i];
        int KeyId = ID[i];
        int j = i - 1;
        while (j >= 0 && Arr1[j] > Key1) {
            Arr1[j + 1] = Arr1[j];
            Arr2[j + 1] = Arr2[j];
            Arr3[j + 1] = Arr3[j];
            ID[j + 1] = ID[j];
            j = j - 1;
        }
        Arr1[j + 1] = Key1;
        Arr2[j + 1] = Key2;
        Arr3[j + 1] = Key3;
        ID[j + 1] = KeyId;

        cout << "Iteracion " << i << ": ";
        for (int k = 0; k < N; k++) {
            cout << Arr1[k] << (k < N - 1 ? ", " : "\n");
        }
    }
}
void Seleccion(int ID[], string Arr1[], string Arr2[], string Arr3[],int N){
    for (int i = 0; i < N - 1; i++) {
        int MinIdx = i;
        for (int j = i + 1; j < N; j++) {
            if (Arr1[j] < Arr1[MinIdx]) {
                MinIdx = j;
            }
        }
        swap(Arr1[MinIdx], Arr1[i]);
        swap(Arr2[MinIdx], Arr2[i]);
        swap(Arr3[MinIdx], Arr3[i]);
        swap(ID[MinIdx], ID[i]);
        cout << "Iteracion " << i + 1 << ": ";
        for (int k = 0; k < N; k++) {
            cout <<Arr1[k] << (k < N-1 ? ", " : "\n");
        }
    }
}
void Quicksort (int ID[], string Arr1[], string Arr2[], string Arr3[],int low, int high){
    if (low < high) {
        int Pi = Particion(ID, Arr1, Arr2, Arr3, low, high);
        Quicksort(ID, Arr1, Arr2, Arr3, low, Pi - 1);
        Quicksort(ID, Arr1, Arr2, Arr3, Pi + 1, high);

        cout << "Quicksort entre " << low << " y " << high << ": ";
        for (int k = 0; k <= high; k++) {
            cout << Arr1[k] << (k < high ? ", " : "\n");
        }
    }
}
int Particion (int ID[], string Arr1[],string Arr2[],string Arr3[],int low, int high){
    string Pivot = Arr1[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (Arr1[j] < Pivot) {
            i++;
            swap(Arr1[i], Arr1[j]);
            swap(Arr2[i], Arr2[j]);
            swap(Arr3[i], Arr3[j]);
            swap(ID[i], ID[j]);
        }
    }
    swap(Arr1[i + 1], Arr1[high]);
    swap(Arr2[i + 1], Arr2[high]);
    swap(Arr3[i + 1], Arr3[high]);
    swap(ID[i + 1], ID[high]);

    return i + 1;
}
int Secuencial (string Arr[], string Clave, int N){
    for (int i = 0; i < N; i++) {
        if (Arr[i] == Clave) {
            return i;
        }
    }
    return -1;
}
int Binaria (string Arr[], string Clave, int N){
   int low = 0, high = N - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (Arr[mid] == Clave) {
            return mid;
        }
        if (Arr[mid] < Clave) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int InterPolacion(int ID[], string Arr[], string Clave, int low, int high){
    while (low <= high && Clave >= Arr[low] && Clave <= Arr[high]) {
        int pos = low + (((double)(high - low) / (Arr[high].compare(Arr[low])) * (Clave.compare(Arr[low]))));
        if (pos < low || pos > high) return -1; 
        if (Arr[pos] == Clave) {
            return pos;
        }
        if (Arr[pos] < Clave) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}
