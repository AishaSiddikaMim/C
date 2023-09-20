#include <stdio.h>
int main ()
{
    int x[100],n,i,sum1=0,sum2=0,sum3=0;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<n;i++) {
        sum1=sum1+x[i];
    }
    printf ("sum=%d\n",sum1);
    for (i=0;i<n;i++) {
        if (x[i]%2==0) {
            sum2=sum2+x[i];
        }
    }
    printf ("even sum=%d\n",sum2);
    for (i=0;i<n;i++){
        if (x[i]%2!=0) {
            sum3=sum3+x[i];
        }
    }
    printf ("odd sum=%d\n",sum3);
}
