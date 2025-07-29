#include <stdio.h>
int n,s=1;
int main()
{
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i=i+1 )
    {
        s=s*i;
    }
    printf("Factorial of %d is %d",n,s);
}