#include <stdio.h>

int main() {
	int votosbrancos, votosnulos, votosvalidos, votostotal;
	float votobranco, votonulo, votovalido;
	
	printf("Digite o total de votos obtidos:");
	scanf("%d", &votostotal);
	
	printf("Digite os votos brancos obtidos:");
	scanf("%d", &votosbrancos);
	
	printf("Digite os votos nulos obtidos:");
	scanf("%d", &votosnulos);
	
	printf("Digite os votos validos obtidos:");
	scanf("%d", &votosvalidos);
	
	votobranco = votosbrancos / (float) votostotal * 100;
	votonulo = votosnulos / (float) votostotal * 100;
	votovalido = votosvalidos / (float) votostotal * 100;
	
	printf("\nO total de votos brancos e: %.2f\n", votobranco);
	printf("O total de votos nulos e: %.2f\n", votonulo);
	printf("O total de votos validos e: %.2f\n", votovalido);
	
	return 0;
}
