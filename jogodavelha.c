#include <stdbool.h>
#include <stdio.h>
#include <conio.h>


bool ganhei;
int verific;
char tabuleiro[10] = {'0','1','2','3','4','5','6','7','8','9'} ;
int posicao;
int pontuacao1;
int pontuacao2;
int Empato;
bool ganhar;
int j;
int limparTabuleiro();
int opc;
int n = 1;
int quebra = 1;
int i = 1;
int simbolo1 = 17; // Tabela ASCII
int simbolo2 = 16; // Tabela ASCII
void exibirTabuleiro() {
	printf("                                         Player 1 = x \t\t\n");
	printf("                                         Player 2 = O \t\t\n\n");
	printf("                                         {RANK}\t\t\n");
	printf("                                          Player 1 PONTOS:{%i}\t\t\n",pontuacao1);
	printf("                                          Player 2 PONTOS:{%i}\t\t\n",pontuacao2);
	printf("                                          Empate 3 PONTOS:{%i}\t\t\n",Empato);
    
	
	printf("\xBA====\xBA====\xBA====\xBA\n\xBA  %c \xBA  %c \xBA  %c \xBA\n\xBA",tabuleiro[1],tabuleiro[2],tabuleiro[3]);
	printf("====\xBA====\xBA====\xBA\n\xBA  %c \xBA  %c \xBA  %c \xBA\n\xBA",tabuleiro[4],tabuleiro[5],tabuleiro[6]);
	printf("====\xBA====\xBA====\xBA\n\xBA  %c \xBA  %c \xBA  %c \xBA\n\xBA",tabuleiro[7],tabuleiro[8],tabuleiro[9]); 
	printf("====\xBA====\xBA====\xBA\n");
	
	
	
}
//============================= MENU =============================================//

menu(){


	
	printf("========================================================\n");
	printf("=========={BEM VINDO AO JOGO DA VELHA}==================\n");
	printf("========================================================\n\n");
	printf("                                                                        Criador: %c Khufos %c \t\t\n",16,17);
	printf("                                                                        Instagram: %c @Khufos %c \t\t\n",16,17);
	printf("                                                                        Canal no youtube: %c Khufos %c \t\t\n",16,17);
	
	printf("{1} Jogar com Amigos:\n");
	printf("{s} sair:\n");
	printf("Digite a opcao desejada:");
	scanf("%i", &opc);
	
	
	switch(opc){
	case 1:
		ganhei = false;
		quebra = 1;
		i =1;
		int players(void);
	    players();
	    
		break;
	case 2:	
	    ganhei = false;
		quebra = 1;
		i =2;
		int players(void);
	    players();
		break;
	case 's':
		break;
	default:	
		printf("Obrigado por jogar!!!");
		break;
	}
	return 0;
}
//=================================================================================//
//============================ Jogar com Players ================================//
int players(void) {
	int verificao(int verific);
	int regra();
	int regras2(int stop);
	int posicao;
	int limparTabuleiro();
	int empate();


	while(ganhei != true) {
		exibirTabuleiro();
		printf("Digite um numero correspondente a casa no quadrado:\n");
		printf("PLAYER (%i) :", i);
		scanf("%i",&posicao);
		regras2(posicao);
		verificao(posicao);
		regra();
		empate();
	++i;
	    
 	system("cls");
	// mini loop dos players	
	if(i > 2) {
	   i = 1;
	}
	++n;
	
	
	
    }
	limparTabuleiro();
	menu();
	
	
   
	
}
//Vericao pra o cara nao substituir as peças  x ou o ;
int verificao(int verific) {
	//player 1
	if((tabuleiro[verific] != 'o') && (i == 1)){
		tabuleiro[verific] = 'x';
	//player 2	
	}else if((tabuleiro[verific] != 'x') && (i == 2)){
		tabuleiro[verific] = 'o';
	}
	
	
}
//VERIFICA TODAS AS POSIÇOES DO JOGADORES ===========================
int regra() {
	
   if((tabuleiro[1]== 'x' && tabuleiro[2]=='x' && tabuleiro[3] == 'x')||
	  (tabuleiro[4]== 'x' && tabuleiro[5]=='x' && tabuleiro[6] == 'x')||
	  (tabuleiro[7]== 'x' && tabuleiro[8]=='x' && tabuleiro[9] == 'x')||
	  (tabuleiro[1]== 'x' && tabuleiro[5]=='x' && tabuleiro[9] == 'x')||
	//==================================================================//
	  (tabuleiro[3]== 'x' && tabuleiro[5]=='x' && tabuleiro[7] == 'x')||
	  (tabuleiro[2]== 'x' && tabuleiro[5]=='x' && tabuleiro[8] == 'x')||
	  (tabuleiro[1]== 'x' && tabuleiro[4]=='x' && tabuleiro[7] == 'x')||
	  (tabuleiro[3]== 'x' && tabuleiro[6]=='x' && tabuleiro[9] == 'x'))
	{
		++pontuacao1;
		ganhei = true;
	}
	
   if((tabuleiro[1]== 'o' && tabuleiro[2]=='o' && tabuleiro[3] == 'o')||
	  (tabuleiro[4]== 'o' && tabuleiro[5]=='o' && tabuleiro[6] == 'o')||
	  (tabuleiro[7]== 'o' && tabuleiro[8]=='o' && tabuleiro[9] == 'o')||
	  (tabuleiro[1]== 'o' && tabuleiro[5]=='o' && tabuleiro[9] == 'o')||
	//==================================================================//
	  (tabuleiro[3]== 'o' && tabuleiro[5]=='o' && tabuleiro[7] == 'o')||
	  (tabuleiro[2]== 'o' && tabuleiro[5]=='o' && tabuleiro[8] == 'o')||
	  (tabuleiro[1]== 'o' && tabuleiro[4]=='o' && tabuleiro[7] == 'o')||
	  (tabuleiro[3]== 'o' && tabuleiro[6]=='o' && tabuleiro[9] == 'o'))
	{
		++pontuacao2;
		ganhei = true;
	}
	
	
	
		
	
}
// VERIFICA QUANDO DA EMPATE  
int empate() {  
	++quebra;
	if(quebra>=10){
		++Empato;
		ganhei = true;
		}
	}
	
//LIMPAR O TABULEIRO PARA PROXIMA JOGADA 

int limparTabuleiro()
{
int tb;
for(tb = 0; tb<=11; tb++) {
		tabuleiro[tb] = '-' ;
		
	}
};

//AQUI PARECE A MSG PARA O CARA ESCOLHE O PLAYER CERTO QUE TENTO COLOCAR UM X EM CIMA DA BOLA.
void alerta(){
	int alerta;	
	                       
							printf("============================ATENCAO ====================================\n");
							printf("Ja houve jogada nesta casa! Escolha outra casa.\t\n");
	                        printf("\tSE VOCE ERROU COM PLAYER {1} APERTE 1\n");
							printf("\tSE VOCE ERROU COM PLAYER {2} APERTE 2\n");
                      	    printf("Digite o numero do player que errou, para voce nao perder a vez!!!\n");
                      	    printf("============================ATENCAO =====================================\n\n");
							scanf("%i",menu());
							
							
	
}

// AQUI É ONDE ELE VERIFICA SE O CARA VAI COLOCAR O X NO LUGAR DA BOLA
int regras2(int stop){
	if(tabuleiro[stop] == 'x' || tabuleiro[stop] == 'o')
	{	
		
		void alerta();
		alerta();
		
		
	
	} 
	
}
//=====================================O START DO CODIGO ===================================/
//AQUI CHAMA O JOGO .

int main ()
{
	
  menu();

}
