#include <stdio.h>
int main () {
   int x,y;
   scanf ("%d%d",&x,&y);
   if (x>0) {
    if (y>0){
        printf ("1st quadrant");
    }
    else if (y<0){
        printf ("4th quadrant");
    }
   }
   else if (x<0){
    if (y>0){
      printf ("2nd quadrant");
    }
    else if (y<0){
        printf ("3rd quadrant");
    }

   }
    }
