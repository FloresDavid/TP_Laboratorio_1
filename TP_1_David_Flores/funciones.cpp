#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int pedirNumero (void)//Pide un numero y lo devuelve.
{
    int numero;
    printf("\nIngrese un numero: ");
    while (scanf("%d", &numero) != 1)
    {
        printf("Error, numero incorrecto, ingrese nuevamente: ");
        fflush(stdin);
    }
    return numero;
}
int sumar (int numeroUno, int numeroDos) //Devuelve la suma de los dos numeros ingresados.
{
    int suma;
    suma = numeroUno + numeroDos;
    return suma;
}
int restar (int numeroUno, int numeroDos) //Devuelve la resta del primer numero menos el segundo..
{
    int resta;
    resta = numeroUno - numeroDos;
    return resta;
}
int multiplicar (int numeroUno, int numeroDos)//Devuelve la multiplicacion de los dos numeros ingresados.
{
    int multiplicacion;
    multiplicacion = numeroUno * numeroDos;
    return multiplicacion;
}
float dividir (int numeroUno, int numeroDos)//Devuelve la divicion del primero numero por el segundo, solo si el segundo numero es distinto a 0.
{
    float division;
    if (numeroDos != 0)
    {
        division = (float) numeroUno / numeroDos;
    }
    return division;
}

unsigned long factorizar (int numero)//Devuelve la factorizacion del primero numero.
{
    int factorial = 1;
    if((numero <= 33 && numero >= 0))
    {
        for (int i = numero; i > 0; i--)
        {
            factorial = factorial * i;
        }
    }
    return factorial;
}

void mostrarTodas(int numeroUno, int numeroDos, int suma, int resta, int multiplicacion, float division, unsigned long factorialUno, unsigned long factorialDos) //Ejecuta todas las operaciones y las muestra.
{
    printf ("\nLa suma es: %d.\n", suma);
    printf ("\nLa resta es: %d.\n", resta);
    if (numeroDos != 0)
    {
        printf ("\nLa division es: %.2f.\n", division);
    }
    else
    {
        printf ("\nError, no se puede dividir por 0.\n");
    }
    printf ("\nLa multiplicacion es: %d.\n", multiplicacion);
    if((numeroUno <= 33 && numeroUno >= 0))
    {
        printf("\nEl factorial del primer numero es: %lu.\n", factorialUno);
    }
    else
    {
        printf("\nError, No se puede calcular el factorial del numero, es negativo o mayor a 33\n(el tipo de dato solo soporta hasta el numero 33 incluido).\n");
    }
    if((numeroDos <= 33 && numeroDos >= 0))
    {
        printf("\nEl factorial del segundo numero es: %lu.\n", factorialDos);
    }
    else
    {
        printf("\nError, No se puede calcular el factorial del numero, es negativo o mayor a 33\n(el tipo de dato solo soporta hasta el numero 33 incluido).\n");
    }
}
