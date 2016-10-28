#include <stdio.h>

int main()
{
    int num1;
    printf("coloque um numero.\n");//pergunta
    scanf("%d", &num1);//resposta dando valor a variavel

    if((num1%2)==0)
    {
      printf("\nNumero Par!!")
    }
    else((num1%2)==1)
    {
      printf("\nNumero Impar!!")
    }

    return 0;
}
