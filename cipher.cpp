#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    ch+=3;

    if(ch>97 && ch>122)
    {
        ch=ch%122+96;
    }
    else if(ch>90 && ch<97)
    {
        ch=ch%90+64;
    }
    printf("%c", ch);

    return 0;
}
