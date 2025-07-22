#include <stdio.h>
int a ;
int main()
{
    printf("Enter a number:");
    scanf("%d",&a);
    if (a>1 && a<100)
    {
        if(a%2==0)
        {
        printf("%d is even",a);
        }
        else
        {
        printf("%d is odd",a);
        }
    }
    else
    {
        printf("%d is out of range",a);
    }
}