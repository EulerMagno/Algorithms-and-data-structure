#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10


/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

void combo_sort(int matriz[], int tamanho) 
{
	int i, j, intervalo, trocado = 1;
	int aux;
	intervalo = tamanho;
	while (intervalo > 1 || trocado == 1)
	{
		intervalo = intervalo * 10 / 13;
		if (intervalo == 9 || intervalo == 10) intervalo = 11;
		if (intervalo < 1) intervalo = 1;
		trocado = 0;
		for (i = 0, j = intervalo; j < tamanho; i++, j++)
		{
			if (matriz[i] > matriz[j])
			{
				aux = matriz[i];
				matriz[i] = matriz[j];
				matriz[j] = aux;
				trocado = 1;
			}
		}
	}
}
int main(void){
	
setlocale(LC_ALL, "Portuguese");	
int cont=0;
	do{ 
	
	  	printf("**********************************************\n");
		printf("*******************Comb Sort******************\n");
		printf("**********************************************\n");
	 		 // Inserindo valores para serem ordenados
	  	int meuVetor[MAX] = {33, 100, 10, 15, 5, 99, 88, 77, 66, 55}, i=0 ;
	
	 	 printf("Vetor antes: \n");
	
	  	for ( i = 0; i < MAX; i++){
	    	printf("%d " ,meuVetor[i]);
	 	}
	
	  	// Ordenando vetor
		combo_sort(meuVetor, MAX);
	
	  	printf("\nVetor depois: \n");
	
	  	for ( i = 0; i < MAX; i++){
	    	printf("%d ", meuVetor[i]);
	  	}
	  	
	  	
		printf("\n");
		printf("\nRefazer as opções?");
		printf("\n[1 = sim] [2 = nao ]:");
		scanf("%d", &cont);
		system("cls");
			
		while(cont!=1 && cont!=2){
			
			printf("\n Digite uma opção  válida!");
			printf("\n [1 = sim] [2 = nao ]:");
			scanf("%d", &cont);
			system("cls");
		}
		
	}while (cont!=2);
	
  return 0;
}
