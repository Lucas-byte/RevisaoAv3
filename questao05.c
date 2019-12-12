/*5. Faça um programa que receba os valores de uma matriz de 2 linhas e 5 colunas. A primeira
linha dessa matriz só deverá aceitar valores pares e a segunda linha dessa matriz só deverá
aceitar números primos. O programa só deverá armazenar o valor lido caso ele atenda as regras
da sua linha, caso contrário, o programa deverá informar que o valor não atende aos requisitos
de preenchimento e solicitar um novo número para a mesma posição. O programa deverá ter
uma função para informar se um número é par e outra para informar se um número é primo.*/

#include<stdio.h>
int paridade(int number){
	if(number % 2 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
int primo(int number){
	int i,qD = 0;
	for(i = 2;i <= number;i++){
		if(number % i == 0)
			qD++;
	}
	if(qD == 1)
		return 1;
	else
		return 0;
}
int main(){
	int matriz[2][5],i,j;
	printf("\nPreencha a matriz: ");
	for(i = 0;i < 2;i++){
		for(j = 0;j < 5;j++){
			printf("\nInforme um valor: ");
			scanf("%d",&matriz[i][j]);
			if(i == 0){
				if(paridade(matriz[i][j]) == 0){
					printf("\nValor invalido para esta linha");
					j--;
				}
			}
			else{
				if(primo(matriz[i][j]) == 0){
					printf("\nValor invalido para esta linha");
					j--;
				}
			}
			
		}
	}
	printf("\nMatriz: \n");
	for(i = 0;i < 2;i++){
		for(j = 0;j < 5;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
