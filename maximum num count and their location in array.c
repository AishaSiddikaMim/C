#include <stdio.h>
int main ()
{
    int x[100],i,b,t,max,n,c;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    max=x[0];
    for (t=1;t<n;t++) {
        if (x[t]>max) {
            max=x[t];
        }
    }
    printf ("%d\n",max);
    for (b=0;b<n;b++) {
            if (x[b]==max) {
                c++;
                printf ("%d\n",b+1);
            }
        }
    }

