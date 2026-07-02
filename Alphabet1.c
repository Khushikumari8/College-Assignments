//C program that will accept an english alphabet letter and print its position in english alphabet.
#include<stdio.h>
int main()
{
    char ch;
    int position;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
        // for capital letters
    if(ch>='A'&& ch <= 'Z')
    { 
        position = ch - 'A'+ 1;
        printf("position of capital %c is %d\n",ch,position);
    }
     // for small letter
     else if(ch >= 'a'&& ch <= 'z')
        {
            position = ch - 'a' + 1;
            printf("position of small %c is %d\n",ch,position);
        }
    else 
        printf("\n Not an alphabet");
    return 0;
}
    
    



