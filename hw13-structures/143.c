#include<stdio.h>
typedef struct fraction
{
    int num;
    int den;
}fraction;
void inputfrac(fraction frac[],int n);
void printfrac(fraction frac[],int n);
void inversefrac(fraction frac[],int n);
void comparefrac(fraction a,fraction b);
void addfrac(fraction a,fraction b);
void multiplyfrac(fraction a,fraction b);
int UCLN(int a,int b);
int main()
{
    int i,n;
    fraction frac[100];
    fraction a,b;
    printf("Please enter the number of fraction: ");
    scanf("%d",&n);
    inputfrac(frac,n);
    printfrac(frac,n);
    inversefrac(frac,n);
    printf("The inverse fractions \n");
    for(i=0;i<n;i++)
    {
        printf("the fraction number %d is: %d/%d \n",i+1,frac[i].num,frac[i].den);
    }
    printf("In order to add or multiply, \n");
    printf("Please enter fraction 1: \n");
    scanf("%d%*c%d",&a.num,&a.den);
    printf("Please enter fraction 2: \n");
    scanf("%d%*c%d",&b.num,&b.den);
    comparefrac(a,b);
    addfrac(a,b);
    multiplyfrac(a,b);
    return 0;
}

void inputfrac(fraction frac[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("please enter the fraction %d \n",i+1);
        scanf("%d",&frac[i].num);
        scanf("%d",&frac[i].den);
        while(frac[i].den==0)
        {
            printf("wrong number, please enter the denominator again: ");
            scanf("%d",&frac[i].den);
        }
    }
}
void printfrac(fraction frac[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("the fraction %d is %d/%d \n",i+1,frac[i].num,frac[i].den);
    }
}
void inversefrac(fraction frac[],int n)
{
    int i;
    fraction tmp;
    for(i=0;i<n/2;i++)
    {
    tmp=frac[i];
    frac[i]=frac[n-i-1];
    frac[n-i-1]=tmp;
    }
}
int UCLN(int a,int b)
{
    int c;
    while((c = (a%b)) != 0)
    {
        a = b;
            b = c;
    }
    return b;
}
void comparefrac(fraction a,fraction b)
{
    if(a.num/a.den>0 && b.num/b.den<0) printf("%d/%d is greater than %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den>0 && b.num/b.den==0) printf("%d/%d is greater than %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den==0 && b.num/b.den<0) printf("%d/%d is greater than %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den<0 && b.num/b.den>0) printf("%d/%d is less than %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den==0 && b.num/b.den>0) printf("%d/%d is less than %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den<0 && b.num/b.den==0) printf("%d/%d is less than %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den==0 && b.num/b.den==0) printf("%d/%d is equal to %d/%d \n",a.num,a.den,b.num,b.den);
    else if(a.num/a.den>0 && b.num/b.den>0)
    {
        if((a.num/a.den)/(b.num/b.den>1)) printf("%d/%d is greater than %d/%d \n",a.num,a.den,b.num,b.den);
        else if((a.num/a.den)/(b.num/b.den==1)) printf("%d/%d is equal to %d/%d \n",a.num,a.den,b.num,b.den);
        else if((a.num/a.den)/(b.num/b.den<1)) printf("%d/%d is less than %d/%d \n",a.num,a.den,b.num,b.den);
    }
    else if(a.num/a.den<0 && b.num/b.den<0)
    {
        if((a.num/a.den)/(b.num/b.den<1)) printf("%d/%d is greater than %d/%d \n",a.num,a.den,b.num,b.den);
        else if((a.num/a.den)/(b.num/b.den==1)) printf("%d/%d is equal to %d/%d \n",a.num,a.den,b.num,b.den);
        else if((a.num/a.den)/(b.num/b.den>1)) printf("%d/%d is less than %d/%d \n",a.num,a.den,b.num,b.den);
    }
}
void addfrac(fraction a,fraction b)
{
    int c=UCLN(a.num*b.den+a.den*b.num,a.den*b.den);
    int n1=(a.num*b.den+a.den*b.num)/c,d1=a.den*b.den/c;
    if((n1/d1)==0)
        printf("the sum is: 0 \n");
    else
        printf("the sum is: %d/%d \n",n1,d1);
}
void multiplyfrac(fraction a,fraction b)
{
    int c=UCLN(a.num*b.num,a.den*b.den);
    int n2=a.num*b.num/c,d2=a.den*b.den/c;
    if(a.num==0 || b.num==0 || (a.num==0 && b.num==0))
        printf("the multiplication is: 0 \n");
    else
        printf("the multiplication is: %d/%d \n",n2,d2);
}

