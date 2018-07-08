#include <stdio.h>
void main()
{
  int a[101];
  int i,n,sum=0,Min;
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("Enter the array : ");
  for (i=0; i<n; i++){
    scanf("%d",&a[i]);
    if (a[i] % 2 == 1) sum += a[i];
  }
  Min=a[0];
  for (i=1; i<n; i++)
    if (a[i] < Min) Min = a[i];
  printf("Sum of the odd number in the array : %d\n",sum);
  printf("The minimum value of the array is : %d\n",Min);
}
























