#include <stdio.h>
#include <stdlib.h>
#include "funciones.cpp"

int main()
{
    char seguir = 's';
    int opcion = 0;
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    unsigned long factorialUno;
    unsigned long factorialDos;
    int flagNUno = 0;
    int flagNDos = 0;
    int flagCalculo = 0;

    while(seguir=='s')
    {
        if (flagNUno == 1 && flagNDos == 1)
        {
            printf("\n1) Ingresar 1er operando (entero). (A = %d)\n", numeroUno);
            printf("2) Ingresar 2do operando (entero). (B = %d)\n", numeroDos);

        }
        else
        {
            if (flagNUno == 0 && flagNDos == 1)
            {
                printf("\n1) Ingresar 1er operando (entero). (A = x)\n");
                printf("2) Ingresar 2do operando (entero). (B = %d)\n", numeroDos);
            }
            else
            {
                if (flagNUno == 1 && flagNDos == 0)
                {
                    printf("\n1) Ingresar 1er operando (entero). (A = %d)\n", numeroUno);
                    printf("2) Ingresar 2do operando (entero). (B = y)\n");
                }
                else
                {
                    printf("\n1) Ingresar 1er operando (entero). (A = x)\n");
                    printf("2) Ingresar 2do operando (entero). (B = y)\n");
                }
            }
        }
        printf("3) Calcular todas las operaciones. \n");
        printf("4) Informar resultados.\n");
        printf("5) Salir.\n");

        while (scanf("%d", &opcion) != 1 || opcion < 1 || opcion > 5)
        {
            printf("Error, numero incorrecto, ingrese nuevamente: ");
            fflush(stdin);
        }
        switch(opcion)
        {
            case 1:
                numeroUno = pedirNumero();
                flagNUno = 1;
                flagCalculo = 0;
                break;
            case 2:
                numeroDos = pedirNumero();
                flagNDos = 1;
                flagCalculo = 0;
                break;
            case 3:
                suma = sumar(numeroUno, numeroDos);
                resta = restar(numeroUno, numeroDos);
                multiplicacion = multiplicar(numeroUno, numeroDos);
                division = dividir(numeroUno, numeroDos);
                factorialUno = factorizar(numeroUno);
                factorialDos = factorizar(numeroDos);
                flagCalculo = 1;
                break;
            case 4:
                if (flagCalculo == 1)
                {
                    mostrarTodas(numeroUno, numeroDos, suma, resta, multiplicacion, division, factorialUno, factorialDos);
                }
                else
                {
                    printf("Error, realizar los calculos previamente.");
                }
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
