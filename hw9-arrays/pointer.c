#include<stdio.h>
int main()
{
    int array[5]={2,4,6,8,10};
    int const SIZE=5;
    int *vptr;
    int i;
    for(i=0;i<5;i++)
    {
        vptr=array+i;
        printf("%5d",*vptr);
    }
    return 0;

}
