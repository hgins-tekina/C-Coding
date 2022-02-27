//Given a String S, reverse the string without reversing its individual words. Words are separated by whitesspaces.

#include <stdio.h>
int main()
{
    char sen[51];
    printf("Enter the Sentence you want to reverse:");
    fgets(sen,51,stdin);
    printf("Reversed Sentence:");
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
        if(sen[i]==' ')
        {
            char word[d-i-1];
            for(int j=i+1, k=0; j<d; i++, k++)
            {
                word[k]=sen[i];
            }
            puts(word);
            printf(" ");
            d=i;
        }
    }
    for(i=0;i<x;i++)
    {
        printf("%c",sen[i]);
    }
    return 1;
}
