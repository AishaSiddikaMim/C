#include <stdio.h>
#include <string.h>
int main ()
{
    char x[100];
    int i,c=0;
    gets(x);
    for (i=0;i<strlen(x);i++) {
        if (x[i]==' ' && x[i+1]!=' '){
            c++;
        }
    }
    printf ("%d",c+1);
}
