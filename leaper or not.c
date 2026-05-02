#include<stdio.h>
int main ()
{
    int year;
    printf(" Enter the  Year:");
    scanf("%d",&year);
    if( (year%400==0) || (year%4==0 && year %100 !=0) )
    {
       printf("  The %d is Leap Year\n",year);
    }
    else
    {
        printf(" %d is not leap year ",year);
    }

}
