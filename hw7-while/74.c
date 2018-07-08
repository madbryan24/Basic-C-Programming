 #include <stdio.h>
int main()
{
    int choice;
    while(choice!=5){
    printf("HOMEWORK 7 \n 1. Calculate n! \n 2. Average grade \n 3. Replace multiple blank characters \n 4. Replace tab and \ \n 5. Exit application \nEnter a number (1-5): ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        {
            fflush(stdin);
            int n,i,value;
            printf("please enter the value of n: ");
            scanf("%d",&n);
            value=1;
            for(i=1;i<=n;i++)
                {
                    value=value*i;
                }
            printf("n! = %d \n",value);
            break;
        }
    case 2:
        {
            fflush(stdin);
            int grade,sum=0,count=0;
            while(grade!=-1)
                {
                    printf("Please enter your grade(enter -1 if you want to stop):");
                    scanf("%d",&grade);
                    sum += grade;
                    count++;
                }
            printf("There are %d grades inputed in total, and SUM of grades is: %d \n",count-1,sum);
            break;
        }
    case 3:
        {
            fflush(stdin);
            char c;
            int count =0;
            printf("Please enter characters: ");
            while ((c = getchar())!= '\n')
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
                }
            printf("\n");
            break;
        }
    case 4:
        {
            fflush(stdin);
            char cc;
            int count =0;
            printf("Please enter characters: ");
            while ((cc = getchar())!= '\n')
                {
                    if (cc == '  ')
                        {
                            cc='\t';
                            putchar(cc);
                        }
                    else if (cc == '\\')
                        {
                            putchar(cc);
                            putchar(cc);
                        }
                    else {putchar(cc);}
                }
            printf("\n");
            break;
        }
    case 5:
        {
            exit(0);
        }
    default:
        printf("choice invalid, please choose again: \n");
        break;
    }
    }
    return 0;
}

