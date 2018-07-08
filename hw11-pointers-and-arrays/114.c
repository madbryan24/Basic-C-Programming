#include<stdio.h>
void reverseindex(int a[],int n);
void reverseptr(int* ptr,int n);
int main()
{
    int array[5]={1,2,3,4,5};
    int array1[5]={6,7,8,9,0};
    int* ptr=array1;
    int i;
    reverseindex(array,5);
    reverseptr(ptr,5);
    printf("the inverse version of the first array is: ");
    for(i=0;i<5;i++){
    printf("%2d",array[i]);}
    printf("\n");
    printf("the inverse version of the second array is: ");
    for(i=0;i<5;i++){
    printf("%2d",array1[i]);}
    return 0;
}
void reverseindex(int a[],int n)
{
    int re,i;
    for(i=0;i<n/2;i++)
    {
        re=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=re;
    }
}
void reverseptr(int* ptr,int n)
{
    int re,i;
    for(i=0;i<n/2;i++)
    {
        re=*(ptr+i);
        *(ptr+i)=*(ptr+n-i-1);
        *(ptr+n-i-1)=re;
    }
}
