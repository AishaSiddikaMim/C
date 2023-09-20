#include <stdio.h>
int main ()
{
    int n;
    float a;
    scanf ("%d",&n);
    if (n<=150) {
        a=n*4.50;
    }
    else if (n>150 && n<=300) {
        a=150*4.50;
        a=a+((n-150)*6.00);
    }
    else if (n>300 && n<=500) {
        a=500*8.50;
        a=a+((n-300)*8.50);
    }
    else if (n>500) {
        a=500*8.50;
        a=a+((n-500)*10.0);
        a=a+(20/100);
    }
    printf ("%f",a);
}
