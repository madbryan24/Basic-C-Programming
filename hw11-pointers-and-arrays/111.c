#include<stdio.h>
int countEven(int* ptr, int n)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)%2==0)
            count++;
    }
    return count;
}
int main()
{
    int array[5]={1,2,3,4,6};
    int* ptr=array;
    countEven(ptr,5);
    printf("the number of even number is: %d",countEven(ptr,5));
    return 0;
}


