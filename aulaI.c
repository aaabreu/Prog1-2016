#include <stdio.h>

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
	printf("\n numero =%f\n" , (float) num1 / num2);
	printf("\n numero =%d\n\n\n" , num1 * num2);
		
	system("pause");
	return 0;
}

/*comentarios*/ 
//comentario  e uma linha
/*declara variaveis - int ano*/

//pular linha:"\n" sempre dentro.
//falar: printf("Hello Word!!!\n");
//respostas: scanf("%d", &ano);
//criar variaveu s/valor: int ano;
//para contas: printf("\n numero =%d\n" , num1 + num2)
