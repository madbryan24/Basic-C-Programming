#include<stdio.h>
int main()
{
    float a,b,c;
    float *ptr;
    printf("please enter the value of a-b-c: ");
    scanf("%f%*c%f%*c%f",&a,&b,&c);
    ptr=&a;
    *ptr +=100.0;
    printf("the value of a is: %f \n",*ptr);
    ptr=&b;
    *ptr +=100.0;
    printf("the value of b is: %f \n",*ptr);
    ptr=&c;
    *ptr +=100.0;
    printf("the value of c is: %f \n",*ptr);
    return 0;
}

