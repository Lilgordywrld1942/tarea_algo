#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    bool acierto=false;
    bool jugar=true;
    int numero_de_intentos=0;

    while (jugar && !acierto)   {
        int intento;
        scanf("%i", &intento);
        numero_de_intentos = numero_de_intentos + 1;
        if (intento==969){
            jugar=false;
            printf("ganaste ");
        
        }
        if(numero_de_intentos==3){
            printf("intente nuevamente, escriba si o no ");
            char respuesta[2];
            scanf("%s", respuesta);
            if(strcmp(respuesta, "no") == 0){
                jugar=false;}
            else{
                printf("reseteando juego ");
                numero_de_intentos = 0;}
        }
        } 
}
