#include <iostream>
using namespace std;

int main() {
  
    int totalVacas, pesoCamion, pesoVaca, produccionLeche;

    cout << "Ingresar el número total de vacas: ";
    cin >> totalVacas;

    cout << "Ingresar el peso total que el camión puede llevar(kg): ";
    cin >> pesoCamion;

    int mejorProduccion = 0;
    int mejorPesoTotal = 0;

    for (int i = 1; i <= totalVacas; ++i) {
        cout << "Peso de la vaca " << i << ": ";
        cin >> pesoVaca;

        cout << "Producción de leche de la vaca " << i << " por día: ";
        cin >> produccionLeche;

        double produccionTotal = static_cast<double>(produccionLeche) * (pesoCamion / static_cast<double>(pesoVaca));

        if (produccionTotal > mejorProduccion) {
            mejorProduccion = produccionTotal;
            mejorPesoTotal = pesoVaca;
        }
    }

    cout << "La cantidad máxima de producción de leche es: " << mejorProduccion << " litros por día." << endl;
    cout << "Se deben llevar vacas con un peso total de: " << mejorPesoTotal << " kg." << endl;

    return 0;
}
