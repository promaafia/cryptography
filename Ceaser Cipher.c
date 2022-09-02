#include<stdio.h>

int main()

{
    char m[25],c;
    int i,k,p,q;
    printf("Please Enter the String: ");
    gets(m);
    printf("Enter the Key :");
    scanf("%d",&k);
    if(m[0]<91)
        {
            p=65;
            q=90;
        }
        else
        {
            p=97;
            q=122;
        }
        for(i=0;m[i]!='\0';i++)
        {
        c=m[i];
        c=c+k;
        if(c>q)
        {
            c=c-q+p-1;
        }
        m[i]=c;
}
    printf("Output String: %s",m);
    for(i=0;m[i]!='\0';i++)
    {
        c=m[i];
        c=c-k;
        if(c<p)
    {
        c=q-(p-c)+1;
    }
    m[i]=c;
}
printf("\nMain String Is: %s",m);
return 0;
}
