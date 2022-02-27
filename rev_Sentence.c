//Given a String S, reverse the string without reversing its individual words. Words are separated by whitesspaces.

#include <stdio.h>
int rev(char sen[]);
int main()
{
    char sen[51];
    printf("Enter the Sentence you want to reverse:");
    gets(sen);
    rev(sen);
    return 1;
}

int rev(char sen[])
{
    int i,d,x;
    do
    {
        if(sen[i]=='\0')
        d=i;
        i++;
    }while(sen[i]!='\0');
    x=d;
    for(i=d-1; i>=0; i--)
    {
        char word[21];
        if(sen[i]==' ')
        {
            for(int j=i+1, k=0; j<d; i++, k++)
            {
                word[k]=sen[i];
            }
            printf("%s ",word);
            d=i;
        }
    }
    for(i=0;i<x;i++)
    {
        printf("%c",sen[i]);
    }
    return 1;
}
