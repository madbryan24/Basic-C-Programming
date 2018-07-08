#include <stdio.h>
int main()
{
            char c;
            int count =0;
            printf("Please enter characters: ");
            while ((c = getchar())!= "\n")
                {
                    if (c == ' ')
                        {
                            if (count != 1)
                                {
                                    putchar(c);
                                    count = 1;
                                }
                        }
                    else {putchar(c); count =0;}
    return 0;
}
}
