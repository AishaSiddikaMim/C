#include <stdio.h>
int main ()
{
    int x[100],i,n;
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=1;i<=n;i++) {
        printf ("%d",x[i]);
}
}
