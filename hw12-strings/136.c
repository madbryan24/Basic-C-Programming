#include<stdio.h>
#include<ctype.h>
#include<string.h>
void findproduct(char string1[],char string2[]);
void main()
{
    char product[5][100]={"TV127  31 inch Television","CD057  CD Player","TA877  Answering Machine","CS409  Car Stereo","PC655  Personal Computer"};
    char find[100];
    printf("TV127  31 inch Television \n CD057  CD Player \n TA877  Answering Machine \n CS409  Car Stereo \n PC655  Personal Computer \n");
    printf("please enter the key: ");
    gets(find);
    findproduct(find,product);
}
void findproduct(char string1[],char string2[])
{
    int i=0,j=0,k=0;
    for(i=0;i<strlen(string1);i++)
    {
        for(k=0;k<5;k++)
        while(string1[i]!=string2[k][j])
        {j++;}
        printf("%s",string2[k][j]);
    }
}
