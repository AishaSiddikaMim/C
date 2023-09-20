#include <stdio.h>
int main () {
   int r,h;
   float v1,v2;
   scanf ("%d %d",&r,&h);
   v1=3.1416*r*r*h;
   v2=(4/3)*3.1416*r*r*r;
   if (v1>v2) {
    printf ("yes,it will store");
   }
   else {
    printf ("no,it will not store");
   }
    }
