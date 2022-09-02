#include<stdio.h>
#include<string.h>

int main()

{
    int c,p=0,e,i,f=0,q;
    char a[20],b[20],d[20],x,l[20],k[20];
    printf("Enter Messages to Encrypt: ");
    gets(b);
    c=strlen(b);

    printf("Enter Key:");
    gets(a);
    e=strlen(a);

    if(b[0]<97)
    q=65;

    else

    q=97;
    for(i=0;i<c;i++)
{
    if(f<e && (b[i]-q)+(a[f]-q)<26)
        {
       x=b[i]+(a[f]-q);
       l[i]=x;
       k[i]=a[f];
       f++;
        }
    else
        {
        f=0;
        i=i-1;
        }
}
    for(i=0;i<c;i++)
    {
    printf("%c",l[i]);
    }
}
