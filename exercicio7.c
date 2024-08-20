#include <stdio.h>

int main () {
	
	int carros_vendidos;
	float total_vendas, salario_fixo, valor_recebido, final;
	
	printf("Quantos carros foram vendidos:");
	scanf("%d", &carros_vendidos);
	
	printf("Quais foram os totais de vendas feitos:");
	scanf("%f", &total_vendas);
	
	printf("Digite o salario fixo do funcionario:");
	scanf("%f", &salario_fixo);
	
	printf("Digite a comissao do funcionario:");
	scanf("%f", &valor_recebido);
	
	final = salario_fixo + valor_recebido * carros_vendidos + 0.05 * total_vendas;
	
	printf("O salario final do vendedor e: %.2f", final);
	
	return 0;
	
}
