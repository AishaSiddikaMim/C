#include <stdio.h>
int main ()
{
    int n,a=0;
    scanf ("%d",&n);
    for (a=1;a<n;a++){
        if (a%15==0){
            printf ("%d\n",a);
        }
    }
}
