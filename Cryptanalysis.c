#include<stdio.h>
#include<string.h>
int main()

{
    int j=0, len, i;
    char str[80],ch;
    printf("Enter a text to encrypt: ");
    gets(str);
    printf("Output: ");
    len = strlen(str);

    while(j<=25) {
    for (i=0; i < len; i++)
    {
        ch=str[i];
        if (ch>='A'&& ch<='Z')
        {
            ch=(((ch-1-'A'+26)%26)+'A');
        }
        else if (ch >='a'&& ch<='z')
        {
            ch=(((ch-1-'a'+26)%26)+'a');
        }
        str[j]=ch;
    }
    j++;
    printf("%c",str);
    }
}
