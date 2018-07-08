#include<stdio.h>

int main()

{
    float d;
    printf("please enter your degree: ");
    scanf("%f",&d);
    if(d>=0 && d<90)
    {
        printf("You are in the North East \n");
    }
    else if(d>=90 && d<180)
    {
        printf("You are in the North West \n");
    }
    else if(d>=180 && d<270)
    {
        printf("You are in the South West \n");
    }
    else if(d>=270 && d<360)
    {
        printf("You are in the South East \n");
    }
    else
    {
        printf("Degree does not exist \n");
    }
    return 0;
}
