#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int k,len;
    char src[100],ch;

    cout << "Enter a text to encrypt: " << endl;
    cin >> src;
    cout << "Enter key" << endl;
    cin >> k;
    len = strlen (src);
    for (int i=0; i<len; i++)
    {
        ch=src[i];
        if (ch >='A' && ch <='Z')
        {
            ch =(((ch+k-'A'+26)%26)+'A');
        }
        else if (ch>='a'&&ch<='z')
        {
            ch =(((ch+k-'a'+ 26)%26)+'a');
        }
        src[i]=ch;
    }
    cout<<"Encrypted text: "<<src<<endl;

    for (int i=0; i<len; i++)
    {
        ch=src[i];
        if (ch>='A'&&ch<='Z')
        {
            ch=(((ch-k-'A'+26)%26)+'A');
        }
        else if (ch>='a'&&ch<='z')
        {
            ch=(((ch-k-'a'+26)%26)+'a');
        }
        src[i]=ch;
    }
    cout<<"Decrypted text: "<<src;

}
