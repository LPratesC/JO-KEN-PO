#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <time.h>//necessário p/ função time()
#include <locale.h>

int main(void)
{
  	setlocale(LC_ALL, "Portuguese"); //Alterar a linguagem, necessita da biblioteca <locale.h>
	int esc_usu,esc_ale,x,placar_usr,placar_maq;
	char decisao;
	
    placar_maq = 0;
    placar_usr = 0;
  	do
 	 {
 	 	// TELA INICIAL
		printf("\n\nDeseja jogar?\nSIM(1)\nNAO(2)\n");
	    scanf("%d",&x);
	 	system("cls");
	 	
	 	// PLACAR 
	 	printf ("-------------------------------------------------------------------\n");
		printf ("|Seu placar é: %d               X             Placar adversario: %d |\n\n",placar_usr,placar_maq);
		printf ("-------------------------------------------------------------------\n\n");
	 	
	 	// ESCOLHA DO JOGADOR
	 	if (x==1){
	 	printf("PEDRA,PAPEL OU TESOURA? :D\n\n");
		printf ("Faca sua escolha: \n0 = Pedra\n1 = Papel\n2 = Tesoura\n\n");
 		scanf ("%d",&esc_usu);
 		
		switch (esc_usu) {
 			case 0: printf ("\nVocê escolheu: Pedra\n\n");
 			break ;
 			case 1: printf ("\nVocê escolheu: Papel\n\n");
 			break ;
 			case 2: printf ("\nVocê escolheu: Tesoura\n\n");
	 		break ;
	 		default : printf ("\nVocê deve escolher 0, 1 ou 2 !!\n\n");
	 		break;}
	 		
	// ESCOLHA ALEATORIA 
	 
	 	srand(time(NULL));
   			esc_ale = rand() % 3; 
 	
 
 	
 		switch (esc_ale) {
 			case 0: printf ("Escolha aleatoria foi: Pedra\n\n");
 			break ;
 			case 1: printf ("Escolha aleatoria foi: Papel\n\n");
 			break ;
 			case 2: printf ("Escolha aleatoria foi: Tesoura\n\n");
 			break ;}
	
	//RESULTADO DO JOGO
	  	if (esc_usu==0)
			if (esc_usu==esc_ale)
				printf ("Empate");
			else	if ((esc_usu==0)&&(esc_ale==1)){
						printf ("Perdeu");
						placar_maq++;}
					else {
						printf ("Ganhou");
		 				placar_usr++;}
		 				
	 	if (esc_usu==1)			
		 	if (esc_usu==esc_ale)
				printf ("Empate");
			else	if ((esc_usu==1)&&(esc_ale==2)){
						printf ("Perdeu");
						placar_maq++;}
					else {
						printf ("Ganhou");
		 				placar_usr++;}
		if (esc_usu==2)			
			if (esc_usu==esc_ale)
				printf ("Empate");
			else	if ((esc_usu==2)&&(esc_ale==0)){
						printf ("Perdeu");
						placar_maq++;}
					else {
						printf ("Ganhou");
		 				placar_usr++;}	
		 		
	 	printf ("\n\n----------------------------------------------------\n\n");
	 

}
  }while (x==1);
 	
	 // PLACAR ESCRITO
	 if (placar_usr == placar_maq)
	 	  printf ("O jogo empatou!!  :|\n\n\n");
	 	  else if (placar_usr > placar_maq)
	 	      printf ("Você Ganhou!!  :D\n\n\n");
	 	        else 
	 	          printf ("Você Perdeu!!  D:\n\n\n");
	 	          
	 	          
	printf ("Programa simples feito por Leo Prates!! :D :D \n\n") ;
	system ("PAUSE");
  return 0;
}
