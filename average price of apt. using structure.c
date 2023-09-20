#include <stdio.h>
   int main ()
{
    struct apartment {
    char location [100];
    int sqft;
    int price,floor;
    };
    struct apartment x[10];
    int i,n,p;
    float t,avg;
    scanf ("%d",&n);
    for (i=0;i<n;i++) {
        printf ("Enter the location : ");
        fflush (stdin);
        gets (x[i].location);
        printf ("Enter the area of apartment : ");
        scanf ("%d",&x[i].sqft);
        printf ("Enter the price of apartment : ");
        scanf ("%d",&x[i].price);
        printf ("Enter the floor of apartment : ");
        scanf ("%d",&x[i].floor);
    }
    t=0;
    avg=0;
    for (i=0;i<n;i++) {
        p=x[i].price;
        t=t+p;
        avg=t/n;
}
printf ("%f",avg);
}
