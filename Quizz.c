#include <stdio.h>

int main()
{
    float ra,pi,a,l,re,rv;
    pi = 22/7;
    printf ("Enter Radius of Resistor :");
    scanf ("%f",&ra);
    printf ("Enter Length of Resistor :");
    scanf ("%f",&l);
    printf ("Enter Resistivity of Resistor :");
    scanf ("%f",&re);
    a = pi * ra * ra;
    rv = re*l/a;
    printf ("The value off this resister = %.2f OHM",rv);
    return 0;
}