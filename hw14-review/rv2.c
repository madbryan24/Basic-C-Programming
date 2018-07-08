#include<stdio.h>
int numofst();
void dataofst(char a1[100][20],char a2[100][9], float a3[100],int n);
void output(char a1[100][20],char a2[100][9],float a3[100],int n);
void clear_buffer()
{
int ch;
while ((ch=getchar()) !='\n' && ch!=EOF);
}

int main()
{
    int n;
    char a1[100][20],a2[100][9];
    float a3[100];
    n=numofst();
    clear_buffer();
    dataofst(a1,a2,a3,n);
    output(a1,a2,a3,n);
    return 0;
}
int numofst()
{
    int n;
    printf("please enter the number of student: ");
    scanf("%d",&n);
    return n;
}
void dataofst(char a1[100][20],char a2[100][9], float a3[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("please enter name of student %d: ",i+1);
        gets(a1[i]);
        printf("please enter ID of student %d: ",i+1);
        scanf("%s",&a2[i]);
        printf("please enter score of student %d: ",i+1);
        scanf("%f",&a3[i]);
        clear_buffer();
    }
}
void output(char a1[100][20],char a2[100][9], float a3[100],int n)
{
    int i;
    printf("%20s%10s%5f","Student","ID","Score");
    for(i=0;i<n;i++)
    {
        printf("%20s%10s%5f",a1[i],a2[i],a3[i]);
    }
}

