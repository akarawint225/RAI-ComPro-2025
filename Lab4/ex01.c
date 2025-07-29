#include <stdio.h>
int n,s=0;
float a;
int main()
{
    for (int i = 1; i<=10; i=i+1 )
    {
        printf(".Enter the number: ");
        scanf("%d",&n);
        s = s+n;
    }
    a=(s/10);
    printf("total sum is %d \n Average is %f",s,a);
}