/*1. Faça um programa que crie um vetor dinâmico de inteiros a partir de uma quantidade de
posições fornecida pelo usuário. Receba do usuário o valor de cada posição do vetor de acordo
com as seguintes regras: os elementos do vetor com índice par só deverá aceitar valores
múltiplos de três e os elementos com índice ímpar só deverá aceitar números primos. O
programa só deverá armazenar o valor lido caso ele atenda as regras, caso contrário, o
programa deverá informar que o valor não atende aos requisitos de preenchimento e solicitar
um novo número para a mesma posição. O programa deverá ter uma função para informar se
um número é múltiplo de três e outra para informar se um número é primo.*/
#include<stdio.h>
#include<stdlib.h>
int primo(int n1){
	int qD = 0,i;
	for(i = 2;i <= n1;i++){
		if(n1 % i == 0)
			qD++;
	}
	if(qD == 1)
		return 1;
	else
		return 0;
}
int multi3(int n1){
	if(n1 % 3 == 0)
		return 1;
	else
		return 0;
}
int main(){
	int tam,i,num;
	int *vet;
	printf("\nInforme o tamanho do vetor: ");
	scanf("%d",&tam);
	vet = (int *) malloc(tam * sizeof(int));
	if(vet != NULL){
		for(i = 0;i < tam;i++){
			if(i % 2 == 0){
				printf("\n");
				printf("\nInforme um número para a posição %d: ",i);
				scanf("%d",&num);
				if(multi3(num)){
					*(vet + i) = num;
				}
				else{
					printf("\nValor Inválido");
					i--;
				}
			}
			else{
				printf("\n");
				printf("\nInforme um número para a posição %d: ",i);
				scanf("%d",&num);
				if(primo(num)){
					*(vet + i) = num;
				}
				else{
					printf("\nValor Inválido");
					i--;
				}
			}
		}
	}
	printf("\nVetor: ");
	for(i = 0;i < tam;i++){
		printf("%d ",*(vet + i));
	}
	free(vet);
	return 0;
}
