#include <stdio.h>
int main()
{
    char a;
    printf("character:");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
    {
        printf("It's a uppercase character");
    }
    else if(a >= 'a' && a <= 'z')
    {
        printf("It's a lowercase character");
    }
    else{
        printf("Invalid Input");
    }
}
