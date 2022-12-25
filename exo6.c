#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int max2 (int a, int b)
{


    if  (a<b) {



        return(b);
    }

    else if  (b<a) {




        return(a);
    }


}


int max4 (int a, int b,int c, int d)
{


    int max2(int,int);
    int max1,max3;
    max1=max2(a,b);
    max3=max2(c,d);

    int MAX=max2(max1,max3);
    return (MAX);


}
void main ()
{
    srand(time(NULL));
    int max4 (int , int ,int , int );
    int max2(int,int);
    srand(time(NULL));
    int a=rand();
    int b=rand();
    int c=rand();
    int d=rand();
    int Maxab=max2(a,b);
    int MAX=max4(a,b,c,d);

    printf("a=%d ;b=%d;c=%d;d=%d\n",a,b,c,d);

    max2(a,b);

    printf("Le maximum entre a et b est %d\n",Maxab);

    max4(a,b,c,d);

    printf("Le maximum entre a , b,c et d est %d",MAX);


}
