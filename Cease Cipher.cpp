#include <iostream>
#include <cstring>
using namespace std;

int main ()

{

   string s;
   int i,k;

   while (1)

   {


   cout<<"Enter Text:";
   cin>>s;
   cout<<"Enter Value:";
   cin>>k;

   int l=s.length();

   for (i=0;i<=l;i++)

   {
       int a=s[i]+k;

   if (a>122 || a<90)

   {

       s[i]=a-6;
   }

   else if (a<=122 ||  a>=90)

   {

       s[i]=a;
   }


   }


   cout<<s;
   return 0;


}


}
