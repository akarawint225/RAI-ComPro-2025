#include <stdio.h>
char name[20],grade;
float cal,phy,sci,avg;
int main()
{
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your Calculus score:");
    scanf("%f",&cal);
    printf("Enter your Physic score:");
    scanf("%f",&phy);
    printf("Enter your Science score:");
    scanf("%f",&sci);
    avg = (cal + phy + sci)/3;
    if (avg>=80)
    {
        grade = 'A';
    }
    else if(avg>=70)
    {
        grade = 'B';
    }
    else if(avg>=60)
    {
        grade = 'C';
    }
    else if(avg>=50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("%s, your average is %.2f. You got grade %c.",name,avg,grade);
}