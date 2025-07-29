#include <stdio.h>
int n,s=0,v;
int main()
{
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nMultiplication Table for %d:",n);
    for (int i = 1; i<=12; i=i+1 )
    {
        v=n*i;
        printf("\n%d x %d = %d",n,i,v);
    }
}