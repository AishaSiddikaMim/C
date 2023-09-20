#include<stdio.h>
#include<math.h>
int main ()
{
    int x[100],i,j,p,t=0,max,n1;
    float n;
    scanf ("%f",&n);
    n1=floor ((n*50)/100.0);
    printf ("%d.\n",n1);
    for (i=0;i<n;i++) {
        scanf ("%d",&x[i]);
    }
    for (i=0;i<n;i++) {
        max=x[i];
        p=i;
        for (j=i+1;j<n;j++) {
          if (x[j]>max){
          p=j;
        }
    }
    t=x[i];
    x[i]=x[p];
    x[p]=t;
}
printf ("%d need minimum",x[n1-1]);
}
