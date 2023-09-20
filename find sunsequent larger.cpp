#include<stdio.h>
int
main ()
{

int c, i, x[i], b, n;

scanf ("%d", &n);

for (i = 0; i < n; i++)
    {

scanf ("%d", &x[i]);

}

for (i = 0; i < n; i++)
    {

c = 0;

for (b = i + 1; b < n; b++)
	{

if (x[i] > x[b])
	    {

c++;


}

}

printf ("%d has this sets of larger %d\n", x[i], c);

}

}
