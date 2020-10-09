#include <stdio.h>
/* +-------------+
   |             |
   |             |
   +-------------+ */

int main(){
	int i, x, y, z, base, altura;
	z = 1;
	base = 15;
	altura = 5;
	while(z < 3){
		for(x = 1; x <= base; x++){
			if(x == 1 || x == base){
				printf("+");
			}
			else{
				printf("-");
			}
		}
		printf("\n");
		if(z == 1){
			while(i < altura - 2){
				for(y = 1; y <= base; y++){
					if(y == 1 || y == base){
						printf("/");
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
