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

int funcionFactorial (int numero)
{
	int factorial = numero;
	int factor = 1;

	if( numero == 1)
	return 1;

	for(factorial = numero; factorial > 0; factorial--)
        {
        factor = factor * factorial;
        }

	return (factor);

}
