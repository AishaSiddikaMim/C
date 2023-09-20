#include <stdio.h>
int main ()
{
    int n,a=0;
    scanf ("%d",&n);
    while (n!=0) {
        a=n%2;
        n=n/2;
        printf ("%d",a);
    }
}
