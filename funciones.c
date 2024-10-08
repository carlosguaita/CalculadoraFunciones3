#include <stdio.h>
#include "funciones.h"

void operaciones(int opcion, float x, float y){
    float result;
    switch (opcion)
    {
    case 1:
        result=suma(x,y);
        printf("La suma es: %f\n",result);
        break;
    case 2:
        result=resta(x,y);
        printf("La resta es: %f\n",result);
        break;
    case 3:
        result=multiplicacion(x,y);
        printf("La multiplicacion es: %f\n",result);
        break;
    case 4:
        result=division(x,y);
        printf("La division es: %f\n",result);
        break;
    default:
        break;
    }
}

float leerNumero(int n){
    float x;
    printf("Ingrese el numero %d: ",n);
    scanf("%f",&x);
    return x;
}

float suma(float n, float m){
    float s=n+m;
    return s;
}

float resta(float n, float m){
    float r=n-m;
    return r;
}

float multiplicacion(float n, float m){
    float r=n*m;
    return r;
}

float division(float n, float m){
    float r=0;
    if(m!=0){
        r=n/m;
    }else
    {
        printf("No se puede dividir para 0\n");
    }
    return r;
}
