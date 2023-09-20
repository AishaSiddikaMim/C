#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for (i=2;i<=n;i=i+1){
    if (n%i==0&&n%(i+1)==0){
    if (i!=i+1){
    printf("%d %d ",i,i+1);
    }
    }
}
}





