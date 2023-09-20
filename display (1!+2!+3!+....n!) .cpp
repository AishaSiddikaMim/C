#include <stdio.h>
int main ()
{
  int n,i,fact=1,sum=0;
  scanf ("%d",&n);
  for (i=1;i<=n;i++) {
    if (i<n) {
        printf ("%d!+",i);
    }
    else if (i==n) {
        printf ("%d!=",i);
    }
  }
  for (i=1;i<=n;i++) {
    fact=fact*i;
    sum=sum+fact;
  }
  printf ("%d",sum);
}
