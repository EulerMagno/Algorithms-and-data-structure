#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#include <locale.h>

/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

int main(){
	
setlocale(LC_ALL, "Portuguese");
 int vetor[MAX];
 int i, auxiliar, contador, ordenacao,cont=0;
 	
 	do{
 				printf("******************************\n");
				printf("**********Bubble Sort*********\n");
				printf("******************************\n");
	 
		printf("Preencha com %d registros numéricos:\n", MAX);
		 for (i = 0; i < MAX; i++) {
		 scanf("%d", &vetor[i]);
		 }
		printf("Deseja ordernação em ordem crescente(Digite 1) ou decrescente(Digite 2)?\n");
		scanf("%d", &ordenacao);
		
		while(!(ordenacao == 1 || ordenacao == 2)){
		  printf("Valores validos apenas 1 e 2:\n");
		scanf("%d", &ordenacao);
		}
		
		printf("Ordem atual dos itens no array:\n");
		for (i = 0; i < MAX; i++) {
		 printf("%d ", vetor[i]);
		}
		
		if(ordenacao == 1){
		// Algoritmo de ordenação Bubblesort em ordem crescente:
		 for (contador = 1; contador < MAX; contador++) {
		   for (i = 0; i < MAX - 1; i++) {
		     if (vetor[i] > vetor[i + 1]) {
		       auxiliar = vetor[i];
		       vetor[i] = vetor[i + 1];
		       vetor[i + 1] = auxiliar;
		     }
		   }
		 }
		printf("\nElementos do array em ordem crescente:\n");
		for (i = 0; i < MAX; i++) {
		 printf("%d ", vetor[i]);
		}
		
		}else if (ordenacao == 2){
		
		// Algoritmo de ordenação Bubblesort em ordem decrescente:
		 for (contador = 1; contador < MAX; contador++) {
		   for (i = 0; i < MAX - 1; i++) {
		     if (vetor[i] < vetor[i + 1]) {
		       auxiliar = vetor[i];
		       vetor[i] = vetor[i + 1];
		       vetor[i + 1] = auxiliar;
		     }
		   }
		 }
		printf("\nElementos do array em ordem decrescente:\n");
		for (i = 0; i < MAX; i++) {
		 printf("%d ", vetor[i]);
		}
		}
		
		printf("\n");
		printf("\nRefazer as opções?");
			printf("\n[1 = sim] [2 = nao ]:");
			scanf("%d", &cont);
			system("cls");
			while(cont!=1 && cont!=2)
			{
				printf("\n Digite uma opção  válida!");
				printf("\n [1 = sim] [2 = nao ]:");
				scanf("%d", &cont);
				system("cls");
			}
	}while (cont!=2);	
return 0;
}
