#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/

/* Implementação de Árvore binária */


/* Cada nó armazena três informações:
   nesse caso um número (num),
   ponteiro para sub-árvore à  direita (sad)
   e ponteiro para sub-árvore à  esquerda (sae) */
   
typedef struct tree
{
  int num;
  struct tree* sad;
  struct tree* sae;
} Tree;

/* A estrutura da árvore é representada por um ponteiro
   para o nó raiz. Com esse ponteiro, temos acesso aos
   demais nós. */

/* Função que cria uma árvore */

Tree* createTree()
{
  /* Uma árvore é representada pelo endereço do nó raiz,
     essa função cria uma árvore com nenhum elemento,
     ou seja, cria uma árvore vazia, por isso retorna NULL. */
     
  return NULL;
}

/* Função que verifica se uma árvore nó vazia */
int treeIsEmpty(Tree* t)
{
  /* Retorna 1 se a árvore for vazia e 0 caso contrário */
  return t == NULL;

}

/* Função que mostra a informação da árvore */
void showTree(Tree* t)
{
  /* Essa função imprime os elementos de forma recursiva */
  
  printf("<"); /* notação para organizar na hora de mostrar os elementos */
  if(!treeIsEmpty(t)) /* se a árvore não for vazia... */
  {
    /* Mostra os elementos em pré-ordem */
    printf("%d ", t->num); /* mostra a raiz */
		showTree(t->sae); /* mostra a sae (subÁrvore á esquerda) */
  		showTree(t->sad); /* mostra a sad (subÁrvore à  direita) */
  }
  printf(">"); /* notação para organizar na hora de mostrar os elementos */
}

/* Função que insere um dado na árvore */
void insertTree(Tree** t, int num)
{
  /* Essa função insere os elementos de forma recursiva */
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree)); /* Aloca memória para a estrutura */
    (*t)->sae = NULL; /* Sub-árvore à  esquerda é NULL */
    (*t)->sad = NULL; /* Sub-árvore à  direita é NULL */
    (*t)->num = num; /* Armazena a informação */
  } else {
    if(num < (*t)->num) /* Se o número for menor então vai pra esquerda */
    {
      /* Percorre pela sub-árvore é  esquerda */
      insertTree(&(*t)->sae, num);
    }
    if(num > (*t)->num) /* Se o número for maior então vai pra direita */
    {
      /* Percorre pela sub-árvore à direita */
      insertTree(&(*t)->sad, num);
    }
  }
}

/* Função que verifica se um elemento pertence ou não é  árvore */
int isInTree(Tree* t, int num) {
  
  if(treeIsEmpty(t)) { /* Se a árvore estiver vazia, então retorna 0 */
    return 0;
  }
  
  /* O operador lógico || interrompe a busca quando o elemento for encontrado */
  return t->num==num || isInTree(t->sae, num) || isInTree(t->sad, num);
}

int main(){
	
setlocale(LC_ALL, "Portuguese");
int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, contrl=0, numexist=0, aux=0, cont=2, tamanho=0, vec[tamanho], i=0; 
	
do{
	printf("**********************Árvore Binária**********************");
	printf("\nVerificar se existe uma árvore.........................[1]");
	printf("\nConstruir e exibir uma  árvore.........................[2]");
	printf("\nSair...................................................[3]\n");
	scanf("%d",&contrl);
	system("cls");
  
	
		
	while(contrl>3 || contrl<1){
			
		printf("\nDigite uma opção válida!");
		printf("\n**********************Árvore Binária**********************");
		printf("\nVerificar se existe uma árvore.........................[1]");
		printf("\nConstruir e exibir uma  árvore.........................[2]");
		printf("\nSair...................................................[3]\n");
		scanf("%d",&contrl);
		system("cls");
		
			
	}
		
	if (contrl == 1){
		Tree* t = createTree();  /*cria uma árvore */
		void showTree(Tree* t); /* Função que mostra a informação da árvore */
		if(treeIsEmpty(t)) /* Verifica se a árvore está vazia */
		{
   			printf("\n\nCriamos uma árvore, mas  está  vazia!!\n");
 		} else {
  			printf("\n\nÁrvore não está vazia!!\n");
		}
			
	}
	
	if (contrl == 2){
		Tree* t = createTree();  /*cria uma árvore */
		printf("Introduza o tamanho do vetor: ");
    	scanf("%d", &tamanho);
		
		for(i=0; i<tamanho; i++){
        	printf("Preencha o vector: ");
        	scanf("%d", &vec[i]);
        	insertTree(&t, vec[i]);
        }

    
  		showTree(t); /* Mostra os elementos da árvore em pré-ordem */
  		printf("\nDeseja verificar a existência de algum número?");
  		printf("\n[1 = sim] [2 = não ]:");
		scanf("%d", &aux);
		system("cls");
		
		while(aux!=1 && aux!=2)
		{
			system("cls");
			printf("\n Digite uma opção  válida!");
			printf("\n [1 = sim] [2 = não ]:");
			scanf("%d", &aux);
			system("cls");
		}
		if (aux == 1 ){
			printf("\nDigite o número que deseja procurar: "); 
			scanf("%d", &numexist);
			if(isInTree(t, numexist)) { /* Verifica se o número  pertence a árvore */
    			printf("\nO número %d pertence a árvore!\n",numexist);
 			} else {
    			printf("\nO número %d não pertence a árvore!\n", numexist);
 			}
		}
		if (aux ==2){
			free(t); /* Libera a memória alocada pela estrutura árvore */	
		}
		
	}
	if (contrl == 3){
		system("pause");
		return 0;
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
return 0;
}

