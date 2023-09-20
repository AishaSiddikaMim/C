#include <stdio.h>
int main ()
{
    int x[100],i,n;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=n-1;i>=0;i=i-1) {
        printf ("%d\n",x[i]);
    }
}
