#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char input[256],chiper[100][100];
    int filler=0;
    cout<<"Text: ";
    cin>>input;
    int len = strlen(input);
    int half = len/4;

    if(len%4==0){
        filler=0;
    } else {
        //filler = 4-(len%4);
        half = half+1;
    }

    int i=0;

        for(int row=0; row<half; row++){
            for(int col=0; col<4; col++){
                if(i>=len){
                    chiper[row][col]='X';
                } else{
                    chiper[row][col]=input[i++];
                }
            }
        }

        for(int row=0; row<half; row++){
            for(int col=0; col<4; col++){
                printf("%c ",chiper[row][col]);
            }

            printf("\n");
        }


        cout<<"output: ";

        for(int row=0; row<4; row++){
            for(int col=0; col<half; col++){
                printf("%c",chiper[col][row]);
            }
        }





    return 0;
}
