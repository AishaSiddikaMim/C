float avgfunc(int *x,int n){
    int i;
    float sum,avg;
    sum=0;
    for(i=0;i<n;i++){
        sum=sum+x[i];
    }
    avg=sum/(float)n;
    return avg;
}
int highestfunc(int *x,float avarage,int n){
    int i,u;
    for(i=0;i<n;i++){
        if(x[i]<avarage){
            u=x[i];
        }
    }
    return u;
}
#include<stdio.h>
int main(){
int i,n,a,u=0,x[100],t,min,highest;
float avarage;
scanf("%d",&n);
printf("Enter students marks \n");
for(i=0;i<n;i++){
        scanf("%d",&x[i]);
}
for(i=0;i<n-1;i++){
    min=x[i];
    u=i;
    for(a=i+1;a<n;a++){
        if(min>x[a]){
            min=x[a];
            u=a;
        }
    }
    t=x[i];
    x[i]=x[u];
    x[u]=t;
}
avarage=avgfunc(x,n);
printf("Average mark is %f\n",avarage);
highest=highestfunc(x,avarage,n);
printf("Highest mark lower than average is %d\n",highest);
}
