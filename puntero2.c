#include <stdio.h>

main()
{
    int i = 100, *p1, *p2; // Se declara una variable entera i y dos punteros a enteros p1 y p2

    p1 = &i; // p1 apunta a la dirección de memoria de i
    p2 = p1; // p2 también apunta a la misma dirección de memoria que p1 (es decir, a i)

    if (p1 == p2) // Se compara si ambos punteros tienen la misma dirección
    { 
        printf("p1 apunta a la misma dirección de memoria que p2\n");
    }

    *p1 = *p1 + 2; // Se incrementa el valor de i en 2 (i = 100 + 2 = 102)
    
    printf("El valor de *p2 es %d\n", *p2); // Se imprime el valor de i (que es 102)

    (*p2)++; // Se incrementa el valor de i en 1 (i = 102 + 1 = 103)
    
    printf("El valor de *p1 es %d\n", *p1); // Se imprime el valor de i (que es 103)

    i--; // Se decrementa el valor de i en 1 (i = 103 - 1 = 102)
    
    printf("El valor de i es %d\n", i); // Se imprime el valor final de i (102)
}