#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "misFunciones.h"

int main()
{
    int opcion;
    int A= NULL;
    int B= NULL;

    int flag1=0;
    int flag2=0;
    int flag3=0;

    int suma;
    int resta;
    int multiplicacion;
    float division;
    long int factorial1;
    long int factorial2;

    do
    {
        menu(A,B,flag1,flag2,flag3);

        printf("\n\n Elija una Opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {

        case 1 :
            system("cls");
            printf("Ingrese el 1er operando: ");
            scanf("%d", &A);
            flag1 = 1;
            break;

        case 2 :
            system("cls");
            printf("Ingrese el 2do operando: ");
            scanf("%d", &B);

            flag2 = 1;
            break;

        case 3 :
            if(flag1 == 0 || flag2 == 0)
            {
                system("cls");
                printf("ERROR!!!\nAntes de realizar las operaciones, debe ingresar el 1er y 2do operando.\n\n");
                system("pause");
            }
            else
            {
                suma = calcularSuma(A,B);
                resta = calcularResta(A,B);
                multiplicacion = calcularMultiplicacion(A,B);
                division = calcularDivision(A,B);
                factorial1 = calcularFactorial(A); //No es capaz de calcular del 16 para arriba por falta de bits.
                factorial2 = calcularFactorial(B); //No es capaz de calcular del 16 para arriba por falta de bits.
                flag3 = 1;
            }
            break;

        case 4 :
            if(flag1 == 0 || flag2 == 0 || flag3 == 0)
            {
                system("cls");
                printf("ERROR!!!\nAntes de Informar los resultados, coroborre que haya ingresado el 1er y 2do operando y haya realizado las operaciones.\n\n");
                system("pause");
            }
            else
            {
                system("cls");
                printf("\n     ษออออออออออออออออออออออออออออออออออออออออออออออออออป     ");
                printf("\n     บ                  RESULTADOS                      บ     ");
                printf("\n     ศออออออออออออออออออออออออออออออออออออออออออออออออออผ     ");
                printf("\n      El resultado de %d + %d es: %d",A, B, suma);
                printf("\n      El resultado de %d - %d es: %d",A, B, resta);

                if(B == 0)
                {
                    printf("\n      La division no se pudo realizar porq no se puede dividir por 0");
                }
                else
                {
                    printf("\n      El resultado de %d / %d es: %.2f",A, B, division);
                }

                printf("\n      El resultado de %d * %d es: %d",A, B, multiplicacion);


                if(A < 1)
                {
                    printf("\n      El Factorial de %d no se pudo realizar, porq es menor a 1 ",A);
                }
                else
                {
                    printf("\n      El factorial de %d es: %ld ",A, factorial1);
                }

                if(B < 1)
                {
                    printf("y El Factorial de %d no se pudo realizar, porq es menor a 1 \n\n",B);
                }
                else
                {
                    printf("y El factorial de %d es: %ld \n\n",B, factorial2);
                }

                system("pause");
            }

            break;

        case 5 :
            ;
            break;

        default:
            system("cls");
            printf("ERROR!!! Las unicas opciones validas son del 1 al 5. \n\n");
            system("pause");
            break;
        }

    }
    while(opcion != 5);


    return 0;

}

