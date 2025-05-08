#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opciones
    printf("1. sopa\n2. pasta\n3. carne\n4. vegetariano\n");
    printf("%d", &opciones);

    if(opciones == 1){
        printf("Eligio sopa: $ 10000\n");
    }
    else if (opciones == 2)
    {
        printf("Eligio pasta: $ 15000\n");
    }
    else if (opciones == 3)
    {
        printf("Eligio carne: $ 25000\n");
    }
    else if (opciones == 4)
    {
        printf("Eligio menu vegetariano: $ 20000\n");
    }
    return 0;
}