#include <stdio.h>

int main() {
	int anos, meses, dias, total;
	
	printf("Quantos anos voce tem:");
	scanf("%d", &anos);
	
	printf("Quantos meses voce tem:");
	scanf("%d", &meses);
	
	printf("Quantos dias voce tem:");
	scanf("%d", &dias);
	
	total = anos * 365 + meses * 30 + dias;
	printf("No total voce tem: %d", total);
	
	return 0;
}
