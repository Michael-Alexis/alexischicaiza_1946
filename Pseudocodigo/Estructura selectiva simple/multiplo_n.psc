Algoritmo multiplo_n
	Definir num, r, divi Como Entero
	Escribir 'ingres el numero'
	Leer num
	Escribir 'ingres el numero divisible'
	Leer divi
	r <- num MOD divi
	Si r=0 Entonces
		Escribir 'Es multiplo de',divi
	SiNo
		Escribir "no  es multiplo de",divi
	FinSi
	num <- 0
FinAlgoritmo
