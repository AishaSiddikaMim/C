#include <stdio.h>
int main () {
   int x,n,i,b=0;
   scanf ("%d",&x);
   for (i=0;i<x;i++){
    scanf ("%d",&n);
    if(n%2==0){
        b=b+1;
    }
   }
   printf ("%d\n",b);
    }
