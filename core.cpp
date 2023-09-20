#include <stdio.h>
int main ()
{
    char s[100];
    int i,j,n,count=0;
    printf ("Enter the string=");
    gets(s);
    for (j=0;s[j];j++){
        n=j;
        printf ("frequency count character is string:\n");
        for (i=0;i<n;i++){
            count=1;
            if (s[i]){
                for (j=1+1;j<n;j++){
                    if (s[i]==s[j]){
                        count++;
                        s[j]='\0';
                    }
                }
                printf ("'%c'=%d\n",s[i],count);

            }
        }
    }
}
