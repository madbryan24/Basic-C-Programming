#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_PRODUCT 10
void clear_buffer()
{
int ch;
while ((ch=getchar()) !='\n' && ch!=EOF);
}
typedef struct
{
    char productName[30];
    int quantity;
    double price;
}Product;

int main()
{
    int i,nop,count=0;
    char ch,add;
    char search[30];
    Product productlist[MAX_PRODUCT];
    int choice;
    do{
    printf("MENU \n1. Input data: \n2. Insert data: \n3.View product information: \n4.Search by product name: \n5.Product payment \n6. Exit \n");
    printf("please enter the function you want to execute: ");
    scanf("%d",&choice);
    while(choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5 && choice!=6)
    {
        printf("Wrong input, please try again \n");
        printf("MENU \n1. Input data: \n2. Insert data: \n3.View product information: \n4.Search by product name: \n5.Product payment \n6. Exit \n");
        printf("please enter the function you want to execute: ");
        scanf("%d",&choice);
    }

    switch (choice)
    {
    case 1:
        {
            printf("please enter the number of products: ");
            scanf("%d",&nop);
            while(nop>10 || nop<0)
            {
                printf("Wrong input, please try again \n");
                printf("please enter the number of products: ");
                scanf("%d",&nop);
            }
            for(i=0;i<nop;i++)
            {
                clear_buffer();
                printf("please enter information of product number %d \n",i+1);
                printf("Name: ");
                gets(productlist[i].productName);
                printf("Quantity: ");
                scanf("%d",&productlist[i].quantity);
                while(productlist[i].quantity<0)
                {
                    printf("Wrong input, please try again \n");
                    printf("Quantity: ");
                    scanf("%d",&productlist[i].quantity);
                }
                printf("Price: ");
                scanf("%lf",&productlist[i].price);
                while(productlist[i].price<=0)
                {
                    printf("Wrong input, please try again \n");
                    printf("Price: ");
                    scanf("%lf",&productlist[i].price);
                }
            }
        }

        break;
    case 2:
        break;
    case 3:
        {
            printf("%2c \t %30s \t %10s \t %5s \n",'#',"Product Name","Price","Qty");
            for(i=0;i<nop;i++)
            {
                printf("%2d \t %30s \t %10lf \t %5d \n",i,productlist[i].productName,productlist[i].price,productlist[i].quantity);
            }
        }
        break;
    case 4:
        {
            clear_buffer();
            printf("Please enter the product you want to find: ");
            gets(search);
            for(i=0;i<nop;i++)
            {
                if(strcmp(search,productlist[i].productName)==0)
                    printf("%2d \t %30s \t %10lf \t %5d \n",i,productlist[i].productName,productlist[i].price,productlist[i].quantity);
                else continue;
            }
        }
        break;
    case 5:
        break;
    case 6: exit(0);
        break;
    }
    }while(choice!=6);



    return 0;
}
