#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


void CompareNumber (int a,int b) 
{



b=rand()%101;
srand(time(NULL));


for (int i=1;i<=11;i++) 
 {
    scanf("%d",&a);
   if(a<b) {

        printf("Plus grand \n");

        if (i==11)
        {

            printf("sale merde ta perdu");
        }


 }

    else if(a>b) 
    {

        printf("Plus petit\n");


        if (i==11)
        {

            printf("sale merde ta perdu");
        }



   }

    else if (a==b) 
    {

        printf("Trouve !");

        break;

    }

printf("\n");



 }

}












void main () 
{


srand(time(NULL));

int a,b;


 printf("Quel est la valeur secrete :");


    CompareNumber(a, b);



}
