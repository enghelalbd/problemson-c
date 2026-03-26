
#include <stdio.h>

int main() {
    int a, b, c,sum,avg;
    printf(" Enter the value:");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg =sum/3;
    printf("Sum is =%d\n",sum);
    printf("Average is :%d",avg);

    return 0;
}