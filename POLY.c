#include<stdio.h>
int main()
{
char a[20],b[20],d[20],x,l[20],k[20];
int c,p=0,e,i,f=0,q;
printf("enter plaintext:");
gets(b);
c=strlen(b);
printf("enter key:");
gets(a);
e=strlen(a);
if(b[0]<97)
    q=65;
else
    q=97;
//Q=c/e;
for(i=0;i<c;i++)
{

    if(f<e && (b[i]-q)+(a[f]-q)<26){
       x=b[i]+(a[f]-q);
       l[i]=x;
       k[i]=a[f];
       f++;
    }
    else if(f<e && (b[i]-q)+(a[f]-q)>25){
       x=b[i]+(a[f]-q)-26;
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
for(i=0;i<c;i++){
printf("%c",k[i]);
}
printf("\n");
puts(b);
printf("\n");
for(i=0;i<c;i++){
printf("%c",l[i]);
}


return 0;
}
