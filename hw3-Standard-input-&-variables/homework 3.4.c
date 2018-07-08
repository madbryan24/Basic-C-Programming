#include<stdio.h>
int main()
{
    int Qty,ISBN,Price,Total,VAT,pay;
    char Title[100];
    printf("Enter the the information of the books in the form:  \n");
    printf("Qty: ");
    scanf("%d",&Qty);
    printf("ISBN: ");
    scanf("%d",&ISBN);
    printf("Title: ");
    scanf("%s",Title);
    printf("Price: ");
    scanf("%d",&Price);
    printf("Total: ");
    scanf("%d",&Total);
    VAT=Total*4/100;
    pay=Total+VAT;
    printf(" BK Book Store \n");
    printf(" Qty: %d     ISBN: %d   Title: %s    Price: %d   Total:%d \n ",Qty,ISBN,Title,Price,Total);
    printf(" _________________________________________ \n ... \n ");
    printf("VAT: %d \n You pay: %d \n",VAT,pay);

    return 0;
}
