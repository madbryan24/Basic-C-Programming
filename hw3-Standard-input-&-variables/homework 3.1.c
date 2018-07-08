#include<stdio.h>
int main()
{
    int i;
    double d;
    printf("Enter the value of i and d following this form i-d: ");
    scanf("%d%-%lf",&i,&d);
    printf("The value of i and d are: %d and %f \n",i,d);
    return 0;
}
