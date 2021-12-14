#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

int get_token(char *buffer){
    char c;
    int indice = 0;
    
    c = getchar();
    while(isspace(c))
    {
        c = getchar();    
    }
    if( c== ','){
        return SEP;
    } else if(c == EOF){
        return FDT;
    } else{ 
        while (c != ',' && !isspace(c) && c != EOF){
        buffer[indice++] = c;
        c = getchar();
        buffer[indice] = '\0';
    }
        ungetc(c, stdin);
        return CAD;  
    }

}

    


