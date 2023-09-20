#include <stdio.h>
int main ()
{
    int a,b,i,sum=0;
    scanf ("%d %d",&a,&b);
    for (i=1;i<=b;i++) {
        sum=sum+a;
    }
    printf ("%d",sum);

}
