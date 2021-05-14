#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que realize as opera��es de uma calculadora. O programa deve 
inicialmente ler dois valores e em seguida solicitar uma opera��o (1 � soma, 2 �
subtra��o, 3 � multiplica��o, 4 � divis�o, 5 � sair), a qual deve ser executada por 
uma das seguintes fun��es:
float soma(float a, float b)
float subtra��o(float a, float b)
float multiplicacao(float a, float b)
float divisao(float a, float b)
Em seguida o programa deve exibir o resultado e solicitar se o usu�rio deseja 
realizar outra opera��o. Caso o usu�rio opte por realizar outra opera��o, dever� ler 
outro valor e aplicar a opera��o selecionada sobre o resultado da opera��o anterior e 
o novo valor lido.*/


//Fun��es do c�digo

float soma(float a, float b) //fun��o soma
{
	float resultadoSoma;
	resultadoSoma = a + b;
	return(resultadoSoma);
}

float subtracao(float a, float b) //fun��o subtra��o
{
	float resultadoSubtracao;
	resultadoSubtracao = a - b;
	return(resultadoSubtracao);
}

float multiplicacao(float a, float b) //fun��o multiplica��o
{
	float resultadoMultiplicacao;
	resultadoMultiplicacao = a * b;
	return(resultadoMultiplicacao);
}

float divisao(float a, float b) //fun��o divisao
{
	float resultadoDivisao;
	resultadoDivisao = a / b;
	return(resultadoDivisao);
}

main ()
{
 	setlocale(LC_ALL, "Portuguese");
 	//vari�veis
 	float um, dois, resultado, maisOperacoes;
 	int menu, menuDois, loopUm=1, loopDois=1, loopTres=1, loopQuatro=1;
 
	
	 while (loopUm==1)
	 {
	 	//"O programa deve inicialmente ler dois valores e..."
	 	printf("\n**Calculadora**\nDigite dois n�meros:\n");
		scanf("%f %f", &um, &dois);
		
		//"...em seguida solicitar uma opera��o"
	 	printf("\n**Calculadora**\nDigite o valor correspondente a opera��o que deseja realizar e tecle ENTER para selecionar:\n1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n5 - Sair\n");
	 	scanf("%d", &menu);
	 
		switch(menu)
		{
		 	case 1:
				resultado=soma(um,dois);
				maisOperacoes=resultado;
				break;
				 	
			case 2:
				resultado=subtracao(um,dois);
				maisOperacoes=resultado;
				break;
				 	
			case 3:
				resultado=multiplicacao(um,dois);
				maisOperacoes=resultado;
				break;
				
			case 4:
				resultado=divisao(um,dois);
				maisOperacoes=resultado;
				break;
				
			case 5:
				printf("Fim do programa.\n");
				loopUm=0;
				loopDois=0;
				loopTres=0;
				loopQuatro=0;
				break;
				
			default: 
				printf("\nVoc� digitou um valor inv�lido.\n");
		}
		
		
	 	while (loopDois==1) 
		{
			//Em seguida o programa deve exibir o resultado e solicitar se o usu�rio deseja realizar outra opera��o.
			printf("\nO resultado � %.2f\n", resultado);
			printf("\nVoc� deseja realizar outra opera��o com o resultado?\n0 - Sim\n1 - N�o\n");
			scanf("\n%d", &loopUm);
			loopDois=0;
		}
	 }
	 
	 //Caso o usu�rio opte por realizar outra opera��o 
	 while (loopTres==1) 
	 {
	 	//dever� ler outro valor 
	 	loopQuatro=1;
	 	printf("\nDigite outro valor para somar, subtrair, multiplicar ou dividir do resultado:\n");
		scanf("\n%f", &dois);
		
		//e aplicar a opera��o selecionada 

	 	printf("\n**Calculadora**\nDigite o valor correspondente a opera��o que deseja realizar e tecle ENTER:\n1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n5 - Sair\n");
	 	scanf("\n%d", &menuDois);
	 
	 	//sobre o resultado da opera��o anterior e o novo valor lido.
	 	switch(menuDois)
	 	{
	 		loopQuatro=1;
	 		case 1:
			 	resultado=soma(maisOperacoes,dois);
			 	maisOperacoes=resultado;
			 	break;
			 	
			case 2:
			 	resultado=subtracao(maisOperacoes,dois);
			 	maisOperacoes=resultado;
			 	break;
			 	
			case 3:
			 	resultado=multiplicacao(maisOperacoes,dois);
			 	maisOperacoes=resultado;
			 	break;
			
			case 4:
			 	resultado=divisao(maisOperacoes,dois);
			 	maisOperacoes=resultado;
			 	break;
			
			case 5:
			 	printf("\nFim do programa.\n");
			 	loopTres=0;
			 	loopQuatro=0;
			 	break;
			 	
			default: 
				printf("\nVoc� digitou um valor inv�lido.\n");
	 
	 	}
	 	
	 	while (loopQuatro==1) 
		 {
	 		printf("\nO resultado � %.2f\n", resultado);
			printf("\nVoc� deseja realizar outra opera��o com o resultado?\n1 - Sim\n0 - N�o\n");
			scanf("\n%d", &loopTres);
			loopQuatro=0;
		 }
	 		
	 }
	 
	 printf("\nVoc� chegou ao fim do programa.\n");
	 
	system("pause");
}

