//Al interior de una organizaci�n el director general ha establecido tener 
//reuniones masivas con todos los empleados de la planta el primer lunes de 
//cada trimestre. Elabore un algoritmo que dado el a�o calcule autom�ticamente 
//las fechas de las reuniones trimestrales de todo el a�o. Use las siguientes 
//f�rmulas para determinar el d�a de la semana de una fecha dia/mes/anio, el valor 
//0 significa domingo, 1 lunes y as� sucesivamente.

#include <iostream>
using namespace std;

int main() {
    int mes, anio, dia, trimestre, primerLunes;

    cout << "Ingresar el a�o: ";
    cin >> anio;

    for (trimestre = 1; trimestre <= 4; trimestre++) {
        mes = trimestre * 3 - 2;  
        primerLunes = 1;

        int a = (14 - mes) / 12;
        int y = anio - a;
        int m = mes + 12 * a - 2;
        int d = (primerLunes + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;

        while (d != 1) {
            primerLunes++;
            d = (primerLunes + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;
        }

        cout << "Reuni�n del trimestre " << trimestre << ": " << primerLunes << "/" << mes << "/" << anio << endl;
    }

    return 0;
}
