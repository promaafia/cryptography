#include<bits/stdc++.h>
using namespace std;

int main ()

{
    char str[50],ch;
    int len,x=0;
    cout <<"Enter Messages to Encrypt: " << endl;
    cin >> str;

    cout<<"Encrypted Message Are: "<<endl;
    len = strlen (str);

    while(x<=25)
        {
            for (int i=0; i < len; i++)
        {
        ch=str[i];
        if (ch>='A'&& ch<='Z')
        {
            ch=(((ch-1-'A'+26)%26)+'A');
        }
        str[i]=ch;
    }
    x++;
    cout<<str<<endl;
}
}
