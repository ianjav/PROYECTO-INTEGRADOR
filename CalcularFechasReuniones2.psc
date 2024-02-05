Proceso CalcularFechasReuniones
    Definir anio, ani, mes, trimestre, primerLunes, a, i, m, d Como Entero;
	
    Escribir "Ingresar el año: ";
    Leer anio;

    Para trimestre = 1 Hasta 4 Con Paso 1 Hacer
		//ani = (ani % 4 = 0 Y ani % 100 <> 0) O (ani % 400 = 0);
		
		mes = trimestre * 3 - 2;
        primerLunes = 1;

        a = trunc((14 - mes) / 12);
        i = trunc(anio - a);
        m = trunc(mes + 12 * a - 2);
        d = trunc(primerLunes + i + i / 4 - i / 100 + i / 400 + 31 * m / 12) Mod 7;
		
        Mientras d <> 1 Hacer
            primerLunes = primerLunes + 1;
            d = trunc(primerLunes + i + i / 4 - i / 100 + i / 400 + 31 * m / 12) Mod 7;
        Fin Mientras
		
        Escribir "Reunión del trimestre ", trimestre, ": ", primerLunes, "/", mes, "/", anio;
    Fin Para
Fin Proceso
