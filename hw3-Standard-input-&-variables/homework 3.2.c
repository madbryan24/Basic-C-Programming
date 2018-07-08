#include<stdio.h>
int main()
{
    char string[23];
    printf( "Enter a string: " );
    scanf( "%[^mahath]",string);
    printf( "The input was \"%s\"\n",string);
    return 0;
}
