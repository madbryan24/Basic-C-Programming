#include<stdio.h>

#include <stdlib.h>



int main()

{

    int SN,a;

    srand((unsigned)time(NULL));

    SN = rand() % 10;



    printf("please guess the number: ");

    scanf("%d",&a);

    if(a<SN)

        {

            printf("You guess is too small \n the correct answer is: %d",SN);

        }

    if(a>SN)

        {

            printf("You guess is too big \n the correct answer is: %d",SN);

        }

    if(a==SN)

        {

            printf("You guess is correct \n the correct answer is: %d",SN);

        }

    return 0;

}

