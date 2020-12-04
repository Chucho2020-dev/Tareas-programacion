#include <stdio.h>

int calcular_ascii(char caracter){
	return (int) caracter;
}

int main(int numero_argumentos, char **valores){
	char caracter = valores[1][0];;
	printf("El valor ascii es %d\n",calcular_ascii(caracter));
	if(calcular_ascii(caracter) >= 48 && calcular_ascii(caracter) <= 57){
		printf("El valor %c es digito\n",caracter);
	}
	else{
		if(calcular_ascii(caracter) >= 65 && calcular_ascii(caracter) <= 90){
			printf("El valor %c es mayuscula\n",caracter);
		}
	else{
		if(calcular_ascii(caracter) >= 97 && calcular_ascii(caracter) <= 122){
			printf("El valor %c es minuscula\n",caracter);
		}
		else{
			printf("El valor %c es un caracter especial\n",caracter);
		}
	}
	
	}
	return 0;
}
