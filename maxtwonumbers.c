#include<stdio.h>
int main ()
{
    int a,b;
    printf(" Enter The numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d Is Grater then %d \n ",a,b);
    }
    else
    {
       printf("%d Is Grater then %d",b,a);
    }

}
