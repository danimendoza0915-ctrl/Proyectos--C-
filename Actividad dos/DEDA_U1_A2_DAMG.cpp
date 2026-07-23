//Daniel Mendoza Gutierrez   Matricula:ES231109257
//Estrucutra de datos Actividad dos 
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
const int MaxEstudiantes= 12;

//Estructura de los datos 
int MatriculaGrupoA[MaxEstudiantes] = {258, 295, 131, 878, 248, 741};
int MatriculaGrupoB[MaxEstudiantes] = {287, 170, 322, 730, 166, 147}; 
string NombreGrupoA[MaxEstudiantes] = {"Luis", "Pedro", "Magdalena", "Perla", "Rosa", "Cristofer"};
string NombreGrupoB[MaxEstudiantes] = {"Juan", "Maria", "Ricardo", "Ana", "Lucas", "Mateo"};
float PromedioGrupoA[MaxEstudiantes] = {5.6, 5.9, 5.4, 6.9, 9.6, 9.4};
float PromedioGrupoB[MaxEstudiantes] = {7.3, 8.1, 6.7, 6.1, 9.6, 8.3};
int NumeroEstudiantesA=6;
int NumeroEstudiantesB=6;

//Funcion de validación para matricula
bool ValidacionMatricula(int Matricula, int *Matriculas, int NumeroEstudiantes) {
    if (Matricula <= 0) return false;
    for (int i = 0; i < NumeroEstudiantes; i++) {
        if (Matriculas[i] == Matricula) return false; 
    }
    return true;
}
//funcion para registro de estudiantes
void RegistroParaEstudiantes() {
    int Matricula;
    string Nombre;
    float Promedio;
    char Grupo;
    bool MatriculaValidada = false;
    while (!MatriculaValidada) {
        cout << "Ingrese la matricula siendo un valor valido (Un numero positivo entero y que no este registrado): ";
        cin >> Matricula;
        MatriculaValidada = ValidacionMatricula(Matricula, MatriculaGrupoA, NumeroEstudiantesA) && ValidacionMatricula(Matricula, MatriculaGrupoB, NumeroEstudiantesB);
        if (!MatriculaValidada) {
            cout << "La matricula ingresada no es valida o ya existe" << endl;
        }
    }
    cout << "Ingrese al grupo que pertenece A/B: ";
    cin >> Grupo;
    cout << "Ingrese su nombre: ";
    cin >> Nombre;
    cout << "Ingrese su promedio: ";
    cin >> Promedio;
    if ((Grupo == 'A' || Grupo == 'a') && NumeroEstudiantesA < MaxEstudiantes) {
        MatriculaGrupoA[NumeroEstudiantesA] = Matricula;
        NombreGrupoA[NumeroEstudiantesA] = Nombre;
        PromedioGrupoA[NumeroEstudiantesA] = Promedio;
        NumeroEstudiantesA++;
    } else if ((Grupo == 'B' || Grupo == 'b') && NumeroEstudiantesB < MaxEstudiantes) {
        MatriculaGrupoB[NumeroEstudiantesB] = Matricula;
        NombreGrupoB[NumeroEstudiantesB] = Nombre;
        PromedioGrupoB[NumeroEstudiantesB] = Promedio;
        NumeroEstudiantesB++;
    } else {
        cout << "Datos invalidos o grupo lleno" << endl;
    }
}
//Funcion para poder visualizar los cursos
void VisualizarGrupos (){
	char Grupo;
	cout <<"Ingrese el grupo que desea ver A/B: "; 
	cin >>Grupo; 
	if (Grupo== 'A' || Grupo=='a'){
		for (int i=0; i< NumeroEstudiantesA;i++){
			cout <<"Matricula: "<<MatriculaGrupoA[i] << ", Nombre: " << NombreGrupoA[i] << ", Promedio: " <<PromedioGrupoA[i] <<endl;
		}
	}else if (Grupo== 'B' || Grupo=='b'){
			for (int i=0; i< NumeroEstudiantesB;i++){
			cout <<"Matricula: "<<MatriculaGrupoB[i] << ", Nombre: " << NombreGrupoB[i] << ", Promedio: " <<PromedioGrupoB[i] <<endl;
			}
	}else {
		cout<<"Grupo no valido" <<endl;
	}
}
//Funcion para poder modificar el promedio
void ModificarPromedio(){
	char Grupo;
	int Matricula;
	float NuevoPromedio;
	bool Encontrado =false; 
	cout <<"Ingrese el grupo que desea modificar A/B: "; 
	cin >>Grupo; 
	cout << "Ingrese la matricula: ";
    cin >> Matricula;
		if (Grupo== 'A' || Grupo=='a'){
		for (int i=0; i< NumeroEstudiantesA; i++){
			if(MatriculaGrupoA[i] == Matricula){
				cout<<"Ingrese el nuevo promedio: ";
				cin >> NuevoPromedio;
				PromedioGrupoA [i]=NuevoPromedio;
				Encontrado=true;
				break;
			}
		}
	}else if (Grupo== 'B' || Grupo=='b'){
		for (int i=0; i< NumeroEstudiantesB; i++){
			if(MatriculaGrupoB[i] == Matricula){
				cout<<"Ingrese el nuevo promedio: ";
				cin >> NuevoPromedio;
				PromedioGrupoB [i]=NuevoPromedio;
				Encontrado=true;
				break;
			}
		}
	}else {
		cout << "Grupo no valido" << endl;
	}
	if (!Encontrado){
		cout << "Matricula no valida o no encontrada" << endl;
	}	
}
//Fucion para vaciar datos 
void VaciarDatos(){
	char Grupo;
	cout <<"Ingrese el grupo que desea vacear A/B: "; 
	cin >>Grupo;
	if (Grupo== 'A' || Grupo=='a'){
		while (NumeroEstudiantesA >0){
			NumeroEstudiantesA--;
			cout <<"Estudiante eliminado con matricula: "<< MatriculaGrupoA[NumeroEstudiantesA] <<endl; 
		}
	}else if (Grupo== 'B' || Grupo=='b'){
		while (NumeroEstudiantesB >0){
			NumeroEstudiantesB--;
			cout <<"Estudiante eliminado con matricula: "<< MatriculaGrupoB[NumeroEstudiantesB] <<endl;
		}
	}else {
	    cout << "Grupo no valido" << endl;

	}
}
//Funcion pricipal
int main (){
	int Opcion;
	do {
		cout << "\n**Menu Principal**"<<endl;
		cout << "1. Registrar estudiantes" << endl;
        cout << "2. Ver grupos" << endl;
        cout << "3. Modificar promedio" << endl;
        cout << "4. Vaciar datos" << endl;
        cout << "5. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> Opcion;
        switch (Opcion){
        	case 1:
        		RegistroParaEstudiantes();
        		break;
        	case 2:
        		VisualizarGrupos();
        		break;
        	case 3:
        	    ModificarPromedio();
        	    break;
        	case 4:
        		VaciarDatos();
        		break;
        	case 5:
                cout << "Cerrado..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (Opcion != 5);

    return 0;
}
