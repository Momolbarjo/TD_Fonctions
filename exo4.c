#include <stdio.h>
#include <stdlib.h>

int Somme(int a,int b) {

int somme=0,i;

scanf("%d",&a);
scanf("%d",&b);

if (a>b) {

    printf("Erreur SKRU, merci d'avoir a<b");
    printf("\nEntrez 2 valeurs: ");
    scanf("%d",&a);
    scanf("%d",&b);

}

if (a<b) {

    for(a;a<=b;a++){

   somme=somme+a;
    }

    printf("La somme de tous les entiers entre vos 2 valeurs est %d",somme);
     return(somme);


}

 else if (a=b) {
somme=a+b;
    printf("La somme de tous les entiers entre vos 2 valeurs est %d",somme);
      return(somme);

    }

}

void main() {

int a,b,somme;

printf("Entrez 2 valeurs: ");

Somme(a,b);

}
