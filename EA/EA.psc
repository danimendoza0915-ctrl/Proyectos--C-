Algoritmo sin_titulo
	Definir Edad Como Entero
	Definir Experiencia Como Entero
	Definir Sueldo Como Entero
	definir opc Como Entero
	
	Escribir "Bienvenidos"
	Escribir "Ingrese el area de interes"
	Escribir "1 administracion"
	Escribir "2 produccion"
	Escribir "3 ventas"
	Leer opc 

	Segun opc Hacer
		1:
			opc= administacion 
			Escribir "ingrese su edad"
			Leer Edad
			si edad < 30 o edad >35 Entonces
				Escribir "fuera del rango de edad, no puede ser contratado"
				Escribir "Hasta luego"
			SiNo
				Escribir "ingrese su Experiencia laboral en meses"
				leer Experiencia
				si Experiencia<6
					Escribir "poca Experiencia, no puede ser contratado"
					Escribir "Hasta luego"
				SiNo
					escribir "ingrese Sueldo mensual deseado"
					leer sueldo 
					si sueldo <10000 o sueldo>12000 Entonces
						Escribir "sueldo fuera del rango estipulado, no puede ser contratado"
						Escribir "Hasta luego"
					SiNo
						Escribir "su solicitud fue aceptada" 
						Escribir "Hasta luego"
					FinSi
				fin si 
			finsi 
			
		2: 
			opc= produccion 
			
			Escribir "ingrese su edad"
			Leer Edad
			si edad < 30 o edad >35 Entonces
				Escribir "fuera del rango de edad, no puede ser contratado"
				Escribir "Hasta luego"
			SiNo
				Escribir "ingrese su Experiencia laboral en meses"
				leer Experiencia
				si Experiencia<6
					Escribir "poca Experiencia, no puede ser contratado"
					Escribir "Hasta luego"
				SiNo
					escribir "ingrese Sueldo mensual deseado"
					leer sueldo 
					si sueldo <80000 o sueldo>10000 Entonces
						Escribir "sueldo fuera del rango estipulado, no puede ser contratado"
					SiNo
						Escribir "su solicitud fue aceptada" 
						Escribir "Hasta luego"
					FinSi
				fin si 
			finsi 
			
		3:
			opc= ventas 
			Escribir "ingrese su edad"
			Leer Edad
			si edad < 30 o edad >35 Entonces
				Escribir "fuera del rango de edad, no puede ser contratado"
			SiNo
				Escribir "ingrese su Experiencia laboral en meses"
				leer Experiencia
				si Experiencia<6
					Escribir "poca Experiencia, no puede ser contratado"
				SiNo
					escribir "ingrese Sueldo mensual deseado"
					leer sueldo 
					si sueldo <50000 o sueldo>7000 Entonces
						Escribir "sueldo fuera del rango estipulado, no puede ser contratado"
						Escribir "Hasta luego"
					SiNo
						Escribir "su solicitud fue aceptada" 
						Escribir "Hasta luego"
					FinSi
				fin si 
			finsi 
	FIN SEGUN 
	
	Imprimir "Daniel mendoza Gutierrez   matricula:ES231109257"
	
	Escribir "bienvenido al hospital"
	Escribir "Ingrese el monto a pagar:"
    Leer monto_total
	
    Escribir "Especialidades que ofrecen descuento:"
    Escribir "1 Oncología:","5%"
    Escribir "2 Neumología:","8%"
    Escribir "3 Cardiología:","6%"
    Escribir "4 Anestesiología:","9%"
	Escribir "5 otra opcion"
    
    Escribir "Ingrese la especialidad a la que asistió:"
    Leer opc
	
	segun opc Hacer
		1:
			especialidad= oncología
			descuento = monto_total * 0.05
			nuevo_total = monto_total - descuento
			Escribir "Monto total: $" monto_total
			Escribir "Descuento: $" descuento
			Escribir "Nuevo total con descuento: $" nuevo_total
		2:
			especialidad= Neumología
			descuento = monto_total * 0.08
			nuevo_total = monto_total - descuento
			Escribir "Monto total: $" monto_total
			Escribir "Descuento: $" descuento
			Escribir "Nuevo total con descuento: $" nuevo_total
			
		3: 
			especialidad= Cardiología
			descuento = monto_total * 0.06
			nuevo_total = monto_total - descuento
			Escribir "Monto total: $"  monto_total
			Escribir "Descuento: $"  descuento
			Escribir "Nuevo total con descuento: $" nuevo_total
		4: 
			especialidad= Anestesiología
			descuento = monto_total * 0.09
			nuevo_total = monto_total - descuento
			Escribir "Monto total: $" monto_total
			Escribir "Descuento: $" descuento
			Escribir "Nuevo total con descuento: $" nuevo_total
		5:
			especialidad= otra_opcion 
			Escribir "Lo siento, la especialidad a la que asistió no aplica descuento."
			
	FinSegun
	
	Imprimir "Daniel Mendoza Gutierrez matricula:ES231109257"

FinAlgoritmo
