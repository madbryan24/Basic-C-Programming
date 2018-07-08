#include<stdio.h>
#include<ctype.h>
#include<string.h>
void firstname(char string1[],char string2[]);
void main()
{
    char name[100],first[100]="";
    printf("please input the string: ");
    gets(name);
    firstname(name,first);
    printf("the first name is: %s \n",first);
}
void firstname(char string1[],char string2[])
{
    int i=0,j=0;
    while(string1[i]!=' ')
    {
        string2[i]=string1[i];
        i++;
    }
}

