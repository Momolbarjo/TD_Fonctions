#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>


void CompareNumber (int a,int b) {



b=rand()%101;
srand(time(NULL));


for (int i=1;i<=10;i++) {
    scanf("%d",&a);
   if(a<b) {

        printf("Plus grand \n");



   }

    else if(a>b) {

        printf("Plus petit\n");


   }

    else if (a==b) {

        printf("Trouve !");



   }

printf("\n");



}

}












void main () {

int a,b;


 printf("Quel est la valeur secrete :");


    CompareNumber(a, b);



}


















