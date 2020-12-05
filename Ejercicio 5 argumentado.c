#include <stdlib.h>
#include <stdio.h>

void imprimir_matrices(int elemento_maximo){
	int indice_y, indice_x, aux = 0, aux_1 = 0;
	int matriz_1[elemento_maximo][elemento_maximo];
	int matriz_2[elemento_maximo][elemento_maximo];
	int matriz_suma[elemento_maximo][elemento_maximo];
	
	printf("La matriz 1 es: \n");
	for(indice_y = 0; indice_y < elemento_maximo; indice_y++){
		for(indice_x = 0; indice_x < elemento_maximo; indice_x++){
			matriz_1[indice_y][indice_x] = aux + 1;
			printf("%d, ",matriz_1[indice_y][indice_x]);
			aux = aux + 1;
		}
		printf("\n");
	}
	
	printf("\nLa matriz 2 es: \n");
	for(indice_y = 0; indice_y < elemento_maximo; indice_y++){
		for(indice_x = 0; indice_x < elemento_maximo; indice_x++){
			matriz_2[indice_y][indice_x] = aux_1 + 1;
			printf("%d, ",matriz_2[indice_y][indice_x]);
			aux_1 = aux_1 + 2;
		}
		printf("\n");
	}
	
	printf("\nLa matriz suma es: \n");
	for(indice_y = 0; indice_y < elemento_maximo; indice_y++){
		for(indice_x = 0; indice_x < elemento_maximo; indice_x++){
			matriz_suma[indice_y][indice_x] = matriz_2[indice_y][indice_x] + matriz_1[indice_y][indice_x];
			printf("%d, ",matriz_suma[indice_y][indice_x]);
		}
		printf("\n");
	}
}

int main(int numero_de_argumentos, char **valores){
	int elementos_maximos = atoi(valores[1]);
	 if(numero_de_argumentos > 0){
		imprimir_matrices(elementos_maximos);
    }
    else{
        printf("Faltan argumentos");
    }
	return 0;
}
