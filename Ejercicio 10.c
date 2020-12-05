#include <stdio.h>
#include <stdlib.h>

int factorial(int numero){
	if(numero == 1){
		return 1;
	}
	else{
		return numero * factorial(numero-1);
	}
}

int main(int numero_de_argumentos, char **valores){
	int numero_a_calcular = 10;
	if(numero_de_argumentos <= 0){
    	printf("Faltan argumentos");
    }
    if(numero_de_argumentos > 0){
        numero_a_calcular = atoi(valores[1]);
    }
	printf("El factorial de %d es %d", numero_a_calcular, factorial(numero_a_calcular));
	return 0;
}
