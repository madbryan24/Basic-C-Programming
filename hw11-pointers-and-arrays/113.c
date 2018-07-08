#include<stdio.h>
void subarray(int* ptr,int n);
int main()
{
    int array[5]={1,2,3,4,5};
    int* ptr=array;
    subarray(ptr,5);
    return 0;
}
void subarray(int* ptr,int n)
{
    int i,j,x=0;
    while(x<n)
    {
        for(i=x;i<n;i++)
        {
            for(j=x;j<=i;j++)
            {
                printf("%2d",*(ptr+j));
            }
            printf("\n");
        }
        x++;
    }
}


