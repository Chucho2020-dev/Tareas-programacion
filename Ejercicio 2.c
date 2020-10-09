#include <stdio.h>
// caso digito
int main(){
	char caracter;
	printf("Ingrese el caracter que quiera analizar:\n");
	scanf("%c",&caracter);
	int valor_ascii = (int) caracter;
	printf("El valor ascii es %d\n",valor_ascii);
	if(valor_ascii >= 48 && valor_ascii <= 57){
		printf("El valor %c es digito\n",caracter);
	}
	else{
		if(valor_ascii >= 65 && valor_ascii <= 90){
			printf("El valor %c es mayuscula\n",caracter);
		}
	else{
		if(valor_ascii >= 97 && valor_ascii <= 122){
			printf("El valor %c es minuscula\n",caracter);
		}
		else{
			printf("El valor %c es un caracter especial\n",caracter);
		}
	}
	
	}
	return 0;
}
