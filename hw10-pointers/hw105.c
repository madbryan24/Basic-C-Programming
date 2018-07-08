#include<stdio.h>
void swapvalue(int *ptr1,int *ptr2,int *ptr3);
void swappointer(int **ptr1,int **ptr2,int **ptr3);
int main()
{
    int x,y,z;
    int *p=&x,*q=&y,*r=&z;
    int **a=&p,**b=&q,**c=&r;
    printf("please enter the value of x-y-z: ");
    scanf("%d%*c%d%*c%d",&x,&y,&z);
    printf("the value of x,y,z are: %d,%d,%d \n",x,y,z);
    printf("the value of p,q,r are: %p,%p,%p \n",p,q,r);
    printf("the value of *p,*q,*r are: %d,%d,%d \n",*p,*q,*r);
    swapvalue(p,q,r);
    printf("the value of x,y,z are: %d,%d,%d \n",x,y,z);
    printf("the value of p,q,r are: %p,%p,%p \n",p,q,r);
    printf("the value of *p,*q,*r are: %d,%d,%d \n",*p,*q,*r);
    swappointer(a,b,c);
    printf("the value of x,y,z are: %d,%d,%d \n",x,y,z);
    printf("the value of p,q,r are: %p,%p,%p \n",p,q,r);
    printf("the value of *p,*q,*r are: %d,%d,%d \n",*p,*q,*r);
    return 0;
}
void swapvalue(int *ptr1,int *ptr2,int *ptr3)
{
    int rt;
    rt=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    *ptr3=rt;
}
void swappointer(int **ptr1,int **ptr2,int **ptr3)
{
    int **rt;
    *rt=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    *ptr3=*rt;
}
