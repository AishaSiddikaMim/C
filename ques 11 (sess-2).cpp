#include <stdio.h>
#include <math.h>
int main ()
{
    int x1,x2,a,b,c;
    scanf ("%d %d %d",&a,&b,&c);
    if (a==0) {
        printf ("invalid");
    }
    else if (((b*b)-(4*a*c))<0) {
        printf ("imaginary");
    }
    else {
        x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf ("%d %d\n",x1,x2);
    }
}
