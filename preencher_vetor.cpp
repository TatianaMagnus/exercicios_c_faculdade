#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que leia um valor inteiro n e em seguida aloque
dinamicamente um vetor de n�meros inteiros de tamanho n. Preencha o vetor 
com n�meros sequenciais iniciando em 0. Fa�a a fun��o:

void escreve_valor(int *v, int pos): escreve na tela o valor do elemento 
pos do vetor v (deve utilizar aritm�tica de ponteiros).*/

void escreve_valor( int *v, int pos ) 
{
	for(int contador = 0; contador < pos; contador++ ) 
	{
		*( v + contador ) = contador;
		printf( "Posi��o %i do vetor:\n -Endere�o de mem�ria %i\n -Valor da posi��o: %i\n", contador, ( v + contador ), *( v + contador ) );	
	}
}

//c�digo
int main()
{
 	setlocale( LC_ALL, "Portuguese" );

	int n;
	int *vetor;
	/*Fa�a um programa que leia um valor inteiro n e em seguida aloque
	dinamicamente um vetor de n�meros inteiros de tamanho n*/
	printf( "Digite o tamanho do Vetor: " );
	scanf( "%i", &n );

	vetor = ( int* ) malloc( n * sizeof( int ) );

	system( "cls" );

	/*Preencha o vetor
	com n�meros sequenciais iniciando em 0.*/
	escreve_valor( vetor, n );

	system( "PAUSE" );
}

