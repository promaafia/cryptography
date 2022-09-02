#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q,e,n,m,c,phin,d;

    cout<<"p = ";
    cin>>p;
    for(int i = 0; i <= p; ++i)
    {
      if(p % i == 0);
    }
    cout<<"q = ";
    cin>>q;
    for(int i = 0; i <= q; ++i)
    {
      if(q % i == 0);
    }
    cout<<"e = ";
    cin>>e;

    n = p*q;

    phin = (p-1)*(q-1);
    cout<<"m = ";
    cin>>m;
    for(int i=0;i<10;i++)
    {
        if((phin*i+1)%e==0)
        {
            d = (phin*i+1)/e;
            break;
        }
    }
    c = ((((m,e/2))%n)*((m,(e/2+1))%n))%n;
    cout<<"d = "<<d<<endl;
    cout<<"c = "<<c<<endl<<endl<<"Decryption"<<endl;
}
