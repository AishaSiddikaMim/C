#include <stdio.h>
int main ()
{
    int x[100],n,a,i,c=0,t;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    a=x[0];
    for (t=1;t<n;t++) {
        if (a<x[t]) {
            c++;
        }
    }
    printf ("%d",c);
}
