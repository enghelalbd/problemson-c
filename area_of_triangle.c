#include<stdio.h>
#define pi 3.14

int main(){
    int a,b,c,s,area;
    printf("Enter the value of lines:\n ");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){
            s=(a+b+c)/2;
    printf("semi-perimeter %d\n",s);
     area =sqrt (s*(s-a)*(s-b)*(s-c));
     printf("The area is:%d\n",area);
    }
    else
        printf("Invalid Lines");

}
