#include <stdio.h>

// Función que calcula el promedio y almacena el resultado usando un puntero
void calcularPromedio(int a, int b, int c, float *promedio) {
    *promedio = (a + b + c) / 3.0;
}

int main() {
    int num1, num2, num3;
    float promedio;

    // Entrada de los tres números
    printf("Ingrese tres números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Llamada a la función
    calcularPromedio(num1, num2, num3, &promedio);

    // Imprimir el promedio
    printf("El promedio es: %.2f\n", promedio);

return 0;
}