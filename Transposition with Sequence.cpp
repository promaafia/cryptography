#include<bits/stdc++.h>
using namespace std;

int main()

{
    char in[100],decr[100];
    int str,len,k=0,filln=0;
    cout<<"Input Plaintext: ";
    gets(in);
    cout<<"Input Key Length: ";
    cin>>str;
    cout<<"Input Sequence: ";
    int seq[str],seq2[str],prio=1,seq2n=1;
    for(int seqn=0;seqn<str;seqn++)
        cin>>seq[seqn];

    for(int seqn1=0;seqn1<str;seqn1++)
        for(int seqn=0;seqn<str;seqn++)
        {
            if(seq[seqn]==prio)
            {
                prio++;
                seq2[seqn1]=seqn;
                break;
            }
        }
    len = strlen(in);

    if(len%str==0)
    {
        char encr[len/str][str];
        for(int i=0;i<len/str;i++)
        {
            for(int j=0;j<str;j++,k++)
                encr[i][j] = in[k];
        }
        for(int i=0;i<len/str;i++)
        {
            for(int j=0;j<str;j++)
                cout<<encr[i][j];
            cout<<endl;
        }
        cout<<"Encrypted Text: ";
        for(int j=0;j<str;j++)
        {
            for(int i=0;i<len/str;i++){
                cout<<encr[i][seq2[j]];
                }
        }
    }
    else
    {
		int i=0, j=0;
        char encr[(len/str)+1][str];
        filln = str - (len%str);
        for(i=0;i<(len/str)+1;i++)
        {
            for(j=0;j<str;j++,k++)
                encr[i][j] = in[k];
        }
        i--;

		for(j=str-1;filln>0;j--,filln--)
		{
			encr[i][j] = 'X';
		}

        for(int i=0;i<(len/str)+1;i++)
        {
            for(int j=0;j<(str+filln);j++)
                cout<<encr[i][j];
            cout<<endl;
        }
        cout<<"Encrypted Text: ";
        for(int j=0;j<(str+filln);j++)
        {
            for(int i=0;i<(len/str)+1;i++)
                cout<<encr[i][seq2[j]];
        }
    }
    return 0;
}
