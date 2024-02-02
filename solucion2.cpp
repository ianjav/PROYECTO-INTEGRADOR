#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int main() {
    int anio;

    cout << "Ingresar el año: ";
    cin >> anio;

    for (int trimestre = 1; trimestre <= 4; trimestre++) {
        int mes = trimestre * 3 - 2;
        int primerLunes = 1;

        int a = (14 - mes) / 12;
        int y = anio - a;
        int m = mes + 12 * a - 2;
        int dia = (primerLunes + y + y / 4 - y / 100 + y / 400 + 31 * m / 12) % 7;


        dia = (dia + 7) % 7;


        while (dia != 1) {
            primerLunes++;
            dia = (dia + 1) % 7;
        }

        cout << "Reunión del trimestre " << trimestre << ": " << primerLunes << "/" << mes << "/" << anio << endl;
    }

    return 0;
}

