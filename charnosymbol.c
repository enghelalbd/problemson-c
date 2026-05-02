#include<stdio.h>
int main(){
char ch;
printf(" Enter the value of Character:\n");
scanf("%c",&ch);

if((ch>='A'&& ch<='a') || (ch>='a' && ch<='z'))
{
    printf("This is a Character:\n");

}
else if(ch>='0'&& ch<='9')

{
   printf("This is Numeric number:\n");
}
else
{
    printf(" The value is  a Symbol:");
}

return 0;

}
