#include<stdio.h>
#include<string.h>
int main(){
char x[100];
int i,c=0,p;
gets(x);
p=strlen(x);


for(i=0;i<p;i++){

    if(x[i]== 'a'||x[i]=='e'||x[i]== 'i'||x[i]== 'o'||x[i]== 'u'){
        x[i]='$';
    }



}
printf("%s",x);
}
