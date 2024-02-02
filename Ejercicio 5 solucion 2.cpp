#include <stdio.h>

int maximizar_produccion_leche(int num_vacas, int peso_limite, int pesos_vacas, int produccion_leche) {
	int cantidad_vacas, total_peso;
	total_peso=0;
	cantidad_vacas=0;
	 for (int i = 1; i <= num_vacas; i++) {
	 total_peso = total_peso + pesos_vacas;
	 if (total_peso <= peso_limite){

	 cantidad_vacas = cantidad_vacas+1;
}
	 }

    return produccion_leche*cantidad_vacas;
}

int main() {
    int num_vacas;
    int peso_limite;
    int produccion_leche;
    int peso_vaca;

    printf("Ingrese el n�mero total de vacas en la zona de Zaragoza que est�n a la venta: ");
    scanf("%d", &num_vacas);

    printf("Ingrese el peso total que el cami�n puede llevar: ");
    scanf("%d", &peso_limite);

    printf("Ingrese el peso de las vacas:\n");
        scanf("%d", &peso_vaca);

    printf("Ingrese la producci�n de leche en litros por d�a:\n");
        scanf("%d", &produccion_leche);
    

    int resultado = maximizar_produccion_leche(num_vacas, peso_limite, peso_vaca, produccion_leche);

    printf("Cantidad m�xima de producci�n de leche: %d\n", resultado);

    return 0;
}

