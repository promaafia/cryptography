#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>

using namespace std;


int sq(int v, int p)
{
    int i, result=1;

    for(i=1; i<=p; i++)
    {
        result=result*v;
    }

    return result;

}

int main()
{

    int q, a;
    int xa, xb;
    int ya, yb;
    int yaba, yabb;


    printf("Enter q, a: ");
    scanf("%d %d", &q, &a);

    printf("Enter Xa, Xb: ");
    scanf("%d %d", &xa, &xb);


/* public key generate by user A and B */
    ya = sq(a, xa)%q;
    yb = sq(a, xb)%q;

    printf("Ya = %d and Yb= %d\n", ya, yb);

/* Key generete by user A and B */
    yaba = sq(yb, xa) % q;
    yabb = sq(ya, xb) % q;

    if(yaba==yabb)
    {
        printf("Secret Key: %d\n", yaba);
    }
    else
    {
        printf("Secret doesn't match\n");
    }






    return 0;
}
