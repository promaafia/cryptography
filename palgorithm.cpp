#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[100], key[100], keyTemp[100];

    int i, j, k, slen, klen;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter string: ");
    scanf("%s", keyTemp);


//    cout<<str<<endl;
//    cout<<key<<endl;

    slen = strlen(str);

    strcpy(key,keyTemp);

    klen = strlen(key);

    while(klen<slen)
    {
        strcat(key,keyTemp);
        klen=strlen(key);


    }

//    cout<<str<<endl;
//    cout<<key<<endl;


    for(i=0; i<slen; i++)
    {
        str[i]=(str[i]+key[i]-65);

        if(str[i]>90)
        {
            str[i] = (str[i]%91)+65;
        }
    }

    cout<<"Encrypt: "<<str<<endl;



    for(i=0; i<slen; i++)
    {
        str[i]=(str[i]-(key[i]-65));

        if(str[i]<65)
        {
            str[i] = 90-(65-1-str[i]);     // (str[i]%91)+65;
        }
    }


    cout<<"Decrypt: "<<str<<endl;

}
