#include<stdio.h>
struct exp_phone
{
    char name[100];
    float  screen_size;
    int ram;
    int mp_front,mp_back;
    int price;
};
int main()
{
    struct exp_phone x [100];
    int n,i,exp_price,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("Enter the name of manufacturer ");
      fflush(stdin);
      gets(x[i].name);
      printf("ENter the screen size") ;
      fflush(stdin);
      scanf("%f",&x[i].screen_size);
      printf("ENter the ram :");
      fflush(stdin);
      scanf("%d",&x[i].ram);
      printf("ENter Megapixel of front camera") ;
      fflush(stdin);
      scanf("%f",&x[i].mp_front);
      printf("ENTER Megapixel of back camera:");
      fflush(stdin);
      scanf("%d",&x[i].mp_back);
      printf("Price of mobile");
      fflush(stdin);
      scanf("%d",&x[i].price);
    }
      exp_price= x[0].price;
    for(i=0;i<n;i++)
    {
      if(x[i].price>exp_price)
      {
          exp_price= x[i].price;
          t=i;
      }
    }
        printf("%s",x[t].name);
}

