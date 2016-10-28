#include <stdio.h>

//exercicio 2 triangulo

int main()
{
	int base;
	int altura;
	float area;
	
	printf("qual a altura do triangulo?\n");
	scanf("%d", &altura);
	
	printf("qual a altura do triangulo?\n");
	scanf("%d", &base);
	
	area = (base * altura) /2.0;
	
	printf("\n Area =%.2f\n" ,(float) area);
	
	
	return 0;
}
