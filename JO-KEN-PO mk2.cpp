#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <time.h>//necess�rio p/ fun��o time()
#include <locale.h>

int main(void){
    int esc_usu,esc_ale,nmr_part,i;
    char decisao;
    
    printf ("Voc� quer jogar? y/n  ");
    scanf ("%c",&decisao);
    
    if ((decisao!='y')&&(decisao!='n'))
    	printf ("Voc� deve dizer y ou n ! ");
    
   	while (decisao=='y')
	   {
    	printf("PEDRA,PAPEL OU TESOURA? :D\n\n");
 		printf ("Faca sua escolha: \n0 = Pedra\n1 = Papel\n2 = Tesoura\n\n");
 		scanf ("%d",&esc_usu);
 		
		switch (esc_usu) {
 			case 0: printf ("\nVoc� escolheu: Pedra\n\n");
 			break ;
 			case 1: printf ("\nVoc� escolheu: Papel\n\n");
 			break ;
 			case 2: printf ("\nVoc� escolheu: Tesoura\n\n");
	 		break ;}
 
 	
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
 
 	// FIM DA ESCOLHA ALEATORIA
 
	 	if ((esc_usu==0)&&(esc_ale==0))
	 		printf ("Voc� Empatou!!");
	 	if ((esc_usu==0)&&(esc_ale==1))
	 			printf("Voc� Perdeu!!");
		if ((esc_usu==0)&&(esc_ale==2))
	 			printf ("Voc� Ganhou!!");
	 			
	 	if ((esc_usu==1)&&(esc_ale==0))
	 		printf ("Voc� Ganhou!!");
	 	if ((esc_usu==1)&&(esc_ale==1))
	 			printf("Voc� Empatou!!");
		if ((esc_usu==1)&&(esc_ale==2))
	 			printf ("Voc� Perdeu!!");
				 
		if ((esc_usu==2)&&(esc_ale==0))
	 		printf ("Voc� Perdeu!!\n\n");
 		if ((esc_usu==2)&&(esc_ale==1))
 				printf("Voc� Ganhou!!\n\n");
		if ((esc_usu==2)&&(esc_ale==2))
	 			printf ("Voc� Empatou!!\n\n");	
	 			
	 	printf ("\n\n--------------------------------------------------\n\n");

		printf ("Deseja jogar novamente? y/n  ");
	 	scanf ("%c",&decisao);
 	
}
     getch();
     return 0;
}
