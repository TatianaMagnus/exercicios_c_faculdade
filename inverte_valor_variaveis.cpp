#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie a função:
	void troca(int *a, int *b): inverte o valor das variáveis a e b.*/
void troca (int *a, int *b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

main ()

{
 setlocale(LC_ALL, "Portuguese");
 //codigo
 int a, b;
 
 printf("\nDigite um valor para a > ");
 scanf("%d", &a);
 printf("\nDigite um valor para b > ");
 scanf("%d", &b);
 
 printf("\n...Trocando os valores das variáveis a e b.");
 troca (&a, &b);

 printf("\nA variável a é igual a %d e a variável b é igual a %d\n", a, b);
 system("PAUSE");
}

