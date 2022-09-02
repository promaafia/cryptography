#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[100];
    int slen, colNum, rowNum;
    int i, j, m, n, y;



    printf("Enter string: ");
    scanf("%s", str);

    slen = strlen(str);


    printf("How many column: ");
    scanf("%d", &colNum);

    int key[colNum];
    int keyTemp[colNum];

    printf("Enter the %d column sequence : ", colNum);
    for(i=0; i<colNum; i++)
    {
        scanf("%d", &key[i]);
    }

// take

    int con=1; //count

    for(i=0; i<colNum; i++)
    {
        for(j=0;j<colNum; j++)
        {
            if(key[j]==con)
                break;
        }

        keyTemp[i]=j;
        con++;

    }
/*
//***************see the keyTemp**************************
    for(i=0; i<colNum; i++)
    {
        cout<<keyTemp[i]<<endl;

    }
*/

    rowNum = (slen/colNum);
    if(slen%colNum>0)
        rowNum+=1;


    int a[rowNum][colNum];
    int b[rowNum][colNum];

/* make the matrix with the message*/
    int k=0;
    for(i=0; i<rowNum; i++)
    {
        for(j=0; j<colNum; j++)
        {
            if(str[k]!='\0')
            {
                a[i][j] = str[k++];
                continue;
            }
            else
                a[i][j]='*';
        }
    }


/* print the message in matrix */
    for(i=0; i<rowNum; i++)
    {
        for(j=0; j<colNum; j++)
        {
          printf("%c", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");


/* Transform into Cipher Text by Transposition */

for(m=0; m<colNum; m++)
    {
        y=keyTemp[m];

 //       cout<<y<<endl;

        for(n=0; n<rowNum; n++)
        {
           printf("%c", a[n][y]);
        }
        printf("\n");

    }



/*
    for(m=0; m<colNum; m++)
    {
        y=key[m];

        for(n=0; n<rowNum; n++)
        {
            b[m][n] = a[n][y];
        }
    }


 /* print the CipherTest ***********

 printf("Cipher Text: \n");

    for(i=0; i<rowNum; i++)
    {
        for(j=0; j<colNum; j++)
        {
          printf("%c", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

*/


    return 0;
}
