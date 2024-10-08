#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float num1,num2;
    int opc1=0,opc2=0;
    do{
    num1=leerNumero(1);
    num2=leerNumero(2);
    printf("Seleccione una operacion:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n>>");
    scanf("%d",&opc1);
    operaciones(opc1,num1,num2);
    printf("Desea seleccionar otra operacion:\n1.Si\n2.No\n>>");
    scanf("%d",&opc2);
    }while(opc2==1);
    return 0;
}

