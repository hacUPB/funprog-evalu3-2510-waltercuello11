#include <stdio.h>

int main() {
    int cantidad;
    int stock = 50;

    printf("Bienvenido al sistema de inventario.\n");

    while (stock > 0) {
        printf("Ingrese la cantidad de productos (0 para salir): ");
        scanf("%d", &cantidad);

        if (cantidad == 0) {
            stock = 0;  // Para salir del bucle
        } else if (cantidad > stock) {
            printf("No hay suficientes productos disponibles.\n");
        } else {
            stock -= cantidad;
            printf("Compra aprobada. Stock restante: %d\n", stock);
        }
    }

    printf("No hay más stock. Saliendo del sistema...\n");

    return 0;
}