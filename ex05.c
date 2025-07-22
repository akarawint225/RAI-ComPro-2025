#include <stdio.h>
float h,r,v;
int main()
{
    printf("Enter cone hight: ");
    scanf("%f",&h);
    printf("Enter cone base radius: ");
    scanf("%f",&r);
    printf("%f %f",h,r);
    v = ((0.333333333)*(3.14285714)*(r*r)*h);
    printf("Cone volume = %.1f\n",v);
    if(v>260)
    {
       printf("This cone is perfect for Supun project"); 
    }
    else
    {
        printf("This cone is not fit for this project"); 
    }
}