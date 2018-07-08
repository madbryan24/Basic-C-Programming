#include<stdio.h>
#include<ctype.h>
#include<string.h>
void replacing(char string[],char c1,char c2);
int main()
{
    char string[100],c1,c2;
    printf("please input the string: ");
    gets(string);
    printf("please input two letters: ");
    scanf("%c%c",&c1,&c2);
    replacing(string,c1,c2);
    printf("the string is: %s \n",string);
    return 0;
}
void replacing(char string[],char c1,char c2)
{
    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]==c1)
        {string[i]=c2;}
        i++;
    }
}

