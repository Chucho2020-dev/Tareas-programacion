#include <stdio.h>

int main(int numero_argumentos, char **valores_argumentos){
	int i;
	printf("hola a\n");
	for(i = 1; i < numero_argumentos; i++){
		printf("%s\n", valores_argumentos);
	}
	return 0;
}
