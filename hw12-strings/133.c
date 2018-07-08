#include<stdio.h>
#include<ctype.h>
#include<string.h>
int check(char string[]);
int main()
{
    char string[100];
    printf("please input the string: ");
    gets(string);
    if(check(string)==1)
    {printf("your number is in the right form");}
    if(check(string)==0)
    {printf("your number is in the wrong form");}
    return 0;
}
int check(char string[])
{
    int check=0,i=0;
    for(i=0;i<3;i++)
    {
        if(isalpha(string[i]))
            check=1;
    }
    if (check==1)
    {
        for(i=3;i<7;i++)
        {
            if(isdigit(string[i]))
                check=1;
        }
    }
    return check;
}

