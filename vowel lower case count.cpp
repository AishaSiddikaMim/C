#include<stdio.h>
#include<string.h>
int main ()
{
    char x[100];
    int i,c=0,b=0;
    gets(x);
    for (i=0;i<strlen(x);i++) {
    if (x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='u'||x[i]=='A'||x[i]=='E'||x[i]=='O'||x[i]=='U'||x[i]=='I'){
        c++;

    }
    if (x[i]>='a'&&x[i]<='z'){
    b++;
    }
}
printf ("vowel in the word %d\n",c);
printf ("lowercase in the word %d\n",b);
}

