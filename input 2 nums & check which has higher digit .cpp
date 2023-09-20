#include <stdio.h>
int main ()
{
    int n,i,a=0,c=0,d,b=0,x,y;
    scanf ("%d %d",&n,&d);
    x=n;
    y=d;
    while (n!=0) {
        a=n%10;
        c++;
        n=n/10;
    }
    while (d!=0)  {
        a=d%10;
        b++;
        d=d/10;
    }
    if (c>b) {
        printf ("%d has higher digits\n",x);
    }
    else if (c==b) {
        printf ("both have equal digits\n");
    }
    else if (b>c) {
        printf ("%d has higher digits\n",y);
    }
}
