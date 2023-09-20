#include <stdio.h>
int main ()
{
    int x[100],n,i,max,min=9999;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<n;i++) {
        if (x[i]>max) {
            max=x[i];
        }
        else if (x[i]<min) {
            min=x[i];
        }
    }
    printf ("%d\n",max);
    printf ("%d\n",min);
}
