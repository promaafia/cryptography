#include<stdio.h>
#include<string.h>

int main()

{
    char str[30],k[27],c[30];
    int i, index, cc = 0, count[26] = {0}, x;

    printf("Enter Plain Text: ");
    gets(str);
    printf("\nEnter Key With 26 Character: ");
    for(i=0;i<26;i++)
        {
            printf("\n%c",i+97);
            k[i]=getch();
            printf("%c",k[i]);
        }
        for(i=0;i<strlen(str);i++)
        {
            index=str[i]-97;
            c[i]=k[index];
        }
     printf("Cipher Text: ");
        for(i=0;i<strlen(str);i++)
        {
            printf("%c",c[i]);
        }
       while (str[cc] != '\0') {
          if (str[cc] >= 'a' && str[cc] <= 'z') {
             x = str[cc] - 'a';
             count[x]++;
          }
          cc++;
       }
       for (cc = 0; cc < 26; cc++)
             printf("%c are %d times\n", cc + 'a', count[cc]);

}
