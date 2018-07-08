int UCLN(int a,int b)
{
    int c;
    while((c = (a%b)) != 0)
    {
        a = b;
            b = c;
    }
    return b;
