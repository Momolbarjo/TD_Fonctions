#include <stdio.h>
#include <stdbool.h>

bool  prime(int N)  {

int r=0;






for (int i=1; i<=N;i++)
{
    if(N%i==0)

    {
        r++;
     }
}

if (r==2) {




        return (true);
}




 else {




        return (false);
 }

}




  void main () {
int N,i=2,compt=1;

    printf("Entrez un entier N strictement plus grand que 1 :");
    scanf("%d",&N);

while (compt<=N) {

  if(prime(i)==true) {

    printf("%d",i);

    compt=compt+1;

printf("\n");
  }


i=i+1;




}
  }
