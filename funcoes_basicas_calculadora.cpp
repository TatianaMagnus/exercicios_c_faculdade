#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que realize as operações de uma calculadora. O programa deve 
inicialmente ler dois valores e em seguida solicitar uma operação (1 – soma, 2 –
subtração, 3 – multiplicação, 4 – divisão, 5 – sair), a qual deve ser executada por 
uma das seguintes funções:
float soma(float a, float b)
float subtração(float a, float b)
float multiplicacao(float a, float b)
float divisao(float a, float b)
Em seguida o programa deve exibir o resultado e solicitar se o usuário deseja 
realizar outra operação. Caso o usuário opte por realizar outra operação, deverá ler 
outro valor e aplicar a operação selecionada sobre o resultado da operação anterior e 
o novo valor lido.*/


//Funções do código

float soma(float a, float b) //função soma
{
	float resultadoSoma;
	resultadoSoma = a + b;
	return(resultadoSoma);
}

float subtracao(float a, float b) //função subtração
{
	float resultadoSubtracao;
	resultadoSubtracao = a - b;
	return(resultadoSubtracao);
}

float multiplicacao(float a, float b) //função multiplicação
{
	float resultadoMultiplicacao;
	resultadoMultiplicacao = a * b;
	return(resultadoMultiplicacao);
}

float divisao(float a, float b) //função divisao
{
	float resultadoDivisao;
	resultadoDivisao = a / b;
	return(resultadoDivisao);
}

main ()
{
 	setlocale(LC_ALL, "Portuguese");
 	//variáveis
 	float um, dois, resultado, maisOperacoes;
 	int menu, menuDois, loopUm=1, loopDois=1, loopTres=1, loopQuatro=1;
 
	
	 while (loopUm==1)
	 {
	 	//"O programa deve inicialmente ler dois valores e..."
	 	printf("\n**Calculadora**\nDigite dois números:\n");
		scanf("%f %f", &um, &dois);
		
		//"...em seguida solicitar uma operação"
	 	printf("\n**Calculadora**\nDigite o valor correspondente a operação que deseja realizar e tecle ENTER para selecionar:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
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
				printf("\nVocê digitou um valor inválido.\n");
		}
		
		
	 	while (loopDois==1) 
		{
			//Em seguida o programa deve exibir o resultado e solicitar se o usuário deseja realizar outra operação.
			printf("\nO resultado é %.2f\n", resultado);
			printf("\nVocê deseja realizar outra operação com o resultado?\n0 - Sim\n1 - Não\n");
			scanf("\n%d", &loopUm);
			loopDois=0;
		}
	 }
	 
	 //Caso o usuário opte por realizar outra operação 
	 while (loopTres==1) 
	 {
	 	//deverá ler outro valor 
	 	loopQuatro=1;
	 	printf("\nDigite outro valor para somar, subtrair, multiplicar ou dividir do resultado:\n");
		scanf("\n%f", &dois);
		
		//e aplicar a operação selecionada 

	 	printf("\n**Calculadora**\nDigite o valor correspondente a operação que deseja realizar e tecle ENTER:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
	 	scanf("\n%d", &menuDois);
	 
	 	//sobre o resultado da operação anterior e o novo valor lido.
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
				printf("\nVocê digitou um valor inválido.\n");
	 
	 	}
	 	
	 	while (loopQuatro==1) 
		 {
	 		printf("\nO resultado é %.2f\n", resultado);
			printf("\nVocê deseja realizar outra operação com o resultado?\n1 - Sim\n0 - Não\n");
			scanf("\n%d", &loopTres);
			loopQuatro=0;
		 }
	 		
	 }
	 
	 printf("\nVocê chegou ao fim do programa.\n");
	 
	system("pause");
}

