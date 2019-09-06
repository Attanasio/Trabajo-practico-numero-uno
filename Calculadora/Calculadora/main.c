#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    char salir;

    int numeroA;
    int numeroB;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int factorialA;
    int factorialB;

    do
    {
        system("cls");

        printf("Ingrese un primer valor: ");
        scanf("%d",&numeroA);
        fflush(stdin);

        /*while (numeroA < 0  )
            {
                printf("Error. Reingrese un primer valor: ");
                scanf("%d",&numeroA);
            }*/

        printf("Ingrese un segundo valor: ");
        scanf("%d",&numeroB);
        fflush(stdin);

        /*while (numeroB < 0 || numeroB )
            {
                printf("Error. Reingrese un segundo valor: ");
                scanf("%d",&numeroB);
            }*/

        printf("<<<<---MENU DE OPCIONES--->>>> \n");
        printf("         a- Sumar\n");
        printf("        b- Restar\n");
        printf("      c- Multiplicar\n");
        printf("      d- Factorial\n");
        printf("       e- Dividir\n");

        fflush(stdin);

        opcion = getch();

        switch(opcion)
            {
                case 'a':
                    suma=funcionSuma(numeroA,numeroB);
                    printf("El resultado de la suma es: %d\n",suma);
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: \n");
                    salir=getch();
                    break;
                case 'b':
                    resta=funcionResta(numeroA,numeroB);
                    printf("El resultado de la resta es: %d\n",resta);
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");
                    salir=getch();
                    break;
                case 'c':
                    multiplicacion=funcionMultiplicacion(numeroA,numeroB);
                    printf("El resultado de la multilicasion es: %d\n",multiplicacion);
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");
                    salir=getch();
                    break;
                case 'e':
                    while (numeroA <= 0 || numeroB <= 0)//Validacion del numero ingresado.
                        {
                            printf("Error. No se puede dividir por 0.");
                            printf("Reingrese un primer valor: ");
                            scanf("%d",&numeroA);
                            fflush(stdin);
                            printf("Reingrese un segundo valor: ");
                            scanf("%d",&numeroB);
                            fflush(stdin);
                            break;
                        }
                    division=funcionDivision(numeroA,numeroB);
                    printf("El resultado de la division es: %d\n",division);
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");
                    salir=getch();
                    break;
                case 'd':
                    factorialA=funcionFactorial(numeroA);
                    factorialB=funcionFactorial(numeroB);
                    printf("El factorial de ese numero es: %d\n",factorialA);
                    printf("El factorial de ese numero es: %d\n",factorialB);
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");
                    salir=getch();
                    break;

                default:
                    printf("Opcion invalida\n\n");
                    system("pause");
                    break;
            }

    }

    while (!(salir=='s'||salir=='S'));
}
