#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"
int pedirEntero();
float sumar(float num1, float num2);
int main()
{
    float num1,num2,suma;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
               num1 = pedirEntero();
                break;
            case 2:
               num2 = pedirEntero();
                break;
            case 3:
                suma = sumar(num1,num2);
                printf("%f",suma);
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

}
    return 0;



}

int pedirEntero()
{
    float numero;
    printf("Ingrese un numero: ");
    scanf("%f", &numero);

    return numero;
}
float sumar(float n1, float n2)
{
    int resultado;
    resultado = n1 + n2;

    return resultado;
}
