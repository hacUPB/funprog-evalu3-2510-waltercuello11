#include <stdio.h>
#include <math.h>
 
//Funcion que recibe dos punteros y realiza operaciones entre ellos
void operacion_punteros(float *, int *);
 
int main(int argc, char const *argv[])
{
    float cubo;
    int factorial;
    operacion_punteros(&cubo, &factorial);
    printf("Cubo = %f\n", cubo);
    printf("Factorial = %d\n", factorial);
 
    return 0;
}
 
//Definición de la función
void operacion_punteros(float *var1, int *var2){
    //En la variable a la que apunta var1 voy a guardar el cubo de un numero
    //que ingresa el usuario y en la variaboe a la que apunta var 2 el factorial
    float dato;
    printf("Ingresa un dato: \n");
    scanf("%f", &dato);
    (*var1) = pow(dato,3); //Aqui estoy haciendo desrreferenciación. Y guarda la variable cubo = dato, con la direccion de la memoria 
    (*var2) = fact(dato);
}