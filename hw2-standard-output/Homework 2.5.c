#include<stdio.h>
#define m "monday"
#define t "tuesday"
#define w "wednesday"
#define h "thursday"
#define f "friday"
#define s "saturday"
#define u "sunday"


int main()
{
    int overnight,three_day,weekly,Cost;
    char day;
    printf("Please enter the day you started to rent: ");
    scanf("%c",&day);
    if(day=='m')
    {
        printf("You started to rent on %s \n",m);
    }

    else if(day=='t')
    {
        printf("You started to rent on %s \n",t);
    }

    else if(day=='w')
    {
        printf("You started to rent on %s \n",w);
    }
    else if(day=='h')
    {
        printf("You started to rent on %s \n",h);
    }
    else if(day=='f')
    {
        printf("You started to rent on %s \n",f);
    }
    else if(day=='s')
    {
        printf("You started to rent on %s \n",s);
    }
    else
    {
        printf("You started to rent on %s \n",u);
    }
    printf("Now please enter the number of Overnight you have rented: ");
    scanf("%d",&overnight);
    printf("Now please enter the number of Three-day you have rented: ");
    scanf("%d",&three_day);
    printf("Now please enter the number of Weekly you have rented: ");
    scanf("%d",&weekly);
    Cost = overnight*7 + three_day*5 + weekly*3;
    printf("Your total cost of renting the DVDs is %d$",Cost);
return 0;
}
