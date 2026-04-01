#include<stdio.h>
int main(){
    int sum=0, sumood=0,sumeven=0,i,n;
    printf("Enter The Array Length:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter The value of Array:\n");
    for(i=0;i<n;i++){
         scanf("%d",&arr[i]);

         sum=sum+arr[i];
         if (arr[i]%2==0){
            sumood=sumood+arr[i];
         }
         else{
            sumeven=arr[i]+sumeven;
         }

    }
    printf("Sum of Array is:%d\n",sum);
    printf("Sum of Evenvalue is:%d\n",sumood);
    printf("Sum of Oddvalue is:%d\n",sumeven);







}
