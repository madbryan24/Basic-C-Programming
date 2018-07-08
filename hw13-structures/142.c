`#include<stdio.h>
typedef struct student
{
    char id[9];
    char name[30];
    float grade;
    char level;
}student;

int main()
{
        int i,n,j;
        student st[100],tmp;
        printf("please enter the number of student: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            fflush(stdin);
            printf("please enter your ID: ");
            gets(st[i].id);
            printf("please enter your name: ");
            gets(st[i].name);
            printf("please enter your grade: ");
            scanf("%f",&st[i].grade);
            while(st[i].grade<0.0 ||st[i].grade>10.0)
            {
                printf("wrong number, please try again: ");
                printf("please enter your grade: ");
                scanf("%f",&st[i].grade);
            }

            if(st[i].grade>=9.0 && st[i].grade <=10.0)
                st[i].level='A';
            else if(st[i].grade>=8.0 && st[i].grade <9.0)
                st[i].level='B';
            else if(st[i].grade>=6.5 && st[i].grade <8.0)
                st[i].level='C';
            else if(st[i].grade <6.5)
                st[i].level='D';
        }

        for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
        {
            if(st[i].grade<st[j].grade)
            {
                tmp=st[i];
                st[i]=st[j];
                st[j]=tmp;
            }
        }

        printf("%20s %20s %20s \n","Name","Grade","Level");
        for(i=0;i<n;i++)
        {
            printf("%20s %20g %20c \n",st[i].name,st[i].grade,st[i].level);
        }

    return 0;
}




