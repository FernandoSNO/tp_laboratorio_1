#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "misFunciones.h"

void menu(int A, int B, int f1, int f2, int f3)
{

    system("cls");
    printf("\n     ��������������������������������������������������ͻ     ");
    printf("\n     �                  CALCULADORA                     �     ");
    printf("\n     ��������������������������������������������������͹     ");
    printf("\n     �    OPCION   �               ACCION               �     ");
    printf("\n     ��������������������������������������������������͹     ");

    if(f1 == 1)
    {
        printf("\n     �      1      �   Ingresar 1er operando            �  =  (A = %d)",A);
    }
    else
    {
        printf("\n     �      1      �   Ingresar 1er operando            �  =  (A = x)");
    }

    printf("\n     ��������������������������������������������������͹     ");

    if(f2 == 1)
    {
        printf("\n     �      2      �   Ingresar 2do operando            �  =  (B = %d)",B);
    }
    else
    {
        printf("\n     �      2      �   Ingresar 2do operando            �  =  (B = y)");
    }

    printf("\n     ��������������������������������������������������͹     ");

    if(f3 == 1)
    {
        printf("\n     �      3      �   Calcular todas las operaciones   �  =  REALIZADO");
    }
    else{
        printf("\n     �      3      �   Calcular todas las operaciones   �  ");
    }

    printf("\n     ��������������������������������������������������͹     ");
    printf("\n     �      4      �   Informar resultados              �     ");
    printf("\n     ��������������������������������������������������͹     ");
    printf("\n     �      5      �   Salir                            �     ");
    printf("\n     ��������������������������������������������������ͼ     ");

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
