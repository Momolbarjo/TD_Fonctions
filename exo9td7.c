#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Il faut utiliser la foncrtion (rand()%6)+1



int throwDice(int res)
{

    res=(rand()%6)+1;

    return(res);

}


int playerTurn(nbdes)
{

    int nbdes,score;

    printf("Voulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);


    if (nbdes!==1 ||nbdes!==2) {


     printf("Erreur,Voulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);


    }

    else
    {

        return (nbdes);

    }


    if (nbdes==1)
    {


        throwDice (int res);
        printf()


    }


    if (nbdes==2)
    {

        throwDice (int res);
        throwDice (int res2);


        score= throwDice(res) + throwDice ( res2)


    }
}



int playerTurn2(nbdes)
{

    int nbdes,score;

    printf("Voulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);


    if (nbdes!==1 ||nbdes!==2) {


     printf("Erreur,Voulez vous lancer 1 ou 2 dés: " );
    scanf("%d",&nbdes);


    }

    else
    {

        return (nbdes);

    }


    if (nbdes==1)
    {


        throwDice (int res);
        printf()


    }


    if (nbdes==2)
    {

        throwDice (int res);
        throwDice (int res2);

        if( throwDice (int res)!==throwDice (int res2))
        {

        score= throwDice(res) + throwDice ( res2);

        return(score)


    }

        else
        {

         score= throwDice(res) + throwDice ( res2);





        }
}


