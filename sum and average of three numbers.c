#include<stdio.h>
int main (){

int a ,b,c,sum,average;
float  fsum,faverage;
printf(" Enter The value :\n");
scanf("%d%d%d",&a,&b,&c);
average =(a+b+c)/3;
sum =(a+b+c);
fsum=(float)(a+b+c);
faverage=(float)(a+b+c)/3;

printf(" Sum is %d and Average is  using integer:  %d \n",sum,average);
printf(" Sum is %.2f and Average is  using Float:  %.2f ",fsum,faverage);
}
