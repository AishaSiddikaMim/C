#include <stdio.h>
struct apartment {
 char location[100];
 int sqft,floor;
 float price;
};
int func (struct apartment x[100],int n){
 int i,max,t;
 max=x[0].price;
 for (i=0;i<n;i++) {
    if (x[i].price>max) {
        max=x[i].price;
        t=i;
    }
 }
 return x[t].floor;
}
int main ()
{
    struct apartment x[10];
    int i,n,t,max,v;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the location : ");
       fflush(stdin);
       gets(x[i].location);
       printf("Enter the area of apartment : ");
       scanf("%d",&x[i].sqft);
       printf("Enter the price of apartment :");
       scanf("%d",&x[i].price);
       printf("Enter the floor of apartment :");
       scanf("%d",&x[i].floor);
       }
       v=func(x,n);
       printf ("floor number=%d",v);

}
