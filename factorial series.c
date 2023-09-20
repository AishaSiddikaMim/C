#include <stdio.h>
int main ()
{
    int n,i,sum=0,t=1,v=1;
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        t=t*v;
        v=v+1;
        sum=sum+t;
    }
    printf ("%d",sum);
}
