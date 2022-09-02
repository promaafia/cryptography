#include<stdio.h>
int main()

{
    char p;
    printf("Input: ");
    scanf("%c", &p);
    if (p+3>='a' && p+3<='z')
    {
        printf("Output: %c", p+3);
    }
    else
    {
        printf("Output: %c", p-23);
    }

}
