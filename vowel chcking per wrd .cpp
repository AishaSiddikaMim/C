#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,n,c=0;
    char x[100][100];
    scanf ("%d\n",&n);
    for (i=0;i<n;i++) {
        gets(x[i]);
    }
    for (i=0;i<n;i++) {
        c=0;
        if (x[i][j]=='a'||x[i][j]=='e'||x[i][j]=='i'||x[i][j]=='o'||x[i][j]=='u') {
            c++;
        }
    }
    printf ("%s has %d vowel\n",x[i],c);
}
