#include <stdio.h>

int main() {
	float salario, reajuste,salariofinal;
	
	printf("Digite o salario do funcionario:");
	scanf("%f", &salario);
	
	printf("Digite o reajuste feito:");
	scanf("%f", &reajuste);
	
	salariofinal = (float)salario + (salario * reajuste / 100);
	printf("O novo salario do funcionario e: %.2f", salariofinal);
	
	return 0;
	
}
