#include <stdio.h>
int main ()
{
    int x,y,i,n,b=0;
    scanf ("%d",&n);
    for (i=1;i<=n;i++) {
        scanf ("%d %d",&x,&y);
        if (x>0 && y>0) {
            b=b+1;
        }
    }
    printf ("%d",b);
}
