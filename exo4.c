#include <stdio.h>
#include <stdlib.h>

int Somme(int a,int b) {

int somme=0,i;

scanf("%d",&a);
scanf("%d",&b);


if (a<b) {

    for(int i=a;i<=b;i++){

   somme=somme+i;
    }

    printf("La somme de tous les entiers entre vos 2 valeurs est %d",somme);
     return(somme);


}



 if (a=b) {

    for(int i=a;i<=b;i++) {

    i=a+b;
    printf("La somme de tous les entiers entre vos 2 valeurs est %d",i);
      return(i);

    }

}
 if (a>b) {

for(int i=b;i<=a;i++){



    somme=somme+1;

 }
    printf("La somme de tous les entiers entre vos 2 valeurs est %d",somme);

    return(somme);

}

}




void main() {

int a,b,somme;

printf("Entrez 2 valeurs: ");

Somme( a, b);



}


