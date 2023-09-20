#include<stdio.h>
int main(){
int x[100],sum[100],i,n,c=0,b=0;
scanf("%d",&n);
for (i=0;i<n;i++){
    scanf("%d",&x[i]);
}

for (i=0;i<n-1;i=i+2){
        sum[i]=x[i]+x[i+1];
    printf("pair sum = %d\n",sum[i]);
}

for (i=0;i<n;i=i+2){
    if (sum[i]%2==0){
       c++;
       }
    else if (sum[i]%2!=0){
        b++;
    }
}
printf("even pair = %d\n",c);
printf("odd pair = %d\n",b);
}
