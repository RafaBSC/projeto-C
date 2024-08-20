#include <stdio.h>

int main() {
	int b,h,a;
	
	printf("Digite a base do retangulo: ");
	scanf("%d", &b);
	
	printf("Digite a altura do retangulo: ");
	scanf("%d", &h);
	
	a = b*h;
	printf("A area do retangulo e:= %d\n", a);
	
	return 0;
	
}
