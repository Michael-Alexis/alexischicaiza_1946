Algoritmo daia_semana
	definir dia Como Entero
	Escribir "Ingresa dia de la semana"
	leer dia
	si dia =1 Entonces
		Escribir "Es lunes"
	SiNo
		si dia = 2 Entonces
			Escribir "Es martes"
		SiNo
			si dia =3 Entonces
				Escribir "Es meircoles"
			SiNo
				si dia = 4 Entonces
					Escribir "Es jueves"
				SiNo
					si dia = 5 Entonces
						Escribir "Es viernes"
					sino
						si dia = 6 o  dia = 7 Entonces
							escribir "Es fin de semana"
						SiNo
							Escribir "Ingresaste un dia no valido"
							FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
