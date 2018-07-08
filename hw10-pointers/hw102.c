#include<stdio.h>
int main()
{
    int a[7]= {13, -355, 235, 47, 67, 943, 1222} ;
    int* ptr=NULL;
    int i;
    for(i=0;i<5;i++)
       {
        ptr=&a[i];
        printf("the address a[%d] is: %x \n",i+1,ptr);
    }
    return 0;

}
