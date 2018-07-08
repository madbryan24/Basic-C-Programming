#include<stdio.h>
#include<ctype.h>
#include<string.h>
int spacecounter(char string[]);
int main()
{
    char string[100];
    printf("please enter a string: ");
    gets(string);
    printf("the number of blanks is: %d \n",spacecounter(string));
    return 0;
}
int spacecounter(char string[])
{
    int i=0,count=0;
        for(i=0;i<strlen(string);i++)
        {
            if(isspace(string[i]))
            {count++;}
        }
        return count;
}
