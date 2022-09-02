#include <stdio.h>

int main()

{
        char str[100];
        int i, str_len , num;
        printf("Enter the String: ");
        gets(str);
        printf("Enter Key: ");
        scanf("%d", &num);

        str_len = strlen(str);
        for (i =0; i < str_len; i++)
        {
            if(str[i] > 64 && str[i] < 91)
            {
                str[i] = str[i] + num;
                if(str[i] > 90)
                {
                    str[i] = str[i] - 26;
                }
            }
            else
            {
                str[i] = str[i] + num;

                if(str[i] > 122)
                {
                    str[i] = str[i] - 26;
                }
            }
        }
        printf("\nEncrypted String Is: ");
        puts(str);
        return 0;
}
/*
{
    while(1)
    {
        printf("01");
    }
}
*/
