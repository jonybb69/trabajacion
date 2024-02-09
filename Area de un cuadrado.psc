Algoritmo AreaDeCuadrado
	
	//etapa 1 - definir entrada
	Definir lado Como Entero
	Definir area como entero
	
	//etapa 2 - datos de entrada (leer)
	escribir "ingresa el valor del lado del cuadrado"
	leer lado
	
	//etapa 3 - proceso (operacion matematica para area)
	area= lado*lado
	
	//etapa 4 - mostrar resultado
	escribir "el area del cuadrado es; ", area " cm^2"
	
	//Vamos a probar una condicional (if-else)
	//Vamos a expresar si un area es <100cm2 que diga
	//"El valor del area es muy grande" , de lo contrario " el area es muy chica"
	Si area >100 Entonces
		escribir "Area muy grande"
	SiNo
		escribir "Area muy chica"
	Fin Si
	
FinAlgoritmo
