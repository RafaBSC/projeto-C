#include <stdio.h>

int main () {
	
	float fahrenheit, graus;
	
	printf("Temperatura em graus fahrenheit:");
	scanf("%f", &fahrenheit);
	
	graus = (fahrenheit - 32) * 5 / (float)9;
	printf ("Em graus celcius sera: %.2f", graus);
	
	return 0;
	 
}
