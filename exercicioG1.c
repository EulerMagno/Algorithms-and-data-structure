#include <stdio.h>
#include <math.h>
#include <locale.h>

/* =======================================
*  FACULDADE DE CIÊNCIAS SOCIAIS APLICADAS
*  ATIVIDADE DE AED - PLANO CARTESIANO
*  ALUNO: EULER MAGNO DE OSMAR JÚNIOR
*  MATRÍCULA: 14321  DATA: 24/06/2019 
*  ======================================= 
*/


//Define uma estrutura para criar novos planos cartesianos
struct cartesiano {
	float pInicialX;
	float pInicialY;
	float pFinalX;
	float pFinalY;
};

typedef struct cartesiano Cartesiano;

//Inicia o plano cartesiano definindo seus pontos x e y
Cartesiano create(float pix, float piy, float pfx, float pfy){
	Cartesiano c;
	
	c.pInicialX = pix;
	c.pInicialY = piy;
	c.pFinalX = pfx;
	c.pFinalY = pfy;
	
	return c;
};

//Exibe a posição inicial de cada eixo no ponto cartesiano
void visualizaEixos(Cartesiano c){
	printf("Posição inicial do eixo X: %.2f\n", c.pInicialX);
	printf("Posição inicial do eixo Y: %.2f\n", c.pInicialY);
	printf("Posição final do eixo X: %.2f\n", c.pFinalX);
	printf("Posição final do eixo Y: %.2f\n", c.pFinalY);
};

//Altera os valores definidos para o plano cartesiano
void trocaEixos(Cartesiano *c, float pix, float piy, float pfx, float pfy){
  c->pInicialX = pix;
  c->pInicialY = piy;
  c->pFinalX = pfx;
  c->pFinalY = pfy;

  printf("Os eixos do plano cartesiano foram alterados para: \n Inicial X: %.2f \n Inicial Y: %.2f \n FinalX: %.2f \n FinalY: %.2f\n", pix, piy, pfx, pfy);
};

//Calcula a distância entre os pontos do plano cartesiano
float calculaDistancia(Cartesiano c){
  return sqrt(pow(c.pFinalX - c.pInicialX, 2) + pow(c.pFinalY - c.pInicialY, 2));
};

//Exibe o menu Principal
void exibeMenu(void){
  setbuf(stdin, NULL);

  printf("Pressione a tecla 1 para informar as coordenadas do plano cartesiano ou qualquer outra para sair: \n");
}

void coletaInformacoesCartesiano(

){}


int main(){
	
  setlocale(LC_ALL, "Portuguese");
  int entradaTeclado =0,cont=0;
  float pix, piy, pfx, pfy;

  //Solicita ao usuário que informe oque quer fazer
  do{ 
  printf("**************Cálculo de Plano Cartesiano**********\n");
  printf("Aperte 1 para continuar ou qualquer tecla para sair: ");
  scanf("%d", &entradaTeclado);
  
	if(entradaTeclado == 1){
	
	  //Só quando o usuário apertar algo DIFERENTE de 1 que o programa finalizará
		while(entradaTeclado == 1){
		    Cartesiano cartesiano;
		
		    //Limpa a atela
		    system("cls");
		
		    setbuf(stdin, NULL); //Limpa o buffer do teclado
		    printf("Ponto inicial X: ");
		    scanf("%f", &pix);
		    
		    setbuf(stdin, NULL);
		    printf("Ponto inicial Y: ");
		    scanf("%f", &piy);
		
		    setbuf(stdin, NULL);
		    printf("Ponto final X: ");
		    scanf("%f", &pfx);
		
		    setbuf(stdin, NULL);
		    printf("Ponto final Y: ");
		    scanf("%f", &pfy);
		
		    //Cria o plano cartesiano
		    cartesiano = create(pix, piy, pfx, pfy);
		
		    //Exibe os eixos definidos para o plano
		    visualizaEixos(cartesiano);
		  
		    //Exibe o calculo da distância entre os pontos
		    printf("Distância calculada: %.2f\n\n", calculaDistancia(cartesiano));
		
		    printf("Aperte 1 para continuar ou qualquer tecla para sair: ");
			
		    scanf("%d", &entradaTeclado);
		}
   }
	if (entradaTeclado !=1){
		return 0;
	}
  }while (cont!=1);
}
