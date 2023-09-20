#include <stdio.h>
int main ()
{
    int x,y,i,n,a=0,b=0,c=0,d=0;
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        scanf ("%d %d",&x,&y);
        if (x>0){
            if(y>0){
                a=a+1;
            }
            else if (y<0){
                d=d+1;
            }
        }
        if(x<0){
            if (y<0) {
                c=c+1;
            }
            else if (y>0) {
                b=b+1;
            }

        }

    }
    printf ("There are %d points in 1st quadrant\n",a);
    printf ("There are %d points in 2nd quadrant\n",b);
    printf ("There are %d points in 3rd quadrant\n",c);
    printf ("There are %d points in 4th quadrant\n",d);
}
