#include <stdio.h>
#include <string.h>	

int main(){
	FILE *fp;
	char matricula_str[255], primer_parcial_str[255], segundo_parcial_str[255], pia_str[255], final_str[255];
	fp = fopen("C:/Users/DELL/Documents/Programación/resultados.csv", "r+");
	int i;
	fscanf(fp, "%s %s %s %s %s\n", matricula_str, primer_parcial_str, segundo_parcial_str, pia_str, final_str);
	for(i = 0; i < 4; i++){
		fscanf(fp, "%s %s %s %s %s\n", matricula_str, primer_parcial_str, segundo_parcial_str, pia_str, final_str);
		printf("Los valores de la linea %d son: %s %s %s %s %s\n", i, matricula_str, primer_parcial_str, segundo_parcial_str, pia_str, final_str);	
	}
	fclose(fp);
	return 0;
}
