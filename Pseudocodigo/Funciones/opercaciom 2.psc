Funcion resultado<- matematica ( num1,num2 )
	Definir resultado Como Entero
	resultado = num1 mod num2
Fin Funcion
Funcion num<- ingresaNumero
	definir num Como Entero
	Escribir "Ingresar el numero"
	leer num
Fin Funcion

Algoritmo opercaciom
	Definir  n1,n2 Como Entero
	Definir sal Como Logico
	sal=Verdadero
	Mientras sal Hacer
		n1 = ingresaNumero ()
		n2 = ingresaNumero ()
		si n2=0 Entonces
			Escribir ("Ingrese un numero valido")
		FinSi
		Escribir "El modulo es igual a",matematica(n1,n2)
	FinMientras
	Escribir "Salimos del programa"
FinAlgoritmo
