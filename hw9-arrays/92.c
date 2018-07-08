#include<stdio.h>
int n;
int compare(int a[], int b[]);
void main(){
  int a[101],b[101];
  int i,sum=0,Min;
  printf("Enter size of array(n<=100) : ");
  scanf("%d",&n);
  while(n>100)
  {
      printf("invalid value, please try again \n ");
        printf("Enter size of array(n<=100) : ");
        scanf("%d",&n);
  }
  printf("Enter array 1 : ");
  for (i=1; i<=n; i++){
    scanf("%d",&a[i]);
  }
  printf("Enter array 2 : ");
  for (i=1; i<=n; i++){
    scanf("%d",&b[i]);
  }
  printf("%d",compare(a,b));
}
int compare(int a[], int b[]){
    int i;
    for (i=1; i<=n; i++){
    if (a[i] != b[i]) return 0;
    return 1;
  }
}
