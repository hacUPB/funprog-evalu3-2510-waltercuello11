#include <stdio.h>
#include <math.h>
void calcular_ley _de_ohm();
void calcular_factor_potencia();
void calcular_resitencia_conductor();
void calcular_resistencia_led();

int main() {
    int opcion;
    do {
        printf("\nbienvenido a la calculadora ingeniera\n");
        printf("por favor,seleccionarunaq opcion:\n");
        printf("1.calcular ley de ohm\n");
        printf("2.calcular factor de potencia\n");
        printf("3.calcular resistencia de un conductor\n");
        printf("4.calcular valor de una resistencia para un LED\n");
        printf"5.salir\n");
        printf("ingresar el numero de la opcion deseada:");
        scanf("")

        switch (opcion) {
            case 1:
                calcular_ley_de_ohm();
                break;
            case 2:
                calcular_factor_potencia();
                break;
            case 3:
                calcular_resistencia_conductor();
                break;
            case 4:
                calcular_resistencia_led();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida, intenta de nuevo.\n");
        }
    } while (opcion != 5);
    return 0;
}

void calcular_ley_de_ohm() {
    int opcion;
    float V, I, R;
    printf("\nHas seleccionado calcular la Ley de Ohm.\n");
    printf("1. Calcular Tension (Voltaje)\n");
    printf("2. Calcular Corriente\n");
    printf("3. Calcular Resistencia\n");
    printf("4. Volver al menu principal\n");
    printf("Ingresa el numero de la opcion deseada: ");
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1:
            printf("Ingresa la corriente (I) en amperios: ");
            scanf("%f", &I);
            printf("Ingresa la resistencia (R) en ohmios: ");
            scanf("%f", &R);
            V = I * R;
            printf("Tension = %.2f V\n", V);
            break;
            case 2:
            printf("Ingresa el voltaje (V) en voltios: ");
            scanf("%f", &V);
            printf("Ingresa la resistencia (R) en ohmios: ");
            scanf("%f", &R);
            I = V / R;
            printf("Corriente = %.2f A\n", I);
            break;
        case 3:
            printf("Ingresa el voltaje (V) en voltios: ");
            scanf("%f", &V);
            printf("Ingresa la corriente (I) en amperios: ");
            scanf("%f", &I);
            R = V / I;
            printf("Resistencia = %.2f Ohmios\n", R);
            break;
        case 4:
            return;
        default
        printf("Opcion no valida.\n");
    }
}

void calcular_factor_potencia() {
    float P, S, FP;
    printf("\nHas seleccionado calcular el Factor de Potencia.\n");
    printf("Ingresa la potencia activa (P) en watts: ");
    scanf("%f", &P);
    printf("Ingresa la potencia aparente (S) en volt-amperios: ");
    scanf("%f", &S);
    
    FP = P / S;
    printf("Factor de Potencia = %.2f\n", FP);
    printf("Cos(phi) = %.2f\n", FP);
    printf("Potencia Reactiva (Q) = %.2f VAR\n", sqrt(S*S - P*P));
}

void calcular_resistencia_conductor() {
    float resistividad, longitud, area, resistencia;
    printf("\nHas seleccionado calcular la Resistencia de un Conductor.\n");
    printf("Ingresa la resistividad del material (ohm*m): ");
    scanf("%f", &resistividad);
    printf("Ingresa la longitud del conductor (m): ");
    scanf("%f", &longitud);
    printf("Ingresa el area de la seccion transversal (m^2): ");
    scanf("%f", &area);
    
    resistencia = (resistividad * longitud) / area;
    printf("Resistencia del conductor = %.5f Ohmios\n", resistencia);
}

void calcular_resistencia_led() {
    float V_fuente, V_led, I_led, R_led, P_led, P_total, I_total;
    int num_leds, tipo_conexion;
    printf("\nHas seleccionado calcular la Resistencia para un LED.\n");
    printf("Ingresa la tension de la fuente (V): ");
    scanf("%f", &V_fuente);
    printf("Ingresa la tension nominal del LED (V_f): ");
    scanf("%f", &V_led);
    printf("Ingresa la corriente nominal del LED (I_f) en amperios: ");
    scanf("%f", &I_led);
    printf("Ingresa el numero de LEDs: ");
    scanf("%d", &num_leds);
    printf("Tipo de conexion: 1. Serie 2. Paralelo: ");
    scanf("%d", &tipo_conexion);
    
    if (tipo_conexion == 1) { 
        R_led = (V_fuente - (num_leds * V_led)) / I_led;
        I_total = I_led;
    } else { 
        R_led = (V_fuente - V_led) / (num_leds * I_led);
        I_total = num_leds * I_led;
    }
    P_led = V_led * I_led;
    P_total = V_fuente * I_total;
    
    printf("Resistencia del LED = %.2f Ohmios\n", R_led);
    printf("Potencia de la resistencia = %.2f W\n", P_led);
    printf("Potencia total del circuito = %.2f W\n", P_total);
    printf("Corriente total suministrada = %.2f A\n", I_total);
}


