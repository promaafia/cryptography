#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[100], strc[100];
    int i, j, k, len;

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
    printf("%s\n", strc);


cout<<"Crypt Analysis: \n";

if(str[0]<=90)
{
    for(i=1; i<=25; i++)
    {
        for(j=0; j<len; j++)
        {
            strc[j] -= 1;
            if(strc[j]<65)
            {
                strc[j] = 90-(65-strc[j]-1);
            }
        }
        cout<<strc<<endl;
    }
}
else
{
    for(i=1; i<=25; i++)
    {
        for(j=0; j<len; j++)
        {
            strc[j] -= 1;
            if(strc[j]<97)
            {
                strc[j] = 122-(97-strc[j]-1);
            }
        }

        cout<<strc<<endl;
    }

}
    return 0;
}


