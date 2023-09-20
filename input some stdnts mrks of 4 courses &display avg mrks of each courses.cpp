#include <stdio.h>
int main ()
{
    int x[100][100],n,i,j,sum=0;
    float avg;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        for (j=0;j<4;j++) {
            printf ("x[%d][%d]\n",i,j);
            scanf ("%d",&x[i][j]);
        }
    }
    for (j=0;j<4;j++) {
        sum=0;
        avg=0;
        for (i=0;i<n;i++) {
            sum=sum+x[i][j];
            avg=(float)sum/3.0;
        }
        printf ("%d sub avg %f\n",j+1,avg);
    }
}

