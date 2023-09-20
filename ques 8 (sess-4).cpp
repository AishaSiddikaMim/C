#include <stdio.h>
int main ()
{
    int i,n,b=0;
    scanf ("%d",&n);
    for (i=2;i<n;i++) {
        if (n%i==0) {
        if (i%2!=0) {
            b=b+1;
        }
        }

    }
    printf ("%d",b);
}
