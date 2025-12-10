#include<stdio.h>
int main()
{
    int len=0;
    char string[100];
    char* p;
    printf("Enter the string : ");
    gets(string);
    p=string;
    while (*p!='\0')
    {
        len++;
        p++;
    }
    printf("the length of the string is %d",len);
    return 0;
}