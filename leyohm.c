#include <stdio.h>
#include <math.h>
void ley_de_ohm() {
    float voltaje, resistencia, corriente;
    printf("Ingrese el Voltaje (V):");
    scanf("%f", &voltaje);
    printf("Ingrese la resistencia (Ohm): ");
    scanf("%f", &resistencia);
    if (resistencia != 0) {
        corriente = voltaje / resistencia;
        printf ("Corriente: %f\n", corriente );
    } else {
        printf("La resistencia no puede ser cero crack. \n");
     }
    }

    void factor_potencia() {
        float potencia_activa, potencia_aparente, factor;
        printf("Ingrese la potencia activa (W): ");
        scanf("%f", &potencia_activa);
        printf("Ingrese la potencia aparente (VA): ");
        scanf("%f", &potencia_aparente);
        if (potencia_aparente != 0) {
            factor = potencia_activa / potencia_aparente;
            printf("Factor potencia : %.2f\n", factor);
        } else{
            printf("Error: La potencia no puede ser cero pa. \n"); 
        }
    }

    void resistencia_conductor() {
        float resistividad, longitud, area, resistencia;
        printf("Ingrese la resistividad del material (Ohm·m): ");
        scanf("%f", &resistividad);
        printf("Ingrese la longitud del conductor (m): ");
        scanf("%f", &longitud);
        printf("Ingrese el area de la seccion transversal (m^2): ");
        scanf("%f", &area);
        if (area != 0) {
            resistencia = (resistividad * longitud) / area;
            printf ("Resistencia del conductor: %.2f ohm\n", resistencia);
        } else { 
            printf("Area vacia\n.");
        }
    }

    void resistencia_led() {
        float voltaje_fuente, voltaje_led, corriente, resistencia;
        printf("Ingrese el voltaje de la fuente (V): ");
        scanf("%f", &voltaje_fuente);
        printf("Ingrese el voltaje del LED (V): ");
        scanf("%f", &voltaje_led);
        printf("Ingrese la corriente deseada (A): ");
        scanf("%f", &corriente);
        if (corriente != 0) {
            resistencia = (voltaje_fuente - voltaje_led) / corriente;
            printf("Resistencia recomendada: %.2f Ohm\n", resistencia);
        } else {
            printf("Error: La corriente no puede ser cero pa.\n");
        }
    }

    int main(void) {
        int opcion;
        do {
            printf("Calculadora de Ohm\n");
            printf("1. Ley de Ohm\n2. Cálculo del factor potencia\n3. Resistencia de un conductor\n4. Resistencia para LED\n5. Salir\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcion);
    
            switch (opcion) {
                case 1:
                    ley_de_ohm();
                    break;
                case 2:
                    factor_potencia();
                    break;
                case 3:
                    resistencia_conductor();
                    break;
                case 4:
                    resistencia_led();
                    break;
                case 5:
                    printf("Saliendo...\n");
                    break;
                default:
                    printf("Opción inválida. Intente de nuevo.\n");
            }
        } while (opcion != 5);
        
        return 0;
    }