#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    int p, q, n, e, d, fin;
    int pu, pr;

    int M, C; //plain text and Cipher Text

    int i;

    printf("Enter p and q: ");
    scanf("%d%d", &p, &q);

    printf("Enter e :");
    scanf("%d", &e);

    n=p*q;
    fin = (p-1)*(q-1);

    printf("fi of n : %d\n", fin);




//This loop is equivalent to " d = (fin+1)/e; "

    for(i=1; i<=n; i++)
    {
     //   if((e*i)==fin+1)
        //break;

        if(((fin*i)+1)%e==0)
        {
            d=((fin*i)+1)/e;
            break;
        }


    }

/*
    for(i=1; i<=100; i++)
    {
        d = (i*(fin+1))/e;
        if((fin+1)%e==0)
            break;
    }
*/
    printf("d and n is : %d, %d\n", d, n);

    printf("Enter plain Text: ");
    scanf("%d", &M);

    printf("M Text: %d\n", M);

    int split= e/2;
    int splitRem = e%2;

 //   printf("split and splitRem: %d %d\n", split, splitRem);

    C=1;

    for(i=1; i<=split; i++)
    {
        //printf("power1 Text: %f\n", pow(M,2));
        C = C*(M*M);
        C = C%n;
 //       printf("Cipher Text: %d\n", C);
    }

 //   printf("Cipher Text: %d\n", C);

    if(splitRem>0)
    C = (int)(C*(M*splitRem))%n;

    printf("Cipher Text: %d\n", C);


/* cipher text to plain text  */
/*
***
**********************************/

    split = d/2;
    splitRem = d%2;

    M=1;

    for(i=1; i<=split; i++)
    {
        //printf("power1 Text: %f\n", pow(M,2));
        M = M*(C*C);
        M = M%n;

//        M = ((M%n)*(C%n)*(C%n))%n;


      //  printf("Cipher Text: %d\n", M);
    }

    if(splitRem>0)
    M = (M*(C*splitRem))%n;

    printf("Plain Text: %d\n", M);

    return 0;
}
