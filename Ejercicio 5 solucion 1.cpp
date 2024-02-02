#include <iostream>
using namespace std;

int main() {
  
    int totalVacas, pesoCamion, pesoVaca, produccionLeche;

    cout << "Ingresar el n�mero total de vacas: ";
    cin >> totalVacas;

    cout << "Ingresar el peso total que el cami�n puede llevar(kg): ";
    cin >> pesoCamion;

    int mejorProduccion = 0;
    int mejorPesoTotal = 0;

    for (int i = 1; i <= totalVacas; ++i) {
        cout << "Peso de la vaca " << i << ": ";
        cin >> pesoVaca;

        cout << "Producci�n de leche de la vaca " << i << " por d�a: ";
        cin >> produccionLeche;

        double produccionTotal = static_cast<double>(produccionLeche) * (pesoCamion / static_cast<double>(pesoVaca));

        if (produccionTotal > mejorProduccion) {
            mejorProduccion = produccionTotal;
            mejorPesoTotal = pesoVaca;
        }
    }

    cout << "La cantidad m�xima de producci�n de leche es: " << mejorProduccion << " litros por d�a." << endl;
    cout << "Se deben llevar vacas con un peso total de: " << mejorPesoTotal << " kg." << endl;

    return 0;
}
