#include <stdio.h>
struct student
{
char name [100];
double cgpa;
};
int func ( struct student x[100],int n) {
int i,p;
double max=0;
max=x[0].cgpa;
for (i=0;i<n;i++) {
    if (x[i].cgpa>max) {
        max=x[i].cgpa;
        p=i;
    }
}
return p;
}
int main () {
struct student x[100];
int n,i,m;
double max=0;
scanf ("%d",&n);
for (i=0;i<n;i++) {
    printf ("Enter the name : ");
    fflush (stdin);
    gets (x[i].name);
    printf ("Enter the cgpa : ");
    scanf ("%f",&x[i].cgpa);
}
m= func (x,n);
printf ("Name of the student is %s",x[m].name);
}
