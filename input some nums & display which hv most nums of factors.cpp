#include <stdio.h>
int main ()
{
    int x[100],i,j,n,y[100],c=0,max,p=0,max1;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<n;i++) {
        c=0;
        for (j=1;j<=x[i];j++) {
            if (x[i]%j==0) {
                c++;
            }
        }
        y[i]=c;
        printf ("%d.\n",y[i]);
    }
    max=y[0];
    for (i=1;i<n;i++) {
        if (y[i]>max) {
            max=y[i];
            p=i;
        }
    }
    max1=x[0];
    for (i=0;i<n;i++) {
        if (y[i]==max) {
            if (x[i+1]>max1) {
                max1=x[i+1];
            }
        }
    }
    printf ("%d has highest factor %d",max1,max);
}
