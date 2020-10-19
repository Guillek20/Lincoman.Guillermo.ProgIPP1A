#include <stdio.h>
#include <stdlib.h>

int aplicarDescuento(int precio);

int main()
{
    int precio;
    printf("Ingrese el precio: ");
    scanf("%d", &precio);
    aplicarDescuento(precio);
    return 0;
}

int aplicarDescuento(int precio)
{
    float resultado;
    int descuento;
    descuento= 0.05* precio;
    resultado= (float) precio-descuento;
    printf("El precio con 5 de descuento es: %.2f", resultado);
    return 0;
}
