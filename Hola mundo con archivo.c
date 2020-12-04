#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:/Users/DELL/Documents/Programación/test.txt", "w+");
	fprintf(fp, "Hola Mundo\n");
	fprintf(fp, "Si estas leyendo esto, tu programa funciono");
	fclose(fp);
	printf("Archivo guardado");
}
