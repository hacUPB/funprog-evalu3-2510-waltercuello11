#include <stdio.h>
int main(){
    int numero;
 printf("Ingrese 5 numeros");

 printf("Ingrese el primer numero");

 scanf("%d, &numero");

 minimo = numero;

  for(int i= 2; i <= 5; i++) {

    printf("Ingrese el numero %d: ", i);
    scanf("%d", &numero);
    if (numero < minimo) {
        minimo = numero;
    }
}
printf("El valor mínimo es: %d\n", minimo);

return 0;
  }