#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,s,amount;
    scanf ("%d %d",&a,&b);
    s=(a*60)+b;
    amount=ceil(s/10.0)*8;
    printf ("%d",amount);
}
