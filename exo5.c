#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getNote()
{

int N;

scanf ("%d",&N) ;


while (N <0 || N>20){
printf("Erreur, Veuillez Saisir un entier positif entre 0 et 20 \n" ) ;
scanf ("%d",&N) ;
}

return N;
}

float average(int N)
{
float moy_note=0;
float sum_note = 0;
float tmp = 0;


    for (int i=0;i<=N-1;i++)
    { tmp = getNote();
      sum_note = sum_note + tmp ; }

    return (sum_note/N);

}



void main ()
{

    int N;
    float a;

    srand(time(NULL));
    N= (rand()%6)+5;
    printf("Entrez %d notes entre 0 et 20 : \n",N);
    a = average(N);
    printf("votre moyenne : %f ",a);








}
