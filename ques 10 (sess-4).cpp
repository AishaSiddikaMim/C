#include <stdio.h>
int main ()
{
    int n,i,a=0,c=0;
    scanf ("%d",&n);
    while (n!=0) {
        a=n%10;
        c++;
        n=n/10;
    }
    printf ("%d",c);
}
