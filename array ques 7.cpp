#include <stdio.h>
int main ()
{
    int x[100],n,i;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    printf ("\n even \n");
    for (i=0;i<n;i++) {
        if (x[i]%2==0) {
            printf ("%d\n",x[i]);
        }
    }
    printf ("\n odd \n");
    for (i=0;i<n;i++) {
        if (x[i]%2==1) {
            printf ("%d\n",x[i]);
        }
    }
}
