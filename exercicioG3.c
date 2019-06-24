#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
*  =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

void exibirVetor(int * vetor, int qtdDeElementosDoVetor){
  int iterador;
  printf("[ ");
  for (iterador = 0; iterador < qtdDeElementosDoVetor; iterador++)
    printf("%d ", vetor[iterador]);
  printf("]\n");
}

int acharMaiorNumeroNoVetor(int * vetor, int qtdDeElementosDoVetor){
  
  int iterador;
  int maiorNUmero = -1;
  
  for(iterador = 0; iterador < qtdDeElementosDoVetor; iterador++){
    if(vetor[iterador] > maiorNUmero)
      maiorNUmero = vetor[iterador];
  }
  
  return maiorNUmero;
}

// Radix Sort
void radixSort(int * vetor, int qtdDeElementosDoVetor){
  
  /*
    Esta sendo utilizada a base 10 para esse algoritmo
  */

  // Base 10 is used
  int iterador;
  int vetorSorteado[qtdDeElementosDoVetor];
  int digitoMenosSignificativo = 1;
  int maiorNumeroDoVetor = acharMaiorNumeroNoVetor(vetor, qtdDeElementosDoVetor);
  
  while (maiorNumeroDoVetor / digitoMenosSignificativo > 0){
    
    exibirVetor(vetor, qtdDeElementosDoVetor);
    
    int balde[10] = { 0 };
    
    /*
        conta o número de chaves que há em cada elemento do vetor dos números não ordenados
        e incrementa na posição do vetor balde quantos elementos começam com a chave indicada
    */
    for (iterador = 0; iterador < qtdDeElementosDoVetor; iterador++)
      balde[(vetor[iterador] / digitoMenosSignificativo) % 10]++;
    
    /**
     * Adiciona a contagem dos baldes anteriores
     * Adquire índices após o final de cada local de depósito na matriz
     * Funciona de forma semalhante a o algoritmo de ordenação de contagem
     **/
    for (iterador = 1; iterador < 10; iterador++)
      balde[iterador] += balde[iterador - 1];
    
    // Usa o balde para prencher o vetorSorteado
    for (iterador = qtdDeElementosDoVetor - 1; iterador >= 0; iterador--){
      vetorSorteado[--balde[(vetor[iterador] / digitoMenosSignificativo) % 10]] = vetor[iterador];
    }    
    
    for (iterador = 0; iterador < qtdDeElementosDoVetor; iterador++)
      vetor[iterador] = vetorSorteado[iterador];
    
    // multiplica o valor do digitoMenosSignificativo para a base
    digitoMenosSignificativo *= 10;

    printf("\n digito significante: %d", digitoMenosSignificativo);
    
    printf("\n\tBalde: ");
    exibirVetor(balde, 10);
  }
}

int main(){
    
setlocale(LC_ALL, "Portuguese");     
  int qtdDeElementosDoVetor, cont=0;
  int iterador;
  
  	do{
	  
		  printf("----------------------------------\n"); 
		  printf("       ALGORITMO RADIX SORT!\n");
		  printf("----------------------------------\n");
		  
		  printf("O vetor terá quantos items ?\n");
		  scanf("%d", &qtdDeElementosDoVetor);
		
		  int lista[qtdDeElementosDoVetor];
		  
		  for(iterador = 0; iterador < qtdDeElementosDoVetor; iterador++){
		    printf("Insira o %d elemento: \n", (iterador + 1));
		    scanf("%d", &lista[iterador]);
		  }
		  
		  printf("\nLista desordenada: ");
		  exibirVetor(&lista[0], qtdDeElementosDoVetor);
		  
		  radixSort(&lista[0], qtdDeElementosDoVetor);
		  
		  printf("\nVetor ordenado:");
		  exibirVetor(&lista[0], qtdDeElementosDoVetor);
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
