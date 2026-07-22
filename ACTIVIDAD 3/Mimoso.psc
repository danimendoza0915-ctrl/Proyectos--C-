Proceso Mimoso
	Definir capacidad_Total como entero;
	capacidad_Total <- 60;
	Definir porcentaje_maximo como entero;
	porcentaje_maximo <- 75;
	Definir capacidad_permitida Como Real;
	capacidad_permitida <- capacidad_Total * porcentaje_maximo / 100;
	Definir clientes_ingresados como entero;
	clientes_ingresados <- 0;
	Definir clientes_nuevos Como Entero;
	Mientras (clientes_ingresados < capacidad_permitida) Hacer
		Escribir ("Ingrese el numero de clientes que desea ingresar: ");
		leer clientes_nuevos;
		clientes_ingresados <- clientes_ingresados + clientes_nuevos;
		si (clientes_ingresados >= capacidad_permitida/2) Entonces
			Escribir ("Se ha alcanzado la mitad del aforo maximo.");
		FinSi
		si (clientes_ingresados < capacidad_permitida) Entonces
			Escribir ("Todavia existe disponibilidad de acceso a algunos clientes.");
		FinSi
	FinMientras
	Escribir ("Capacidad maxima permitida alcanzada. No se permiten mas clientes.");
    Imprimir  "Daniel Mendoza Gutierrz Matricula: es231109257"
	
FinProceso