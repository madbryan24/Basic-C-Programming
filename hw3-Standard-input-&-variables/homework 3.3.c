#include<stdio.h>
int main()
{
    int hour,wages;
    printf("Enter the number of hours you work a week: ");
    scanf("%d",&hour);
    if (hour<40)
    {
        wages=hour*25000;
    }
    else
    {
        wages = (hour-hour%40)*25000 + (hour%40)*40000;
    }
    printf("Your total wages is: %d VND",wages);
    return 0;
}
