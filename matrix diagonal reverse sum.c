#include <stdio.h>
int main ()
{
    int x[3][3],i,j,sum=0;
    for (i=0;i<3;i++) {
    for (j=0;j<3;
    j++) {
    printf ("Enter value for x[%d][%d]:",i,j);
    scanf ("%d",&x[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        j=0;
        j=4-i;
        sum=sum+x[i][j];
    }
    printf ("%d",sum);
}
