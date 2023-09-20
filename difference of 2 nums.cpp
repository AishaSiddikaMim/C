#include <stdio.h>
int main  () {
   int x,y,ans,a;
   scanf ("%d%d",&x,&y);
   ans=x-y;
   if (ans<0) {
    a=ans*(-1);
   }
   else if (ans>0){
    a=ans;
   }
   printf ("%d",a);
    }
