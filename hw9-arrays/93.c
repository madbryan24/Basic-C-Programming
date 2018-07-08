#include<stdio.h>
int n;
void sort(int a[]);
void sort2(int a[]);
void sort(int a[]){
  int i,j,c;
  for (i =1; i <=n; i++){
    for (j =1; j<= n; j++){
        if (a[i] > a[j]) {
            c = a[i];
            a[i] = a[j];
            a[j] = c;
        }
    }
  }
}
void sort2(int a[]){
    int i,j,c;
    for (i =1; i <=n; i++){
      for (j =1; j<= n; j++){
        if ((a[i] %2 ==1) & (a[j] % 2 ==1) &(a[i] > a[j])){
            c = a[i];
            a[i] = a[j];
            a[j] = c;
        }
        }
    }
}
void main(){
  int a[101],b[101];
  int i;
  printf("Enter size of array : ");
  scanf("%d", &n);
  printf("Enter the array : ");
  for (i =1; i<= n; i++){
    scanf("%d",&a[i]);
    b[i] = a[i];
  }
  sort(a);
  printf("array by the decreasing order: ");
  for (i =1; i<= n; i++){
        printf("%d ",a[i]);
    }
  sort2(b);
  printf("\narray with odd elements in the decreasing order: ");
  for (i =1; i<= n; i++){
    if(b[i]%2==1)
    {printf("%d ",b[i]);}
    }
}
