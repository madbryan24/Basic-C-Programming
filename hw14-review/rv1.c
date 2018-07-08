#include<stdio.h>
#include<stdlib.h>
void hello();
void hellousr();
void exitt();

int main()
{
    int c;
    printf("MENU \n 1. Say hello \n 2. Say hello to the user \n 3. Exit \n");
    do
        {
            printf("please enter your choice(1-3): ");
            scanf("%d",&c);
        }while(c!=1 && c!=2 && c!=3);
    switch (c)
    {
        case 1: hello(); break;
        case 2: hellousr(); break;
        case 3: exitt(); break;
        default: printf("Choice invalid, please try again \n"); break;
    }
    return 0;
}
void hello()
{
    printf("Hello \n");
}
void hellousr()
{
    char name[20];
    printf("please enter your name: ");
    scanf("%s",name);
    printf("Hello %s \n",name);
}
void exitt()
{
    exit(0);
}
