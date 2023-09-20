#include <stdio.h>
int main ()
{
    int x[100],i,n,c=0,max;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    max=x[0];
    for (i=0;i<n;i++) {
        if (x[i]>max) {
            max=x[i];
        }
    }
    max=max/2;
    for (i=0;i<n;i++) {
        if (x[i]>max) {
            c++;
        }
    }
    printf ("%d",c);
}
