#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Il faut utiliser la fonction (rand()%6)+1


void srand(unsigned int seed);

int throwDice()
{
int res;

    res=(rand()%6)+1;
    printf("resultat du lancer : %d \n ", res);
    return(res);

}

int playerTurn(int nbdes)
{

int  score=0;



     if (nbdes==1)
    {


        score = score + throwDice();
        return (score);

    }


    else if (nbdes==2)
    {


        int resultat1= throwDice();
        int resultat2= throwDice();

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
}


void main (){
    srand((unsigned)time(NULL));
    int Score1 =0;
    int Score2 =0;
    int scoreTmp1 = 0;
    int scoreTmp2 = 0;
    int nbdes;




    while ((Score1 <30) && (Score2 <30)) {

	printf("\nVoulez vous lancer 1 ou 2 des: " );
    	scanf("%d",&nbdes);

	 if (nbdes<1 ||nbdes>2) {


     printf("Erreur! " );



    }
	else
	{
        printf("\nJoueur 1 \n");
        scoreTmp1= playerTurn(nbdes);
        Score1= Score1 + scoreTmp1;
        printf("\n Joueur 1,Votre Score est de %d\n",Score1);


        printf("\nJoueur 2 \n");
;
        scoreTmp2= playerTurn(nbdes);
        Score2=Score2+scoreTmp2;
        printf(" Joueur 2,Votre Score est de %d\n",Score2);


	}
    }

    if ((Score1 >=30) && (Score2 >= 30)) {

        printf("\nEgalite !");

    }

    else if (Score2 >=30) {

        printf("\nLe joueur 2 a gagner !");

    }

    else if (Score1 >=30) {

        printf("\nLe joueur 1 a gagner !");

    }

  }

