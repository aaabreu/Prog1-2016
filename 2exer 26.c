#include <stdio.h>

int main()
{
    int num;
    printf("\nQual a sua idade?\n");//pergunta
    scanf("%d", &num);//resposta dando valor a variavel

    if(num<=17)
    {
      printf("\nVoce não pode dirigir!!");
    }
    else(num>=18)
    {
      printf("\nVoce pode dirigir!!");
    }

    return 0;
}
