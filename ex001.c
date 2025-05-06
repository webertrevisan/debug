#include <stdio.h>

//--------------------------------ex001-SOMA ENTRE DOIS NUMEROS------------------------------------------

int main(){
	int soma, A, B;
	printf("SOMA ENTRE DOIS NUMEROS \n");
	printf("Digite um numero: \n");
	scanf("%d", &A);
	printf("Digite outro numero: \n");
	scanf("%d", &B);
	
	soma = A + B;
	
	printf("A soma entre %d e %d e igual a %d \n", A, B, soma);
	
	//-----------------------------ex002-MEDIA ARITIMETICA DE 3 NUMEROS------------------------------------
	
	int arit, n1, n2, n3, n4, ntotal;
	printf("MEDIA ARITIMETICA DE 3 NUMEROS \n");
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero: \n");
	scanf("%d", &n3);
	
	arit = n1 + n2 + n3;
	ntotal = arit / 3 ;
	
	printf("A Media aritimetica de %d, %d e %d e: %d \n", n1, n2, n3, ntotal);
	
//--------------------------ex003-AREA DE UM RETANGULO--------------------------------------------------------

	int base, altura, area;
	
	printf("AREA DE UM RETANGULO \n");
	printf("Digite a altura: \n");
	scanf("%d", &altura);
	
	printf("Digite a base: \n");
	scanf("%d", &base);
	
	area = base * altura;
	
	printf("a area entre %d e %d e: %d \n", altura, base, area);
	
	
//---------------------------ex004-CALCULO FAHRENHEIT-------------------------------------------------------

	int fire, cel;
	
	printf("CALCULO FAHRENHEIT \n");
	printf("Qual e a temperatura hoje no brazil: \n");
	scanf("%d", &cel);
	
	fire = (cel * 9/5) + 32;
	
	printf("Nos EUA seria %d Fahrenheit \n", fire);

//--------------------------ex005-SOMA, SUBTRACAO, MULTIPLICALCAO E DIVISAO---------------------------------------------------------

	int som, sub, mult, div, s1, s2;
	

	
	printf("SOMA, SUBTRACAO, MULTIPLICALCAO E DIVISAO \n");
	printf("Digite o primeiro numero \n");
	scanf("%d", &s1);
	printf("Digite o segundo numero \n");
	scanf("%d", &s2);
	
	som = s1 + s2;
	sub = s1 - s2;
	mult = s1 * s2;
	div = s1 / s2;
	
	printf("A Soma entre %d e %d e: %d \n",s1, s2, som);
	printf("A Subtracao entre %d e %d e: %d \n",s1, s2, sub);
	printf("A multiplic. entre %d e %d e: %d \n",s1, s2, mult);
	printf("A Divisao entre %d e %d e: %d \n",s1, s2, div);
	
	
}
