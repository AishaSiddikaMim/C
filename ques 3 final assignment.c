#include <stdio.h>
struct country {
char name [100];
long long int population,area;
};
int main ()
{
    int i,n,t=0;
    long long int min=0,d;
    struct country x[40];
     scanf ("%d",&n);
     for (i=0;i<n;i++) {
     printf ("Enter the name : ");
     fflush (stdin);
     gets (x[i].name);
     printf ("Enter the population : ");
     fflush (stdin);
     scanf ("%LLd",&x[i].population);
     printf ("Enter the area : ");
     fflush (stdin);
     scanf ("%LLd",&x[i].area);
     }
     min=(x[0].population/x[0].area);
     for (i=0;i<n;i++) {
        if ((x[i].population/x[i].area)<min) {
            min=x[i].population/x[i].area;
            t=i;
        }
     }
     printf ("%s country has the least people in per area ",x[t].name);
}
