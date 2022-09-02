#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int len,j=0;
    char str[80],ch;
    cout <<"Enter a Text to Encrypt: " << endl;
    cin >> str;
    cout<<"Output: "<<endl;
    len = strlen (str);

    while(j<=25) {
    for (int i=0; i < len; i++)
    {
        ch=str[i];
        if (ch>='A'&& ch<='Z')
        {
            ch=(((ch-1-'A'+26)%26)+'A');
        }
        else if (ch >='a'&& ch<='z')
        {
            ch=(((ch-1-'a'+26)%26)+'a');
        }
        str[i]=ch;
    }
    j++;
    cout<<str<<endl;
}
}
