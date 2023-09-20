#include <stdio.h>
int main ()
{
    int i,n,a;
    scanf ("%d",&n);
    for (i=1;i<n;i++) {
        if (n%i==0) {
            a=i;
        }
    }
    printf ("%d",a);
}
