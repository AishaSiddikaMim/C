#include <stdio.h>
int main ()
{
    int i,n,x,avg=0,b=0;
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        scanf ("%d",&x);
        if (b<x) {
            b=x;
        }
        avg=avg+x;
    }
   avg=avg/n;
   printf ("highest = %d\n",b);
   printf ("average = %d\n",avg);
}
