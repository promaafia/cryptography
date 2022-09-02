#include<stdio.h>

int main()

{
    char p[20],q[20][20];
    int i,j,k=0,key,length,row,filler,r;

    printf("Enter Plain text=");
    gets(p);
    printf("enter the key: ");
    scanf("%d",&key);
    length=strlen(p);
    r=length%key;

    if(r!=0)
    {
        row=((length/key)+1);
        filler=key-r;
        for(i=0;i<filler;i++)
        {
            p[length]='x';
            length++;
        }
    }
    else{
        row=length/key;
        filler=0;
    }
    printf("the number of filler is=%d\n",filler);

    for(i=0;i<row;i++)
    {
        for(j=0;j<key;j++)

        {

            q[i][j]=p[k];
            k++;
        }

        }
         for(i=0;i<row;i++)
    {
        for(j=0;j<key;j++)

        {
printf("%c",q[i][j]);

        }
        printf("\n");

        }

  for(j=key-1;j>=0;j--){
      for(i=0;i<row;i++)
    {

        {
printf("%c",q[i][j]);

        }
    }
  }
}
