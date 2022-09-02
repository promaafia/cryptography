#include <iostream>
# include <math.h>
using namespace std;


int main ()

{

 int p,q,e,m,n,fn,d,c=1,c1=1;
 float ct,pt,pp;

 cout<<"Enter First Prime Number P:";
 cin>>p;

 cout<<"\nEnter Second Prime Number Q:";
 cin>>q;

  cout<<"\nEnter GCD Value E:";
  cin>>e;


  cout<<"\nEnter Plain Text:";
   cin>>m;

 n=p*q;
 fn=(p-1)*(q-1);

e=e%fn;
for (int i=1; i<fn; i++)
{
    if ((e*i) % fn == 1)
    {
         d=i;
    }

}

cout<<"\nD:"<<d;


for (int i=1;i<=e;i++)
{
         c=c*m;
         c=c%n;

}

cout<<"\nCipher Text:"<<c;


for (int i=1;i<=d;i++)
{
         c1=c1*c;
         c1=c1%n;

}

cout<<"\nPlain Text:"<<c1;


 return 0;

}
