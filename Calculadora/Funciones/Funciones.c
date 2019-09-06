#include <stdio.h>
#include <stdlib.h>

int funcionSuma (int numeroA, int numeroB)
{

    int suma;

    suma = numeroA+numeroB;
}

int funcionResta (int numeroA, int numeroB)
{

    int resta;

    resta = numeroA-numeroB;
}

int funcionDivision (int numeroA, int numeroB)
{

    int division;

    division = numeroA/numeroB;
}

int funcionMultiplicacion (int numeroA, int numeroB)
{

    int multiplicacion;

    multiplicacion = numeroA*numeroB;
}

int funcionFactorial (int numeroA, int numeroB)
{

    int factorialA = 1;
    int multiplicadorA = 1;
    int factorialB = 1;
    int multiplicadorB = 1;

    for(factorialA = 1;numeroA >= factorialA;factorialA++)
        {
            multiplicadorA = multiplicadorA*factorialA;
        }

    for(factorialB = 1;numeroB >= factorialB;factorialB++)
        {
            multiplicadorB = multiplicadorB*factorialB;
        }

    numeroA = multiplicadorA;
    numeroB = multiplicadorB;

}
