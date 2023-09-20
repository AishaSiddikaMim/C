#include <stdio.h>
int main ()
{
    int x[100],i,n,sum=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<n;i++) {
    sum=sum+x[i];
    }
    printf ("%d\n",sum);
}

