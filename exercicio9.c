#include <stdio.h>

int main () {
	
	float nota1, nota2, nota3, mediafinal;
	
	printf("Digite sua primeira nota:");
	scanf("%f", &nota1);	
	
	printf("Digite sua segunda nota:");
	scanf("%f", &nota2);	
	
	printf("Digite sua terceira nota:");
	scanf("%f", &nota3);
	
	mediafinal = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);
	printf("A media final do aluno foi: %.2f", mediafinal);
	
	return 0;
		
}
