#include<stdio.h>
int main(){
struct apartment{
char name[100];
float prize,size;
int floor;
};
struct apartment x[30];
int i,n,p=0;
scanf("%d",&n);
for(i=0;i<n;i++){
        fflush(stdin);
        gets(x[i].name);
        scanf("%f%f%d",&x[i].prize,&x[i].size,&x[i].floor);
}
for(i=0;i<n;i++){
    if(x[i].name[0]=='a'||x[i].name[0]=='e'||x[i].name[0]=='o'||x[i].name[0]=='i'||x[i].name[0]=='u'||x[i].name[0]=='A'||x[i].name[0]=='E'||x[i].name[0]=='I'||x[i].name[0]=='O'||x[i].name[0]=='u'){
        p=i;
}
printf("name = %s,price = %f\n",x[p].name,x[i].prize);
}
}
