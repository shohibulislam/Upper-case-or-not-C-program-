#include <stdio.h>
int main()
{
    char a;
    printf("character:");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        printf("It's a lower case character");
    }
    else
    {
        printf("It's a upper case character");
    }
}