#include<stdio.h>

int main()

{
    char str[100];
    int i,str_len=0;
    int num=3;
    printf("Please Enter the String: ");
    gets(str);

   str_len=strlen(str);
   for (i =0; i < str_len; i++){

            if(str[i] > 64 && str[i] < 91){
                str[i] = str[i] + num;
                if(str[i] > 90){
                    str[i] = str[i] - 26;
                }
                }else{
                str[i] = str[i] + num;
                if(str[i] > 122){
                    str[i] = str[i] - 26;
                }
            }
        }

        printf("Encrypted String Is: ");
        puts(str);
          for (i =0; i < str_len; i++){
            if(str[i] > 64 && str[i] < 91){

                str[i] = str[i] - num;
                 str[i] = str[i] +26;
                if(str[i] > 90){
                    str[i] = str[i] - 26;
                }
                }else{

                str[i] = str[i] - num;


                if(str[i] > 122){
                    str[i] = str[i] - 26;
                }
            }
        }
        printf("Original String Is: ");
        puts(str);

        return 0;
}
