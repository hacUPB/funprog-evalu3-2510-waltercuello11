#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    printf("Calculadora\n");
    printf("1. Suma\n2. Multiplicacion\n3. Division\n");
    printf("Seleccione una operacion: ");
    scanf("%d", &opcion);

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Error: Division por cero no permitida.\n");
            }
            break;
        default:
            printf("Opcion invalida.\n");
    }
    return 0;
}