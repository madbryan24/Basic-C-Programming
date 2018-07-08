#include<stdio.h>

int main()

{
    char c1,c2,c3;
    printf("please enter 3 letters: ");
    scanf("%c%c%c",&c1,&c2,&c3);
    if(c1<=c2 && c1<=c3)
    {
        printf("%c is the first letter \n",c1);
    }
    else if(c2<=c1 && c2<=c3)
    {
        printf("%c is the first letter \n",c2);
    }
    else
    {
        printf("%c is the first letter \n",c3);
    }
    return 0;
}
