Funcion fibonacci <- fibo ( resul )
	Definir  fibonacci,i,acu,a,b Como Entero
	i=0
	a=0
	b=1
	Escribir "Sucesion de fibonaci"
	Mientras resul>i Hacer
		fibonacci=a+b
		a=b
		b=fibonacci
		i=i+1
	Fin Mientras
Fin Funcion
Funcion factorial <- facto ( result)
	Definir factorial, i, op Como Entero
	i=1
	factorial=1
	Mientras result >= i Hacer
		factorial=factorial*i
		i=i+1
	Fin Mientras
Fin Funcion
Funcion num <- ingresarTer
	Definir num Como Entero
	Definir  bandera Como Logico
	bandera=Verdadero
	Mientras bandera Hacer
		Escribir "Ingrese numero de terminosc entre 1 y 10"
		leer num
		Si (num>= 1 y num <=10) Entonces
			bandera=falso
		SiNo
			Escribir "Ingreser unvalor dentro del rango"
		Fin Si
		
	Fin Mientras
Fin Funcion
Algoritmo opercaciom
	Definir  ter,suma Como Entero
	ter=ingresarTer
FinAlgoritmo

