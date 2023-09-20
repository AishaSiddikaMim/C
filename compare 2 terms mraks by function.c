int countimprovement (int*a,int*b,int n){
int i,c=0;
for (i=0;i<n;i++) {
    if (b[i]>a[i]) {
        c++;
    }
}
return c;
}

#include <stdio.h>
int main ()
{
    int i,x[10],y[10],a;
    for (i=0;i<5;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<5;i++) {
        scanf ("%d",&y[i]);
    }
    a=countimprovement (x,y,5);
    printf ("%d",a);
 }
