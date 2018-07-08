#include<stdio.h>
void rotate(int *ptr1,int *ptr2,int *ptr3);
int main()
{
    int a,b,c;
    int *ptr1=&a,*ptr2=&b,*ptr3=&c;
    printf("please enter the value of a-b-c: ");
    scanf("%d%*c%d%*c%d",&a,&b,&c);
    rotate(ptr1,ptr2,ptr3);
    printf("the values of a,b,c are: %d,%d,%d",*ptr1,*ptr2,*ptr3);
    return 0;
}
void rotate(int *ptr1,int *ptr2,int *ptr3)
{
    int rt;
    rt=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    *ptr3=rt;
}
