#include <stdio.h>
int main () {
   int x1,x2,y1,y2,p,q;
   scanf ("%d %d %d %d",&x1,&x2,&y1,&y2);
    p=x1*x2;
    q=y1*y2;
    if (p>0 && q>0){
        printf ("same quadrant");
    }
    else {
        printf ("not same quadrant");
    }


    }
