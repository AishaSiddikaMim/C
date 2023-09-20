#include <stdio.h>
int main (){
  int x,y,z,p;
  scanf ("%d%d%d",&x,&y,&z);
  if (x>y && x>z){
    p=2*x;
  }
 else if (y>z && y>x){
    p=2*y;
 }
else {
    p=2*z;

}
 printf ("%d",p);

    }
