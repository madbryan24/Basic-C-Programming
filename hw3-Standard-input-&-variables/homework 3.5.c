#include<stdio.h>
int main()
{
    char string[13];
    printf( "Enter your student ID in the form of HUSTYYYYYYYY (Y-digit): " );
    scanf( "%[HUST0-9]",string);
    printf( "Your student ID is: %s \n",string);
    return 0;
}
