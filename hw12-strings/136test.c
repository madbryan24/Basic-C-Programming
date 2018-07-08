#include<stdio.h>
#include<string.h>
int main() {
    int i,j;
    char product[5][30]={"TV127 31 inch Television","CD057 CD Player","TA877 Answering Machine","CS409 Car Stereo","PC655 Personal Computer"};
    char s[6],result[30];
    char *g;
    printf("TV127  31 inch Television \nCD057  CD Player \nTA877  Answering Machine \nCS409  Car Stereo \nPC655  Personal Computer \n");
    printf("please enter part or all of product number: ");
    gets(s);
    for(i=0;i<5;i++)
    {
        g=strstr(product[i],s);
        if(g==NULL)
            continue;
        else
        {
            for(j=6;j<strlen(product[i]);j++)
                printf("%c",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
