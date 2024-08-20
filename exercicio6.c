#include <stdio.h>

int main () {
	
	float custo_fabrica, distribuidor, impostos, final;
	
	printf("Digite o custo de fabrica:");
	scanf("%f", &custo_fabrica);
	
	distribuidor = custo_fabrica * 28 / 100;
	impostos = custo_fabrica * 45 / 100; 
	
	final = custo_fabrica + distribuidor + (float) impostos;
	
	printf("O custo final e: %.2f\n", final);
	
	return 0;
}
