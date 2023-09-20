#include <stdio.h>
int main ()
{
    int x,a=0,max=0;
    scanf ("%d",&x);
    while (x!=0) {
        a=x%10;
        x=x/10;
        if (max<a) {
            max=a;
        }
    }
    printf ("%d\n",max);
}
