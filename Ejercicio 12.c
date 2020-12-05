#include <stdio.h>
#include <string.h>

int z = 4;

struct evaluacion{
	char matricula[15];
	int primer_parcial;
	int segundo_parcial;
	int pia;
	float final;
};

int calcular_matricula(struct evaluacion e[z]){
	int matricu[z], i, j;
	for(i = 0; i < z; i++){
		matricu[i] = 2034230 + i;	
	}
	for(j = 0; j < z; j++){
		sprintf(e[j].matricula, "%d", matricu[j]);
	}
	return e[z].matricula;
}

int capturar_calificaciones(struct evaluacion e[z]){
	int i;
	printf("ingrese las calificaciones del alumno:\n");
	for(i = 0; i < z; i++){
		printf("%s:", e[i].matricula);
		printf("\nPrimer parcial: ");
		scanf("%d",&e[i].primer_parcial);
		printf("\nSegundo parcial: ");
		scanf("%d",&e[i].segundo_parcial);
		printf("\nPIA: ");
		scanf("%d",&e[i].pia);
		
	}
	return e[z].primer_parcial, e[z].segundo_parcial, e[z].pia;
}

float calcular_calificacion_final(struct evaluacion e[z]){
	int i;
	for(i = 0; i < z; i++){
		e[i].final = (e[i].primer_parcial + e[i].segundo_parcial + e[i].pia) / (float)3;
	}
	return e[z].final;
}

void imprimir_datos(struct evaluacion e[z], FILE *fp){
	int i;
	fprintf(fp, "Matricula, PrimerParcial, SegundoParcial, PIA, Final\n");
	for(i = 0; i < z; i++){
		fprintf(fp, "%s, %d, %d, %d, %.2f \n", e[i].matricula, e[i].primer_parcial, e[i].segundo_parcial, e[i].pia, e[i].final);
	}
	printf("\nArchivo guardado");
}

int main(){
	FILE *fp;
	fp = fopen("C:/Users/DELL/Documents/Programación/resultados.csv", "w+");
	struct evaluacion evaluaciones[z];
	calcular_matricula(evaluaciones);
	capturar_calificaciones(evaluaciones);
	calcular_calificacion_final(evaluaciones);
	imprimir_datos(evaluaciones, fp);	
	close(fp);
	return 0;
}
