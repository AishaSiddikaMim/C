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
    for (i=0;i<n;i++) {
        sum=0;
        avg=0;
        for (j=0;j<4;j++) {
            sum=sum+x[i][j];
            avg=(float)sum/4.0;
        }
        printf ("%d got avg %f\n",i+1,avg);
    }
}
