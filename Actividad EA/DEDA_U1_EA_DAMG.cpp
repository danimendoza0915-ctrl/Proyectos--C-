//Daniel Mendoza Gutierrez   Matricula:ES231109257
//Estrucutra de datos  Evidencia de aprendizaje 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

const int Max_Size =12; 
string Marcas[Max_Size];
int Equipos[Max_Size]; 
int Size=0; 
void ProyectarEstructura(){
	cout << "Marca\t\tNo.Equipos"<<endl; 
	for (int i=0; i<Size;++i){
		cout << Marcas [i] << "\t\t" << Equipos[i]<<endl;
	}
}
bool validacionDeMarca(string Marca){
	if (Marca.empty()) return false;
	for (int i=0; i<Size;++i){
		if (Marcas[i] == Marca) return false; 
		
	}
	return true; 
}
bool ValidacionEquipos(int Equipo){
	if (Equipo<=0)return false;
	for (int i=0; i<Size; ++i){
		if (Equipos[i]==Equipo) return false;
	}
	return true; 
}
void RegistroDeEquipos(){
	if (Size==Max_Size){
		cout<< "La estructura ya esta llena"<<endl;
		return; 
	}
	string Marca;
	int Cantidad;
	do{
		cout <<"Ingrese la marca: ";
		cin>>Marca;
	}while (!validacionDeMarca(Marca));
	do{
		cout <<"Ingrese el numero de equipos: ";
		cin>>Cantidad;
	}while (!ValidacionEquipos(Cantidad));
	Marcas[Size]=Marca;
	Equipos[Size]=Cantidad;
	Size++;
}
void OrdenarEquipos (bool Ascendente){
	for (int i=0; i<Size - 1; ++i){
		for(int j=0; j<Size -i - 1; ++j){
			if((Ascendente&&Equipos[j]>Equipos[j+1]) || (!Ascendente&&Equipos[j]<Equipos[j+1])){
				swap(Equipos[j], Equipos[j+1]);
				swap(Marcas[j], Marcas[j+1]);
			}
		}
	}
}
void ConsultaDeEquipos(){
	OrdenarEquipos (true);
	ProyectarEstructura();
	string Marca;
	bool Encontrada=false;
	do{
		cout<< "Ingrese la marca: ";
		cin>>Marca;
		for(int i=0; i<Size; ++i){
			if (Marcas[i] ==Marca){
				cout<<"La caja con la marca "<<Marca << " contiene "<< Equipos[i] <<" equipos y se encuentra en la posicion " << i << " del arreglo" << endl;
				Encontrada = true;
				break;
			}
		}
		if(!Encontrada){
			cout<<"La marca no existe. Intente de nuevo"<<endl;
		}
	} while(!Encontrada);
}
void DesapilarLaEstructura(){
	OrdenarEquipos(true);
	cout<<"***Desapilando datos***"<<endl;
	while (Size>0){
		cout<<"El registro desapilado es la marca " <<Marcas [Size-1] << " con "<<Equipos[Size-1] <<" equipos"<<endl;
		Size--;
	}
}
void DesencolarLaEstructura(){
	OrdenarEquipos(true);
	cout<<"***Desencolando datos***"<<endl;
	while (Size>0){
		cout<<"El registro desecolado es de la marca "<<Marcas[0]<<" con "<<Equipos[0] <<" equipos"<<endl;
		for(int i=0; i<Size-1; ++i){
			Marcas[i]= Marcas[i+1];
			Equipos[i]=Equipos[i+1];
		}
		Size--;
	}
}
void Menu(){
	char Opcion;
	do{
		cout << "** MENU PRINCIPAL **" << endl;
        cout << "a) Registrar equipos" << endl;
        cout << "b) Ordenar equipos" << endl;
        cout << "c) Consultar equipos" << endl;
        cout << "d) Desapilar estructura" << endl;
        cout << "e) Desencolar estructura" << endl;
        cout << "f) Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> Opcion;
        switch (Opcion){
        	case 'a':
        		RegistroDeEquipos();
        		break;
        	case 'b':
        		char SubOpcion;
                cout << "ORDENADO DE EQUIPOS" << endl;
                cout << "a) De menor a mayor" << endl;
                cout << "b) De mayor a menor" << endl;
                cout << "c) Regresar al menu" << endl;
                cout << "Selecciona una opcion: ";
                cin >> SubOpcion;
                if (SubOpcion == 'a') {
                    OrdenarEquipos(true);
                    ProyectarEstructura();
                } else if (SubOpcion == 'b') {
                    OrdenarEquipos(false);
                    ProyectarEstructura();
                }
                break;
        	case 'c':
        		ConsultaDeEquipos();
        		break;
        	case 'd':
        		DesapilarLaEstructura();
        	    break;
        	case 'e':
        		DesencolarLaEstructura();
        		break;
        	case 'f':
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (Opcion != 'f');
}
int main(){
	Menu();
	return 0;
}

