#include <stdio.h>
int d;
int main()
{
    printf("Enter a number:");
    scanf("%d",&d);
    switch (d>0 && d <101)
    {
    case 1:
        switch (d%2)
            {
                case 0: printf("%d is even",d);
                break;
                case 1: printf("%d is odd",d);
                break;
            }
        break;
    
    default:
    printf("Out of range");
        break;
    }
}