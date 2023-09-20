#include <stdio.h>
int main ()
{
    int i,n,fact=1;
    scanf ("%d",&n);
    if (n<0) {
        printf ("invalid");
    }
    else {
        for (i=1;i<=n;i++){
            fact =fact*i;
        }
        printf ("%d",fact);

    }
}
