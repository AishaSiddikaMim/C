#include <stdio.h>
int main ()
{
    int x[100],i,n,max,min,range;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    max=x[0];
    min=x[0];
    for (i=0;i<n;i++) {
        if (x[i]>max) {
            max=x[i];
        }
        else if (x[i]<max){
            min=x[i];
        }
    }
    range=max-min;
    printf ("%d\n",range);
    printf ("max=%d\n",max);
    printf ("min=%d\n",min);
}
