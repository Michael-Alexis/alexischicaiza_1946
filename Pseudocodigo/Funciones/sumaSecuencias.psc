Funcion resulFibo <- fibonacci ( resul )
	Definir  resulFibo,f,g,h Como Entero
	f=0
	g=0
	h=1
	Mientras resul>f Hacer
		resulFibo=g+h
		g=h
		h=resulFibo
		f=f+1
	Fin Mientras
Fin Funcion

Funcion resulFacto <- factorial (nFacto,e)
	Definir resulFacto Como Entero
	resulFacto=nFacto*e
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

Algoritmo sumaSecuencias
	Definir  ter,suma,i,a,b Como Entero
	Definir c,d Como Real
	ter=ingresarTer
	i=1
	a=1
	d=0
	Mientras ter>=i Hacer
		a=  factorial(a,i)
		b=fibonacci(i)
		Escribir "///////////////////"
		Escribir "Termino factorial ",a
		Escribir "Termino fibonacci ",b
		c=a/b
		d=d+c
		Escribir "El esultado de la fraccion ",i," es ",c
		i=i+1
	Fin Mientras
	Escribir "Resultado total",d
FinAlgoritmo
