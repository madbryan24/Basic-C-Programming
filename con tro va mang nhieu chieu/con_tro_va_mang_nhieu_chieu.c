#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j;
    int *p;
    // cung cap bo nho cho con tro
    p=(int*)malloc(2*3*sizeof(int));
    // khai bao gia tri cua mang
    // scanf("%d",&a[i][j]) &a[i][j] <=> ( p + socot * i + j )
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            scanf("%d",(p+3*i+j));
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ",*(p+3*i+j));
        }
        printf("\n");
    }
    return 0;
}
