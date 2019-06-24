# include <stdio.h>
# include <stdlib.h>
#include <locale.h>
# define MAX 10

/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

int VetorSort[MAX];
int tamanho = 0;

void swap(int *A, int *B){
 	int C = *A;
	*A = *B;
	*B = C;
}

	void GnomeSort(){
 		int proximo = 0; 
		int anterior = 0;
 		int i = 0;

 		for(i = 0; i < tamanho ; i++) {
 			if(VetorSort[i] > VetorSort[i + 1]) {
  				anterior = i;
  				proximo = i + 1;
  				
				while(VetorSort[anterior] > VetorSort[proximo])  {
 					swap(&VetorSort[anterior],&VetorSort[proximo]);
 						if(anterior > 0){
    						anterior--;
    					}
 								if(proximo > 0){
    								proximo--;
    							}
  				}
 			}
 		}
	printf("NUMEROS ORDENADOS: ");
 	for(i = 0; i <= tamanho; i++){
		printf("%d ",VetorSort[i]);
	}
}

int main (){
	
setlocale(LC_ALL, "Portuguese");
int cont=0;
			
		do{
			
			// Pedir ao usuario que ele digite a quantidade de numeros que 
			//deseja inserir e ordenar os numeros após inserir a quantidade informada anteriormente.
		
			printf("**********************************************\n");
			printf("*******************Gnome Sort*****************\n");
			printf("**********************************************\n");
			printf("Digite os números para preencher o vetor,para encerrar digite 0.\n\n\n");
			
		  	while(scanf("%d",&VetorSort[tamanho]),VetorSort[tamanho] >= 1){
			
		 		tamanho++;
			}
			GnomeSort();
			
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
