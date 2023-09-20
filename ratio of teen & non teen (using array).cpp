#include <stdio.h>
int main ()
{
 int x[100],i,n,c=0,b=0,gcd=1;
 float ratio;
 scanf ("%d",&n);
 for (i=1;i<=n;i++) {
    scanf ("%d",&x[i]);
 }
 for (i=1;i<=n;i++) {
    if (x[i]>=13 && x[i]<=19) {
        c++;
    }
    else {
        b++;
    }
 }
 printf ("c=%d\n",c);
 printf ("b=%d\n",b);

 for (i=1;i<=c && i<=b;i++) {
    if (c%i==0 && b%i==0) {
        gcd=i;
    }
 }
 c=c/gcd;
 b=b/gcd;
 printf ("%d:%d",c,b);
}
