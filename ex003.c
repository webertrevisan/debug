#include <stdio.h>

//----------------------Convers�o de D�lar para Real-------------------------------

int main(){
	
		float dolar, conver;
	
	printf("Escreva um programa que leia a cota��o do dolar e um valor em dolares, e converta para reais. \n");
	printf("Quantos Dolars voce tem: \n");
	scanf("%f", &dolar);
	
	conver = dolar * 5.71;
	
	
	printf("Ao converter para reais voce tera: %.2f Reais\n", conver);
	
	return 0;
}
