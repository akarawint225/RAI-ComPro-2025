#include <stdio.h>
int a,b;
int main()
{
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    if (a==b)
    {
        printf("Match");
    }
    else
    {
        printf("Does not match. Try again");
    }
}