#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1. Crie um programa que possua uma struct para representar uma pizza (sabor, 
valor). Crie um vetor de pizzas com capacidade para 5 pizzas. Crie as funções: 
pizza ler_pizza()
void listar_pizzas(pizza pizzas[])*/

//struct para representar uma pizza
struct pizza
{
	char sabor[100];
	float valor;
};

//funções
pizza ler_pizza () {
	pizza a;
	fflush(stdin);
	printf("Digite o sabor da pizza:");
	gets(a.sabor);
	printf("Digite o valor da pizza:");
	scanf("%f",&a.valor);
	return a;
}


void listar_pizzas(pizza pizzas[]) 
{
	int i=0;
  printf("\n| Cod. | Sabor | Valor |\n");
	for(i=0; i<5; i++) 
	{
  		printf("|    %d | %s | %.2f |\n", i, pizzas[i].sabor, pizzas[i].valor);
 	}
}

//códigco
main ()
{
 setlocale(LC_ALL, "Portuguese");
 //codigo
 pizza pizzas[5];
 int i=0; 
 
 
 for(i=0; i<5; i++) {
  pizzas[i]=ler_pizza();
 }
 
 
 listar_pizzas(pizzas);
 
 
 system("PAUSE");
}

