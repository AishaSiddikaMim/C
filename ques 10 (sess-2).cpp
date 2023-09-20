#include <stdio.h>
int main ()
{
    int x;
    float z;
    scanf ("%d",&x);
    if (x<=30000) {
        z=x*(10/100);
    }
    else if (x>30000 && x<=500000) {
        z=30000*(10/100);
        z=z+(x-30000)+(15/100);
    }
    else if (x>500000) {
        z=500000*(15/100);
        z=z+(x-500000)+(20/100);
    }
    printf ("%f",z);

}
