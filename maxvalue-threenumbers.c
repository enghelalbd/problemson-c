#include<stdio.h>
int main ()
{
    int a,b,c;
    printf(" Enter The numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("%d Is Grater  ",a);
    }
    else if(b>a&&b>c)

    {
       printf("%d Is Grater then ",b);
    }
    else
        printf(" The largest value is %d",c);

}
