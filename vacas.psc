Proceso vacas
	Definir totalVacas,i, pesoCamion, pesoVaca, produccionLeche, mejorProduccion, mejorPesoTotal, produccionTotal Como Entero;
	
	Escribir "Ingresar el n�mero total de vacas: ";
	Leer totalVacas;
	
	Escribir "Ingresar el peso total que el cami�n puede llevar(kg): ";
	Leer pesoCamion;
	
	mejorProduccion = 0;
	mejorPesoTotal = 0;

	Para i = 1 Hasta totalVacas Con Paso 1 Hacer
		Escribir "Peso de la vaca ", i, ": ";
		Leer pesoVaca;
		
		Escribir "Producci�n de leche de la vaca ", i, " por d�a: ";
		Leer produccionLeche;
		
		produccionTotal = trunc (produccionLeche * (trunc(pesoCamion)/ pesoVaca));
		
		Si produccionTotal > mejorProduccion Entonces
			mejorProduccion = produccionTotal;
			mejorPesoTotal = pesoVaca;
		Fin Si
	Fin Para
	
	Escribir "La cantidad m�xima de producci�n de leche es: ", mejorProduccion, " litros por d�a.";
	Escribir "Se deben llevar vacas con un peso total de: ", mejorPesoTotal, " kg.";
FinProceso
