#include <stdio.h>
int main () {

 int sec,h,m,s;
 scanf ("%d",&sec);
 h=sec/3600;
 sec=sec%3600;
 m=sec/60;
 s=sec%60;
 printf ("\nhh:mm:ss\n%d:%d:%d",h,m,s);


                }
