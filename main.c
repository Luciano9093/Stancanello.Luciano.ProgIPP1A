#include <stdio.h>
#include <stdlib.h>


//1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.
//STANCANELLO LUCIANO 1A

float aplicarDescuento(float product);

int main()
{
    setbuf(stdout,NULL);
    float producto;
    float descuento;

    producto=1000;
    descuento=aplicarDescuento(producto);

    printf("El descuento es de %.2f", descuento);
}

float aplicarDescuento(float producto)
{
    float resultado;
    float porcentaje=0.05;

    resultado=producto-(producto*porcentaje);

    return resultado;
}

