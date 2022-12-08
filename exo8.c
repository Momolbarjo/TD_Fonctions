/* 1) Lors du succès, la fonction retourne le nombre d'objets provenant de la liste d'arguments qui ont pu bien etre lu*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 1000



int askUserInt (int min, int max)
{
  srand(time(NULL));

  min=rand()%MAX;
  max=(rand()%MAX)+MAX;

  printf(" Le minimum est de %d , le maximum est de %d",min,max);

  int ValeurUtilisateur;
  printf("\nEntrez une valeur entre le minimum et le maximum:");
  scanf("%d",&ValeurUtilisateur);


  if (ValeurUtilisateur <min || ValeurUtilisateur >max)


    {
      printf("\nErreur, la valeur n'est pas dans l'intervalle\n");
      printf("Entrez une valeur entre le minimum et le maximum:");
      scanf("%d",&ValeurUtilisateur);



    }

  return(ValeurUtilisateur);









}


void main()
{
    int min=0;
    int max=0;

    askUserInt( min,  max);

    printf("Bravo !");
     /*2)int a;
    int b;
    int c;
    printf("Entrez un caractere :");
    a=scanf("%d",&b);
    a=0;
    printf("\na=%d\n",a);
    printf("Entrez un entier :");
    a=scanf("%d",&c);
    a=1;
    printf("\na=%d\n",a);*/

}
