#include<stdio.h>
#include<string.h>
int main()
{
char str[30],key[30],cip[30];
int i,index;


printf("Enter PlainText:");
gets(str);

printf("Enter Character:");


for(i=0;i<26;i++)
{
printf("\n%c",i+97);
key[i]=getch();
printf("%c",key[i]);
}

for(i=0;i<strlen(str);i++)
{
index=str[i]-97;
cip[i]=key[index];
}

printf("\nYour cipher text is:");
for(i=0;i<strlen(str);i++)
{
printf("%c",cip[i]);
}
}

