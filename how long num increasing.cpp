#include <stdio.h>
int main ()
{
    int x[100],i,n,c=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=1;i<n;i++){
        if (x[i]>x[i-1]){
            c++;
        }
        else {
            break;
        }
    }
    printf ("%d",c);
}
