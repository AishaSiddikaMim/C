#include <stdio.h>
int main ()
{
    int x[100],i,n,c=0,j;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (x[i]==x[j]){
                c++;
                break;
            }
        }
    }
    printf ("%d",c);
}
