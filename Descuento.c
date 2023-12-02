 /*Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto deberá pagar finalmente por su compra.*/
 
 #include <stdio.h>

 int main() 
 {
    float precio, Preciofinal;
    scanf("%f", &precio);
    Preciofinal= precio*0.85;
    printf("Valor final de la compra es % .2f", Preciofinal);
 }
