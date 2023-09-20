#include <stdio.h>
int main ()
{
    int x,a=0,s=0;
    scanf ("%d",&x);
    while (x!=0) {
        a=x%10;
        x=x/10;
        s=s+a;
    }
    printf ("%d",s);
}
