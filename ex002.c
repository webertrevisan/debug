#include <stdio.h>

int main(){
	
//-------------------------------ex001-Dobro de um numero-----------------------------------------
	
	int num, soma;
	
	printf("EX01: Leia um numero inteiro e monstre o dobro do numero \n");
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	
	soma = num * 2;
	
	printf("do dobro de %d e: %d \n", num, soma);
	
//-----------------------------ex002-Convers�o de minutos para horas-----------------------------

	int minutos, h, m;

	printf("Fa�a um programa que leia um n�mero inteiro representando minutos e exiba quantas horas e quantos minutos isso representa.\n");
	printf("Digite a quatidade de minutos: \n");
	scanf("%d", &minutos);
	
	h = minutos / 60;
	m = minutos % 60;
	
	printf("Esses minutos em horas sao: %d h e %d m \n", h, m);
	
//-----------------------------ex003-Per�metro de um ret�ngulo--------------------------------------

	int base, altura, calcule;
	
	printf("Escreva um programa que leia a base e a altura de um retangulo e calcule o perimetro (P = 2 * (base + altura)) \n");
	printf("Digite a Base: \n");
	scanf("%d", &base);
	
	printf("Digite a Altura: \n");
	scanf("%d", &altura);
	
	calcule = 2 * (base + altura);
	
	printf("O per�metro do ret�ngulo �: %d\n", calcule);
	
}
