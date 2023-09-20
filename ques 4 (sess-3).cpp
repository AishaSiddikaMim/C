#include <stdio.h>
int main ()
{
    int a,n,b=0;
    scanf ("%d",&n);
    for (a=2;a<n;a++){
        if (n%a==0){
            b=b+1;
        }
    }
    if (b>0) {
        printf ("not prime number");
    }
    else {
        printf ("prime number");
    }
}
