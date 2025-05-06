#include <stdio.h>

int main(){
	int n1, n2, A, B, soma, subtr, mult,divis, total ;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &A);
	printf("Digite o segundo valor: \n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultados: \n");
	printf("Soma: %d \n", soma);
	printf("Subtra.: %d \n", subtr);
	printf("Multplic.: %d \n", mult);
	printf("Divisao: %d \n", divis);
	
	
	printf("Digite a primeira nota: \n");
	scanf("%d", &n1);
	printf("Digite a segunda nota: \n");
	scanf("%d", &n2);
	
	total = (n1 + n2) / 2;
	
	printf("A nota final do aluno: %d", total);
	
}
