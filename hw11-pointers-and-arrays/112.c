#include<stdio.h>
double* maximum(double* a, int size)
{
    int i;
    double lonnhat;
    double* max;
    if(size==0){max=NULL;}
    else if(size>0)
    {
        lonnhat=*a;
        for(i=1;i<size;i++)
        {
            if(*(a+i)<lonnhat){lonnhat=*(a+i);}
        }
        max=&lonnhat;
    }
    return max;
}
int main()
{
    double array[5]={1.0,22.0,3.0,4.1,6.4};
    double* ptr=array;
    maximum(ptr,5);
    printf("the number of even number is: %p",maximum(ptr,5));
    return 0;
}
