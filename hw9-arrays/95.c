#include<stdio.h>
int n;
int check_sym(int a[],int n);
int check_sym(int a[],int n){
  int i=1;
  while (i < (n/2+1)){
    if (a[i] != a[n]) return 0;
    i ++;
    n --;
  }
  return 1;
}
void main(){
    int i,a[101];
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("Enter the array : ");
  for (i= 1 ;i<= n; i++){
        scanf("%d",&a[i]);
    }
  if (check_sym(a,n) == 1) printf("array is symmetric");
  else printf("array is not symmetric");
}
