#include<stdio.h>
int main()
{
struct apartment
{
    char location[100];
    int sqft;
    int price,floor;
};
   struct apartment x[10] ;
   int i,n,t,max;
   float v;
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
       max=x[0].price;
       for(i=0;i<n;i++)
       {
           if(x[i].price>max)
           {
               max=x[i].price;
       t=i;
           }
       }
       printf("floor number=%d and price=%d",x[t].floor,max);
}

