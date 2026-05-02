# include<stdio.h>
int main (){
char c;
printf(" Enteer the Chartactr:\n");
scanf("%c",&c);

if((c >='A' && c<='Z') ||(c>='a' && c<='z')){
        printf(" Assci value of C is :%c =%d",c,c);
}
else
    printf("The value is not a Chracter:");
return 0;
}
