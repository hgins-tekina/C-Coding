#include <stdio.h>
void rev(char str[]);
int main()
{
    printf("Enter the String to be reversed:");
    char str[51];
    gets(str);
    printf("The Reverse of the String is: ");
    rev(str);
}
void rev(char str[])
{
    int i,d;
    do
    {
        if(str[i]=='\0')
        d=i;
        i+=1;
    } while (str[i]!='\0');
    for (i=d-1;i>=0;i-=1)
    {
    printf("%c",str[i]);
    }
}