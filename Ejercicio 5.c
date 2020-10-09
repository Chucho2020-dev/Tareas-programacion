#include <stdio.h>
int main(){
	int elementos_maximos, indice_y, indice_x, aux, aux_1;
	aux = 0;
	aux_1 = 0;
	/*printf("Ingrese el maximo de elementos: ");
	scanf("%d",&elementos_maximos);*/
	int matriz_1[elementos_maximos][elementos_maximos];
	int matriz_2[elementos_maximos][elementos_maximos];
	int matriz_suma[elementos_maximos][elementos_maximos];
	printf("La matriz 1 es: \n");
	for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
		for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
			matriz_1[indice_y][indice_x] = aux + 1;
			printf("%d, ",matriz_1[indice_y][indice_x]);
			aux = aux + 1;
		}
		//aux = aux + 1;
	}
	
	printf("\nLa matriz 2 es: \n");
	for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
		for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
			matriz_1[indice_y][indice_x] = aux + 2;
			printf("%d, ",matriz_1[indice_y][indice_x]);
			aux_1 = aux_1 + 1;
		}
		//aux_1 = aux_1 + 3;
	}
	printf("\nLa matriz suma es: \n");
	for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
		for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
			matriz_suma[indice_y][indice_x] = matriz_2[indice_y][indice_x] + matriz_1[indice_y][indice_x];
			printf("%d, ",matriz_suma[indice_y][indice_x]);
		}
	}
	return 0;
}
