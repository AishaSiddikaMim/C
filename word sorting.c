#include <stdio.h>
#include <string.h>
int main ()
{
    int i,b,p=0,n;
    char x[100],min,t;
    gets (x);
    n=strlen (x);
    for (i=0;i<n-1;i++) {
        min=x[i];
        for (b=i+1;b<n;b++) {
            if (min>x[b]) {
                min=x[b];
                p=b;
            }
        }
        t=x[i];
        x[i]=x[p];
        x[p]=t;
    }
    printf ("%s",x);
}
