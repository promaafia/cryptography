# include <iostream>
#include<string>
#include <stdio.h>
using namespace std;

int main ()

{

    string sp,sk,ct;
    int i,j;

    cout<<"Enter Plain Text:";
    cin>>sp;

    cout<<"Enter Key:";
    cin>>sk;


    for (i=0,j=0;i<=sp.length();i++)
    {


      if (j==sk.length())

      {
          j=0;
      }


        printf("%c",(sp[i]-'A')+sk[j++]);


    }


    return 0;


}


