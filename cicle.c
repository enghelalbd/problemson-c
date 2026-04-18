#include<stdio.h>
#define pi 3.14
int main(){
float radius,circum,area;
printf("Enter The value of Radious:\n");
scanf("%f",&radius);
circum=2*pi*radius;
printf(" The circum is:%.2f\n",circum);
area=pi*radius*radius;
printf(" The area of Circle is :%.2f",area);

}
