#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[100]="Bangladesh ";
    char str1[100]="Dhaka";
    char str2[100];
    printf("%d\n",strlen(str));
    printf("%s\n",strcpy(str2,str));
    printf("%s\n",strcat(str,str1));
    printf("%d\n",strcmp(str,str1));
    printf("%s\n",strrev(str1));
    return 0;
}
