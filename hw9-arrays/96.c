#include<stdio.h>
int n;
int reverse(float a[],int n);
int reverse(float a[],int n)
{
    int i;
    float rev;
    for(i=0;i<n/2;i++)
    {
        rev=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=rev;
    }
    return 0;
}
void main(){
  int i;
  float a[101];
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("Enter array : ");
  for (i= 0 ;i< n; i++){
        scanf("%f",&a[i]);
    }
    reverse(a,n);
  printf("Reverse version of the array : ");
  for (i= 0 ;i< n; i++){
    printf("%g ",a[i]);
  }

}
