#include <stdio.h>
int main(){
    int numero;
 printf("Ingrese un numero del 1 al 10");
 scanf("%d", &numero);
 printf("Tabla de Multiplicar de %d :\n, numero");
 for(int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero , i, numero * i);
 }
return 0;

}