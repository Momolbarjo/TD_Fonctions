#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Il faut utiliser la fonction (rand()%6)+1


void srand(unsigned int seed);

int throwDice()
{
int res;
time_t t,t1;

    res=(rand()%6)+1;
    srand((unsigned) time(&t)) ;
    printf(" \n resultat du tour : %d \n ", res);
    return(res);


}



int playerTurn(int nbdes)
{

int  score=0;
int resultat1,resultat2;


     if (nbdes==1)
    {


        score = score + throwDice();
        return (score);

    }


    else if (nbdes==2)
    {


        resultat1= throwDice();
        resultat2= throwDice();
    }
        if (resultat1==resultat2)
            {
                score= score - (resultat1 + resultat2);
                return (score);
            }
        else {

               score= score + (resultat1 + resultat2);
                return (score);
    }
}


void main (){
    int Score1 =0;
    int Score2 =0;
    int scoreTmp1 = 0;
    int scoreTmp2 = 0;
    int nbdes;




    while ((Score1 <30) && (Score2 <30)) {

	printf("\n Voulez vous lancer 1 ou 2 des: " );
    	scanf("%d",&nbdes);

	 if (nbdes<1 ||nbdes>2) {


     printf("Erreur! " );



    }
	else
	{
        printf(" \n Joueur 1 \n");
        scoreTmp1= playerTurn(nbdes);
        Score1= Score1 + scoreTmp1;
        printf("\n Joueur 1,Votre Score est de %d\n",Score1);


        printf(" \n Joueur 2 \n");
;
        scoreTmp2= playerTurn(nbdes);
        Score2=Score2+scoreTmp2;
        printf(" Joueur 2,Votre Score est de %d\n",Score2);


	}
    }

    if ((Score1 >=30) && (Score2 >= 30)) {

        printf("Egalite !");

    }

    else if (Score2 >=30) {

        printf("Le joueur 2 a gagner !");

    }

    else if (Score1 >=30) {

        printf("Le joueur 1 a gagner !");

    }

  }
