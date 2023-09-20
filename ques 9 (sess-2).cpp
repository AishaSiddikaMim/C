#include <stdio.h>
int main () {
   int x,y,x1;
   scanf ("%d",&x);
   y=x/100;
   x1=x%100;
   if (y>x1){
    printf ("no");
   }
   else {
    printf ("yes");
   }
    }
