int isPrime(int d) {
    int i,c;
    c=0 ;
    for(i=2;i<d;i++) {
        if (d%i==0) {
            c++;
        }
    }
    if (c==0){

        return 4 ;
    }
    else {

        return 9 ;
    }
}
#include<stdio.h>
int main ()
{
    int x[100],y[100],i,n,c ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++) {
        printf("Enter numbers") ;
        scanf("%d",&x[i]) ;
    }
    c=0 ;
    for(i=0; i<n; i++) {
        y[i]=isPrime(x[i]) ;
    }
    for(i=0;i<n;i++) {
        if (y[i]==4) {
            c++;
        }
    }
    printf("\n%d number/numbers are/is prime\n ",c);
}
