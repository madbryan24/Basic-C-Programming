#include<stdio.h>
void main(){
  int i,j,k;
  int a[4][4], b[4][4],c[4][4]={0};
  printf("Enter the matrix A: \n");
  for (i= 1; i<= 3; i++){
    for (j= 1; j<= 3; j++){
        scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the matrix B: \n");
  for (i= 1; i<= 3; i++){
    for (j= 1; j<= 3; j++){
        scanf("%d",&b[i][j]);
    }
  }
  for (k= 1; k<= 3; k++){
      for (i= 1; i<= 3; i++){
        for (j= 1; j<= 3; j++){
            c[i][k] += a[i][j] * b[j][k];
        }
      }
  }
  printf("Matrix C = A*B = \n");
  for (i= 1; i<= 3; i++){
    for (j= 1; j<= 3; j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}
