#include <stdio.h>
#include <stdlib.h>
/* +-------------+
   |             |
   |             |
   +-------------+ */

void imprimir_figura(int largo, int alto){
	int i, x, y, z = 1;
	while(z < 3){
		for(x = 1; x <= largo; x++){
			if(x == 1 || x == largo){
				printf("+");
			}
			else{
				printf("-");
			}
		}
		printf("\n");
		if(z == 1){
			while(i < alto - 2){
				for(y = 1; y <= largo; y++){
					if(y == 1 || y == largo){
						printf("/");
					}
					else{
						printf(" ");
					}
				}
				printf("\n");
				i = i + 1;
			}
		}	
		z = z + 1;
	}
}


int main(int numero_de_argumentos, char **valores){
	if(numero_de_argumentos > 2){
        //char caracter = valores[1][0];
        int largo = atoi(valores[1]), alto = atoi(valores[2]);
        imprimir_figura(largo, alto);
    }
    else{
        printf("Faltan argumentos");
    }
	return 0;
}
