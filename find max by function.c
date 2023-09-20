int findmax (int*p,int t) {
    int i,m;
    m=p[0];
    for (i=1;i<t;i++) {
        if (p[i]>m) {
            m=p[i];
        }
    }
    return m;
}

#include <stdio.h>
int main ()
{
    int x[10],p,i;
    for (i=0;i<5;i++) {
        scanf ("%d",&x[i]);
    }
    p=findmax (x,5);
    printf ("%d",p);
}
