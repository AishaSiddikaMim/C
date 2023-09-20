#include <stdio.h>
#include <string.h>
int main ()
{
    char x[100];
    int i,c=0,n,p;
    gets (x);
    p=strlen (x);
    for(i=0;i<n;i++) {
        if (x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
            c++;
        }
    }
    if (x[i]==' '||i==p-1) {
    printf ("%d\n",c);
    }
}
