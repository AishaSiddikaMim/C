#include <stdio.h>
int main ()
{
    int x[100],i,n,c=0,b=0,sum=0;
    float avg,near1,near2,near3,near4,percent;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
        sum=sum+x[i];
    }
    avg=(float)sum/n;
    percent=(float)avg+(10/100.0);
    printf ("%f\n",avg);
    near1=avg+3;
    near2=avg-3;
    near3=avg+percent;
    near4=avg-percent;
    for (i=0;i<n;i++) {
        if (x[i]>=near2 && x[i]<avg || x[i]>avg && x[i]<=near1) {
            c++;
        }
        if (x[i]>=near4 && x[i]<avg || x[i]<=near3 && x[i]>avg) {
            b++;
        }
    }
    printf ("%d\n%d\n",c,b);
}
