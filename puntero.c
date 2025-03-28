#include <stdio.h>

// Declaración de la función suma que recibe dos punteros a enteros
int suma(int *, int *);

int main(int argc, char const *argv[])
{
    int resultado, num1, num2; // Se declaran tres variables enteras
    num1 = 100;   // Se inicializa num1 con 100
    num2 = 400;   // Se inicializa num2 con 400

    // Se llama a la función suma pasando las direcciones de num1 y num2
    resultado = suma(&num1, &num2);
     // Se imprime el resultado de la suma
    printf("suma = %d\n", resultado);
     // Se imprimen los valores de num1 y num2 después de la función
    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0; // Se retorna 0 indicando que el programa finalizó correctamente
} 
// Definición de la función suma
int suma(int *ptr_n1, int *ptr_n2)
{
    int res_suma;
     // Se realiza la suma de los valores apuntados por los punteros
    res_suma = (*ptr_n1) + (*ptr_n2);
     // Se modifican los valores originales de las variables a través de los punteros
    (*ptr_n1) = 999;
    (*ptr_n2) = 777;
    // Se retorna el resultado de la suma
    return res_suma;
}









