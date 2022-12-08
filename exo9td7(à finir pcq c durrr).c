#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Il faut utiliser la fonction (rand()%6)+1



int throwDice()
{
int res;


    res=(rand()%6)+1;
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
	int resultat1,resultat2;

        resultat1=throwDice();
        resultat2=throwDice();

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
    int score1 =0;
    int score2 =0;
    int nbdes;



    while (score1 <30 ||score2 <30) {

	printf("\nVoulez vous lancer 1 ou 2 des: " );
    	scanf("%d",&nbdes);

	 if (nbdes<1 ||nbdes>2) {


     printf("Erreur! " );



    }
	else
	{


        score1=playerTurn(nbdes);
        printf("\n Joueur 1,Votre score est de %d\n",score1);



        score2=playerTurn(nbdes);
        printf(" Joueur 2,Votre score est de %d\n",score2);


	}
    }

    if (score1 >=30) {

        printf("Le joueur 1 a gagner !");

    }

    else if (score2 >=30) {

        printf("Le joueur 2 a gagner !");

    }

    else if (score1 >=30 && score2 >= 30) {

        printf("Egalite !");

    }

  }


