#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que leia uma temperatura e em seguida solicite para qual escala a 
temperatura deve ser convertida (1 � Fahrenheit, 2 � Celsius). Em seguida o sistema 
dever� fazer a convers�o da temperatura atrav�s de fun��es. Para fazer a convers�o 
de graus Fahrenheit para Celsius � necess�rio pegar a temperatura em Fahrenheit,
subtrair 32 e dividir o resultado por 1,8. Para fazer a convers�o de graus Celsius 
para Fahrenheit � necess�rio pegar a temperatura em Celsius, multiplicar por 1,8 e 
somar 32 ao resultado*/

//fun��es

float f_to_c(float fahrenheit) //fun��o Fahrenheit para Celsius
{
	float celsius;
	celsius = (fahrenheit - 32)/1.8; 
	return(celsius);
}

float c_to_f(float celsius) //fun��o Celsius para Fahrenheit
{
	float fahrenheit;
	fahrenheit = celsius*1.8+32; 
	return(fahrenheit);
}


main ()

{
 	setlocale(LC_ALL, "Portuguese");
 	
 	//vari�veis
 
 	int loop=1, loopDois=1, menu;
 	float a, resultado;
 
 	while (loop==1) 
 	{	
 		//e leia uma temperatura e em seguida solicite para qual escala a temperatura deve ser convertida
 		loopDois=1;
 		printf("\n**Conversor de temperaturas**\nInsira o valor de uma temperatura e tecle ENTER:\n>");
 		scanf("\n%f", &a);
 		printf("\nDigite 1 e tecle ENTER para converter para Fahrenheit\nDigite 2 e tecle ENTER para converter para Celsius\n>");
 		scanf("\n%i", &menu);
 		
 		
 		//Em seguida o sistema dever� fazer a convers�o da temperatura atrav�s de fun��es
 		switch (menu) 
		 {
		 	case 1: 
		 		resultado=c_to_f(a);
		 		break;
		 		
		 	case 2: 
		 		resultado=f_to_c(a);
		 		break;
		 	
		 	default: 
		 		printf("\nVoc� digitou uma op��o inv�lida.\n");
		 		loopDois=0;
		 }
		
		while(loopDois==1) 
		{
			printf("\nO resultado da convers�o �: %.2f\n", resultado);
			printf("\nVoc� deseja realizar outra convers�o?\n1 - sim\n2 - n�o\n>");
			scanf("\n%d", &loop);
			loopDois=0;
		}
	 }
	 
	printf("\nVoc� chegou ao fim do programa.\n");
 
 
 
 
 
 	system("PAUSE");
}

