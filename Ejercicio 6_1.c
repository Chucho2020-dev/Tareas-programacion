#include <stdio.h>
struct cuadrilatero{
	int base, altura;
};
int main(){
	struct cuadrilatero figura;
	figura.altura = 10;
	figura.base = 30;
	int i, x, y, z = 1;
	while(z < 3){
		for(x = 1; x <= figura.base; x++){
			if(x == 1 || x == figura.base){
				printf("+");
			}
			else{
				printf("-");
			}
		}
		printf("\n");
		if(z == 1){
			while(i < figura.altura - 2){
				for(y = 1; y <= figura.base; y++){
					if(y == 1 || y == figura.base){
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
	return 0;
}
