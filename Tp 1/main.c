#include <stdio.h>
#include <ctype.h>
#include "scanner.h"



int main(void)
{
    char buffer[130];
    char token;
    token = get_token(buffer);
    while(token != FDT){
        if (token == SEP){
            printf("Separador: %s\n", ",");
        }else if (token == CAD){
            printf("Cadena: %s\n", buffer);
        }
        token = get_token(buffer);
    }
        printf("Fin de texto: \n");

}
