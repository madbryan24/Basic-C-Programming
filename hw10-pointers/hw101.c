#include<stdio.h>
int main()
{
    int a,b,c;
    int* ptr=NULL;
        printf("enter the value: ");
        scanf("%d",&a);
        ptr=&a;
        printf("the integer number entered is: %p \n",*ptr);
        printf("enter the value: ");
        scanf("%d",&a);
        ptr=&a;
        printf("the integer number entered is: %p \n",*ptr);
        printf("enter the value: ");
        scanf("%d",&a);
        ptr=&a;
        printf("the integer number entered is: %p \n",*ptr);
    return 0;
}
