#include <stdio.h>

void saludar() {
    printf("Hola, bienvenido al programa de funciones matematicas.\n");
}
// Funcion que suma dos numeros enteros
int sumar(int a, int b) {
    return a + b;
}

// Funcion que resta dos numeros enteros
int restar(int a, int b) {
    return a - b;
}

// Funcion que multiplica dos numeros enteros
int multiplicar(int a, int b) {
    return a * b;
}

// Funcion que divide dos numeros decimales
float dividir(float a, float b) {
    if (b == 0) {
        printf("Error: no se puede dividir por cero.\n");
        return 0;
    }

    return a / b;
}

// Funcion que calcula el cuadrado de un numero
int calcularCuadrado(int numero) {
    return numero * numero;
}



int main() {
    int num1 = 10;
    int num2 = 5;

    float nota1 = 6.0;
    float nota2 = 5.5;
    float nota3 = 7.0;

    saludar();

    printf("\n--- Operaciones basicas ---\n");
    printf("Suma: %d + %d = %d\n", num1, num2, sumar(num1, num2));
    printf("Resta: %d - %d = %d\n", num1, num2, restar(num1, num2));
    printf("Multiplicacion: %d * %d = %d\n", num1, num2, multiplicar(num1, num2));
    printf("Division: %d / %d = %.2f\n", num1, num2, dividir(num1, num2));

    printf("\n--- Otras funciones ---\n");
    printf("El cuadrado de %d es: %d\n", num1, calcularCuadrado(num1));

    return 0;
}