#include <stdio.h>
int main () {
   int x1,x2,y1,y2;
   scanf ("%d %d %d %d",&x1,&x2,&y1,&y2);
   if ((x1>0 && x2>0 && y1>0 && y2>0)||
       (x1<0 && x2<0 && y1>0 && y2>0)||
       (x1<0 && x2<0 && y1<0 && y2<0)||
       (x1>0 && x2>0 && y1<0 && y2<0)) {
       printf ("same quadrant");
        }
        else {
            printf ("not same quadrant");
        }
        }
