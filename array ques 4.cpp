#include <stdio.h>
int main ()
{
    int x1[100],i,n,x2[100];
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        scanf ("%d",&x1[i]);
    }
    for (i=1;i<=n;i++) {
        x2[i]=x1[i];
    }
    for (i=1;i<=n;i++) {
        printf ("%d\n",x2[i]);
    }
}
