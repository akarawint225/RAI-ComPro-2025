#include <stdio.h>
int n,s=0,i=0;
int main()
{
    while(i<=9)
    {
        i=i+1;
        printf(".Enter the number: ");
        scanf("%d",&n);
        s=s+n;
    }
    printf("Totol sum is %d",s);
}