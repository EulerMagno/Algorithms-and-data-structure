#include <stdio.h>
#include <math.h>
#include <locale.h>
#define tam 5
/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/


int main () {
	
setlocale(LC_ALL, "Portuguese");	
int vet[tam], tmp = 0,i=0,cont=0;
    
		do{
		    
		    	printf("******************************\n");
				printf("***********Heap Sort**********\n");
				printf("******************************\n");
				
		    for ( i=0; i<tam; i++) { // pedindo o vetor ao usuario
		        printf("DIGITE O vet[%d]:", i);
		        scanf("%d", &vet[i]);
		        }
		        
		    for ( i=0; i<tam; i++){       //Crescente
		        if(vet[i]>vet[i+1]){
		          	 tmp=vet[i+1];
		             vet[i+1]=vet[i];
		             vet[i]=tmp;
		             i = -1;
		            }
		        }
		        printf("\n*IMPRIME ORDEM CRESCENTE*\n");
		        for( i=0; i<tam; i++){         // imprime numero em ordem crescente
		            printf("%d\n", vet[i]);
		        }
		        
		    for ( i=0; i<tam; i++){       //Decrescente
		        if(vet[i]<vet[i+1]){
		          	 tmp=vet[i+1];
		             vet[i+1]=vet[i];
		             vet[i]=tmp;
		             i = -1;
		            }
		        }
		    
		        printf("\n*IMPRIME ORDEM DECRESCENTE*\n");
		        for(i=0; i<tam; i++){         // imprime numero em ordem Decrescente
		            printf("%d\n", vet[i]);
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
