#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[100], strc[100];
    int i, k, len;

    printf("Enter string: ");
    scanf("%s", str);

    strcpy(strc, str);

    printf("Enter k: ");
    scanf("%d", &k);

   len = strlen(str);
  //  printf("%d\n", len);

if(k>0)
{
    for(i=0; i<len; i++)
    {
        strc[i]+=(k%26);

    if(str[i]>=97 && strc[i]>122) //str[i]>97 &&
    {
        strc[i]=strc[i]%122+96;
    }
    else if(str[i]<=90 && strc[i]>90)  // && str[i]<97
    {
        strc[i]=strc[i]%90+64;
    }
    }
}

else if(k<0)
{

    for(i=0; i<len; i++)
    {

        strc[i]+=(k%26);

        if(str[i]>=97 && strc[i]<97)
        {
            strc[i]=122-(96-strc[i]);

        }

        else if(str[i]<=90 && strc[i]<65)
        {
            strc[i]=90-(64-strc[i]);
        }

    }
}


    printf("%s", strc);
    return 0;
}

