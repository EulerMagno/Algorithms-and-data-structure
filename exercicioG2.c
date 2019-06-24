#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Define a constant
#define MAX 10
/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

 // Protítipo da função de ordenação
void insertion_sort(int *a);
// Função de Ordenação por Inserção
		void insertion_sort(int *a)
		{
		 int i, j, tmp;
		  
		 for(i = 1; i < MAX; i++)
		 {
		  tmp = a[i];
		  for(j = i-1; j >= 0 && tmp < a[j]; j--)
		  {
		   a[j+1] = a[j];
		  }
		  a[j+1] = tmp;
		 }
		}

// Função main
int main(){
setlocale(LC_ALL, "Portuguese");
int i, vet[MAX], cont=0;
	 
	do{
		printf("******************************\n");
		printf("****Ordenação Por Inserção****\n");
		printf("******************************\n");
		for(i = 0; i < MAX; i++){
			
		  printf("Digite um valor: ");
		  scanf("%d", &vet[i]);
		 }
		insertion_sort(vet);
		// Imprime os valores ordenados
		printf("Valores ordenados: \n");
		
		for(i = 0; i < MAX; i++){
			
		  printf("%d \n", vet[i]);
		}
	

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
 
}

