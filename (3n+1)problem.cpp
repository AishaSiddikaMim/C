#include <stdio.h>
int main ()
{
    int x;
    scanf ("%d",&x);
    while (x!=1) {
        if (x%2==0) {
        x=x/2;
        }
        else {
            x=(3*x)+1;
        }
        printf ("%d\n",x);
    }
}

