#include <stdio.h>
int main (){
 int a,b,c;
 scanf ("%d%d%d",&a,&b,&c);
 if (a+b>c && b+c>a && c+a>b){
    printf ("it is a triangle");
 }
else {
    printf ("it is not a triangle");
}

    }
