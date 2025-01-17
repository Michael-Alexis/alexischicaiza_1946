Algoritmo suma_numeros
	Definir n,dato,s, contador Como Entero
	Escribir "Ingresar cauntos datosd quieres ingresar"
	leer n
	contador = 0	
	s = 0
	Mientras  contador < n Hacer
		Escribir "Ingresar un numero"
		leer dato
		contador= contador +1
		s=s+ dato
	FinMientras
	Escribir  "L a acumulacion de ",n," = ",s
FinAlgoritmo
