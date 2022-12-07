#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Il faut utiliser la fonction (rand()%6)+1



int throwDice(int res)
{

    
 
    res=(rand()%6)+1;
    return(res);
    

}

int throwDice2(int res2)
{

    
    res2=(rand()%6)+1;
    return(res2);

}


int playerTurn(int nbdes)
{

    int res=(rand()%6)+1;
    int res2=(rand()%6)+1;

   int  score=0;

    printf("\nVoulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);



    if (nbdes<1 ||nbdes>2) {


     printf("Erreur,Voulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);


    }

    else
    {

        return (nbdes);

    }


    if (nbdes==1)
    {


        throwDice( res);
        score = score + throwDice(res);
        return (score);

    }


    if (nbdes==2)
    {

        throwDice( res);
        throwDice2( res2);

        if (throwDice (res)==throwDice(res2))
            {
                score= score - (throwDice(res) + throwDice2(res2));
                return (score);
            }
        else {

               score= score + (throwDice(res) + throwDice2( res2));
                return (score);
    }
}

int playerTurn2( nbdes){

    int res=(rand()%6)+1;
    int res2=(rand()%6)+1;

   int  score=0;

    printf("\nVoulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);



    if (nbdes<1 ||nbdes>2) {


     printf("Erreur,Voulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);


    }

    else
    {

        return (nbdes);

    }


    if (nbdes==1)
    {


        throwDice(res);
        score = score + throwDice(res);
        return (score);
    }


    if (nbdes==2)
    {

        throwDice(res);
        throwDice2(res2);
}
        if (throwDice (res)==throwDice2( res2))
            {
                score= score - (throwDice(res) + throwDice2(res2));
                return (score);

            }
        else {

               score= score + (throwDice(res) + throwDice2(res2));
                return (score);
        }
    return (score);
}


void main (){
    int score1 =0;
    int score2 =0;
    int nbdes;

    srand(time(NULL));

    while (score1 <30 ||score2 <30) {

        score1=playerTurn(nbdes);
        printf("Joueur 1,Votre score est de %d\n",score1);

        score2=playerTurn2(nbdes);
        printf("Joueur 2,Votre score est de %d",score2);



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
      }
