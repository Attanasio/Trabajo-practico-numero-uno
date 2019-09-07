#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "../Funciones/Funciones.h"


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
        system("cls");//Limpio la pantalla cada vez que se reinicia el rpograma.

        printf("Ingrese un primer valor: ");//Pido un primer valor.
        scanf("%d",&numeroA);//guardo el primer valor.
        fflush(stdin);//Limpio el buffer(memoria intermedia).

        while (numeroA < 0)//Valido que el primer numero ingresado no sea negativo.
            {
                printf("Error. Reingrese un primer valor mayor a 0: ");//Vuelvo a pedir el primer numero.
                scanf("%d",&numeroA);//Vuelvo a guardar el primer numero.
            }

        printf("Ingrese un segundo valor: ");//Pido un segundo valor.
        scanf("%d",&numeroB);//Guardo un segundo valor.
        fflush(stdin);//Limpio el buffer(memoria intermedia).

        while (numeroB < 0)//Valido que el segundo numero ingresado no sea negativo.
            {
                printf("Error. Reingrese un segundo valor mayor a 0: ");//Vuelvo a pedir el segundo numero.
                scanf("%d",&numeroB);//Vuelvo a guardar el segundo numero.
            }

        printf("\n<<<<---MENU DE OPCIONES--->>>> \n\n");//Es el menu de opciones.
        printf("        A) SUMAR\n");
        printf("        B) RESTAR\n");
        printf("        C) MULTIPLICAR\n");
        printf("        D) DIVIDIR\n");
        printf("        E) FACTORIAL\n\n");

        fflush(stdin);//Limpio el buffer(memoria intermedia).

        opcion = getch();//Recivo la respuesta ingresada en el menu de opciones.

        switch(opcion)
            {
                case 'a'://Si el usuario ingresa la opcion "a" se ejecuta lo siguiente.
                    suma=funcionSuma(numeroA,numeroB);//Llama a la funcion "funcionSuma" y la guarda en la variable "suma".
                    printf("El resultado de la suma es: %d\n",suma);//Muestra el resultado de la suma.
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: \n");//Al final del programa le da al usuario la opcion de continuar o de salir.
                    salir=getch();//Guarda la respuesta del usuario en la variable "salir".
                    break;
                case 'b'://Si el usuario ingresa la opcion "b" se ejecuta lo siguiente.
                    resta=funcionResta(numeroA,numeroB);//Llama a la funcion "funcionResta" y la guarda en la variable "resta".
                    printf("El resultado de la resta es: %d\n",resta);//Muestra el resultado de la resta.
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");//Al final del programa le da al usuario la opcion de continuar o de salir.
                    salir=getch();//Guarda la respuesta del usuario en la variable "salir".
                    break;
                case 'c'://Si el usuario ingresa la opcion "c" se ejecuta lo siguiente.
                    multiplicacion=funcionMultiplicacion(numeroA,numeroB);//Llama a la funcion "funcionMultiplicacion" y la guarda en la variable "multiplicacion".
                    printf("El resultado de la multilicasion es: %d\n",multiplicacion);//Muestra el resultado de la multiplicacion.
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");//Al final del programa le da al usuario la opcion de continuar o de salir.
                    salir=getch();
                    break;
                case 'd'://Si el usuario ingresa la opcion "d" se ejecuta lo siguiente.
                    while (numeroA <= 0 || numeroB <= 0)//Validacion del numero ingresado.
                        {
                            printf("Error. No se puede dividir por 0.");//Se le informa al usuario el error del primer numero.
                            printf("Reingrese un primer valor: ");//Se le vuelve a pedir al usuario que ingrese el primer numero.
                            scanf("%d",&numeroA);//se guarda el dato que ingreso el usuario.
                            fflush(stdin);//Limpio el buffer(memoria intermedia).
                            printf("Reingrese un segundo valor: ");//Se le vuelve a pedir al usuario que ingrese el segundo numero.
                            scanf("%d",&numeroB);//se guarda el dato que ingreso el usuario.
                            fflush(stdin);//Limpio el buffer(memoria intermedia).
                            break;
                        }
                    division=funcionDivision(numeroA,numeroB);//Llama a la funcion "funcionDivicion" y la guarda en la variable "divicion".
                    printf("El resultado de la division es: %d\n",division);//Muestra el resultado de la division.
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");//Al final del programa le da al usuario la opcion de continuar o de salir.
                    salir=getch();//Guarda la respuesta del usuario en la variable "salir".
                    break;
                case 'e'://Si el usuario ingresa la opcion "e" se ejecuta lo siguiente.
                    factorialA=funcionFactorial(numeroA);//Llama a la funcion "funcionFactorial" y la guarda en la variable "factorialA".
                    printf("\nEl factorial de %d es %d \n",numeroA,factorialA);//Muestra el primer numero ingresado del usario y el resultado del factoreo de ese numero.
                    factorialB=funcionFactorial(numeroB);//Llama a la funcion "funcionFactorial" y la guarda en la variable "factorialB".
                    printf("\nEl factorial de %d es %d \n",numeroB,factorialB);//Muestra el segundo numero ingresado del usario y el resultado del factoreo de ese numero.
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");//Al final del programa le da al usuario la opcion de continuar o de salir.
                    salir=getch();//Guarda la respuesta del usuario en la variable "salir".
                    break;

                default:
                    printf("Opcion invalida\n\n");//Se le informa al usuario en el caso de que no haya seleccionado ninguna de las opciones del menu de opciones.
                    printf("Si desea salir digite S, para continuar presione cualquier otra tecla: ");//Al final del programa le da al usuario la opcion de continuar o de salir.
                    salir=getch();//Guarda la respuesta del usuario en la variable "salir".
                    break;
            }

    }

    while (!(salir=='s'||salir=='S'));//Si el usuario ingresa "s" en mayuscula o minuscula se termina el programa.

    return 0;//se devuelve el entero que se declaro en el main.
}
