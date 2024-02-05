Proceso vacas
	Definir totalVacas,i, pesoCamion, pesoVaca, produccionLeche, mejorProduccion, mejorPesoTotal, produccionTotal Como Entero;
	
	Escribir "Ingresar el número total de vacas: ";
	Leer totalVacas;
	
	Escribir "Ingresar el peso total que el camión puede llevar(kg): ";
	Leer pesoCamion;
	
	mejorProduccion = 0;
	mejorPesoTotal = 0;

	Para i = 1 Hasta totalVacas Con Paso 1 Hacer
		Escribir "Peso de la vaca ", i, ": ";
		Leer pesoVaca;
		
		Escribir "Producción de leche de la vaca ", i, " por día: ";
		Leer produccionLeche;
		
		produccionTotal = trunc (produccionLeche * (trunc(pesoCamion)/ pesoVaca));
		
		Si produccionTotal > mejorProduccion Entonces
			mejorProduccion = produccionTotal;
			mejorPesoTotal = pesoVaca;
		Fin Si
	Fin Para
	
	Escribir "La cantidad máxima de producción de leche es: ", mejorProduccion, " litros por día.";
	Escribir "Se deben llevar vacas con un peso total de: ", mejorPesoTotal, " kg.";
FinProceso
