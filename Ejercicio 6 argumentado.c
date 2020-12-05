#include <stdio.h>
#include <stdlib.h>

struct cuadrilatero{
	int base, altura;
};

void imprimir_cuadrilatero(struct cuadrilatero f){
	int i, x, y, z = 1;
	while(z < 3){
		for(x = 1; x <= f.base; x++){
			if(x == 1 || x == f.base){
				printf("+");
			}
			else{
				printf("-");
			}
		}
		printf("\n");
		if(z == 1){
			while(i < f.altura - 2){
				for(y = 1; y <= f.base; y++){
					if(y == 1 || y == f.base){
						printf("|");
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
	struct cuadrilatero figura;
	if(numero_de_argumentos > 1){
		figura.altura = atoi(valores[1]);
		figura.base = atoi(valores[2]);
		imprimir_cuadrilatero(figura);
	}
	else{
		printf("faltan argumentos");
	}
	return 0;
}
