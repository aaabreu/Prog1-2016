#include <stdio.h>

//exercicio 1

int main()
{
	int num1;//variavel
	int num2;//variavel
	
	printf("coloque um numero.\n");//pergunta
	scanf("%d", &num1);//resposta dando valor a variavel
	
	printf("coloque outro numero.\n");//pergunta
	scanf("%d", &num2);//resposta dando valor a variavel
	
	printf("\n numero =%d\n" , num1 + num2);
	printf("\n numero =%d\n" , num1 - num2);
	printf("\n numero =%.2f\n" , (float) num1 / num2);//Obs. (float) força mostrar o resultado decimais/ definir quantidades de nº =%.2f
	printf("\n numero =%d\n\n\n" , num1 * num2);
		
	system("pause");
	return 0;
}
