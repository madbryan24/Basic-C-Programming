#include<stdio.h>
typedef struct date
{
    int year,month,day;
}datet;
datet readdate();
int comparedate(datet d1,datet d2);
int main()
{
    datet d1,d2;
    d1=readdate();
    d2=readdate();
    comparedate(d1,d2);
    if(comparedate(d1,d2)==-1)  printf("date 1 is before date 2 \n");
    else if(comparedate(d1,d2)==1)  printf("date 1 is after date 2 \n");
    else if(comparedate(d1,d2)==0) printf("date 1 is exact date 2 \n");
    return 0;
}
datet readdate()
{
    datet date;
    printf("please enter the year: ");
    scanf("%d",&date.year);
    printf("please enter the month: ");
    scanf("%d",&date.month);
    while(date.month<1 || date.month>12)
    {
        printf("wrong number, please try again: ");
        printf("please enter the month: ");
        scanf("%d",&date.month);
    }
        printf("please enter the day: ");
        scanf("%d",&date.day);
        if(date.month==1 ||date.month==3 ||date.month==5 ||date.month==7 ||date.month==8 ||date.month==10 ||date.month==12)
        {
            while(date.day<1 || date.day>31)
            {
                printf("wrong number, please try again: ");
                printf("please enter the day: ");
                scanf("%d",&date.day);
            }
        }
        else if(date.month==4 ||date.month==6 ||date.month==9 ||date.month==11)
        {
            while(date.day<1 || date.day>30)
            {
                printf("wrong number, please try again: ");
                printf("please enter the day: ");
                scanf("%d",&date.day);
            }
        }
        else if(date.month==2)
        {
            while(date.day<1 || date.day>29)
            {
                printf("wrong number, please try again: ");
                printf("please enter the day: ");
                scanf("%d",&date.day);
            }
        }
        return date;
    }
int comparedate(datet d1,datet d2)
{
    if(d1.year<d2.year)  return -1;
    else if(d1.year>d2.year)  return 1;
    else if(d1.year==d2.year)
    {
        if(d1.month<d2.month)  return -1;
        else if(d1.month>d2.month)  return 1;
        else if(d1.month==d2.month)
        {
            if(d1.day<d2.day)  return -1;
        else if(d1.day>d2.day)  return 1;
        else if(d1.day==d2.day)  return 0;
        }
    }
}

