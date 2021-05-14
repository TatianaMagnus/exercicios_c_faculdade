#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que possua a seguinte estrutura:

typedef struct{
char nome[30];
int qtdnotas;
float *notas;
}aluno;

Aloque dinamicamente um vetor de alunos e preencha esse vetor com alunos. 
Para cada aluno, aloque dinamicamente o vetor notas. Caso o vetor de alunos 
chegue ao seu limite, realoque-o para uma área maior.*/

typedef struct {
	char nome[30];
	int qtdnotas;
	float *notas;
}aluno;

//código
int main()
{
 	setlocale( LC_ALL, "Portuguese" );
 	aluno *alunos;
 	alunos = ( aluno* ) malloc( 2 * sizeof( aluno ) );
 	int contador = 0, tamanhoAlunos = 2, continua=1;

	while(continua == 1) 
	{
		fflush( stdin );
		printf("\nDigite o nome do aluno > ");
		gets(alunos[contador].nome);
		printf("\nDigite a quantidade de notas do aluno >");
		scanf("%i", &alunos[contador].qtdnotas );
		for(int contNota = 0; contNota < alunos[contador].qtdnotas; contNota++ ) 
		{
			alunos[contador].notas = ( float* ) malloc( alunos[contador].qtdnotas * sizeof( float ) );
			printf( "\nDigite a nota número %i do aluno >", (contNota ) + 1);
			scanf( "%f", &alunos[contador].notas[contNota] );
		}

		fflush( stdin );
		printf( "\nDeseja cadastrar outro aluno?\nInsira 1 para sim ou 2 para não >");
		scanf("%d", &continua);
		
		if(continua == 1 ) 
		{
			alunos = (aluno*) realloc(alunos, ++tamanhoAlunos * sizeof(aluno));
			contador++;
		}
	}

	for( int contador = 0; contador < tamanhoAlunos - 1; contador++ ) {
		printf( "Nome do aluno: %s\n", alunos[contador].nome );
		printf( "Quantidade de notas: %i\n", alunos[contador].qtdnotas );
		for( int contNota = 0; contNota < alunos[contador].qtdnotas; contNota++ ) {
			printf( "Nota %i: %.2f\n", ( contNota ) + 1, alunos[contador].notas[contNota] );
		}
		printf( "\n\n" );
	}
	system("PAUSE");
}

