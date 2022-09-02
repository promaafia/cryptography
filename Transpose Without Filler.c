#include<stdio.h>
#include<string.h>

int main()

{
    char temp[100]={'\0'}, encr[30][30];
    int i=0, j=0, k=0, z, key, seq[10]={0};

    printf("Enter Plaintext: ");
    gets(temp);
    printf("\nEnter Key: ");
    scanf("%d",&key);

    int len = strlen(temp);
    for(i=0;i<=len/key;i++)
    {
        for(j=0;j<key;j++)
        {
            encr[i][j] = temp[k];
            k++;
        }
    }
    for(i=0;i<=(len/key);i++)
    {
        for(j=0;j<key;j++)
        {
            printf("%c ", encr[i][j]);
        }
        printf("\n");
    }
    printf("\n\nEncrypted Text: ");
    for(i=0;i<key;i++)
    {
        for(j=0;j<key;j++)
        {
            if(seq[j]==i)
            {
                for(z=0;z<=(len/key);z++)
                {
                    if(encr[z][j]!='\0')
                    {
                        printf("%c",encr[z][j]);

                    }
                }
            }
        }
    }
}
