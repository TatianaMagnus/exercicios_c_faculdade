#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia um valor inteiro n e em seguida aloque
dinamicamente um vetor de números inteiros de tamanho n. Preencha o vetor 
com números sequenciais iniciando em 0. Faça a função:

void escreve_valor(int *v, int pos): escreve na tela o valor do elemento 
pos do vetor v (deve utilizar aritmética de ponteiros).*/

void escreve_valor( int *v, int pos ) 
{
	for(int contador = 0; contador < pos; contador++ ) 
	{
		*( v + contador ) = contador;
		printf( "Posição %i do vetor:\n -Endereço de memória %i\n -Valor da posição: %i\n", contador, ( v + contador ), *( v + contador ) );	
	}
}

//código
int main()
{
 	setlocale( LC_ALL, "Portuguese" );

	int n;
	int *vetor;
	/*Faça um programa que leia um valor inteiro n e em seguida aloque
	dinamicamente um vetor de números inteiros de tamanho n*/
	printf( "Digite o tamanho do Vetor: " );
	scanf( "%i", &n );

	vetor = ( int* ) malloc( n * sizeof( int ) );

	system( "cls" );

	/*Preencha o vetor
	com números sequenciais iniciando em 0.*/
	escreve_valor( vetor, n );

	system( "PAUSE" );
}

