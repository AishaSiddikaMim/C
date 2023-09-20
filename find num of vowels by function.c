int vowelcount (char*x) {
    int c=0,i;
    for (i=0;i<strlen(x);i++) {
        if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') {
            c++;
        }
    }
    return c;
}

#include <stdio.h>
#include <string.h>
int main ()
{
    char x[100];
    int v;
    gets (x);
    v=vowelcount (x);
    printf ("%d",v);

}
