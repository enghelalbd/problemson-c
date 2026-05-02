#include<stdio.h>
int main()
{
    int n;
   printf(" Enter The value:\n") ;
   scanf("%d",&n);

   if(n<=0){
    if(n==0)
    {
        printf("The value is Zero ");

    }
    else{
        printf(" The value is Negative \n");
    }
   }
else
    printf(" The value is Positive \n");

}