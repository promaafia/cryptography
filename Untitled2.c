#include<stdio.h>
#include<string.h>

int main()

{
      char pt[30],c[27],ct[30];
      int i,index;

      printf("Enter Plaintext: ");
      gets(pt);
      printf("Enter Key: \n");
      for(i=0;i<26;i++)
      {
            printf("%c",i+97);
            c[i]=getch();
            printf("%c",c[i]);
      }

      for(i=0;i<strlen(pt);i++)
      {
            index=pt[i]-97;
            ct[i]=c[index];
      }

      printf("\nCipher Text is : ");
      for(i=0;i<strlen(pt);i++)
      {
            printf("%c",ct[i]);
      }
}
