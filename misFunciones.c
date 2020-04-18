#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "misFunciones.h"

void menu(int A, int B, int f1, int f2, int f3)
{

    system("cls");
    printf("\n     ษออออออออออออออออออออออออออออออออออออออออออออออออออป     ");
    printf("\n     บ                  CALCULADORA                     บ     ");
    printf("\n     ฬออออออออออออออออออออออออออออออออออออออออออออออออออน     ");
    printf("\n     บ    OPCION   บ               ACCION               บ     ");
    printf("\n     ฬออออออออออออออออออออออออออออออออออออออออออออออออออน     ");

    if(f1 == 1)
    {
        printf("\n     บ      1      บ   Ingresar 1er operando            บ  =  (A = %d)",A);
    }
    else
    {
        printf("\n     บ      1      บ   Ingresar 1er operando            บ  =  (A = x)");
    }

    printf("\n     ฬออออออออออออออออออออออออออออออออออออออออออออออออออน     ");

    if(f2 == 1)
    {
        printf("\n     บ      2      บ   Ingresar 2do operando            บ  =  (B = %d)",B);
    }
    else
    {
        printf("\n     บ      2      บ   Ingresar 2do operando            บ  =  (B = y)");
    }

    printf("\n     ฬออออออออออออออออออออออออออออออออออออออออออออออออออน     ");

    if(f3 == 1)
    {
        printf("\n     บ      3      บ   Calcular todas las operaciones   บ  =  REALIZADO");
    }
    else{
        printf("\n     บ      3      บ   Calcular todas las operaciones   บ  ");
    }

    printf("\n     ฬออออออออออออออออออออออออออออออออออออออออออออออออออน     ");
    printf("\n     บ      4      บ   Informar resultados              บ     ");
    printf("\n     ฬออออออออออออออออออออออออออออออออออออออออออออออออออน     ");
    printf("\n     บ      5      บ   Salir                            บ     ");
    printf("\n     ศออออออออออออออออออออออออออออออออออออออออออออออออออผ     ");

}

int calcularSuma(int A, int B)
{
    int suma;
    suma= A + B;
    return(suma);
}

int calcularResta(int A, int B)
{
    int resta;
    resta= A - B;
    return(resta);
}

int calcularMultiplicacion(int A, int B)
{
    int multiplicacion;
    multiplicacion= A * B;
    return(multiplicacion);
}

float calcularDivision(int A, int B)
{
    float n1= A;
    float n2= B;
    float division;

    division= n1 / n2;

    return(division);
}

float calcularFactorial(int num)//No es capaz de calcular del 16 para arriba por falta de bits.
{
        float fact = 1;
        for (int i=1; i<=num; i++)
        {
            fact = fact * i;
        }
        return(fact);
    }
