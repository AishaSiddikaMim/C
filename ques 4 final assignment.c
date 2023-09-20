#include<stdio.h>
struct doctors
{
    char name[100];
    int age;
    float exp;
};
struct specialdoctors
{
    struct doctors d;
    char area [10];
    float exp_sp;
};
int main()
{
    struct doctors x[10];
    struct specialdoctors y[10];
    int i,n,sum1,sum2,t;
    float avg1,avg2,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter the name : ");
       fflush(stdin);
       gets(x[i].name);
       printf("Enter the age : ");
       fflush(stdin);
        scanf("%d",&x[i].age);
        printf("Enter the year of experience  : ");
        fflush(stdin);
        scanf("%f",&x[i].exp);
    }
    scanf ("%d",&t);
    for (i=0;i<t;i++) {
        printf("Enter the name of special doctors : ");
        fflush(stdin);
       gets(y[i].d.name);
       printf("Enter the age of special doctors : ");
       fflush(stdin);
        scanf("%d",&y[i].d.age);
        printf("Enter the year of experience doctors :-");
        fflush(stdin);
        scanf("%f",&y[i].d.exp);
         printf("Enter the area of specialization : ");
         fflush(stdin);
        gets(y[i].area);
        printf("Enter years of experience in special area: ");
        fflush(stdin);
        scanf("%f",&y[i].exp_sp);
    }
    sum1=0;
    for (i=0;i<n;i++) {
        sum1=sum1+(x[i].age);
    }
    avg1=(sum1/n);
    printf ("Average age of the doctors %.f",avg1);
   sum2=0;
   for (i=0;i<t;i++) {
    sum2=sum2+(y[i].d.age);
   }
   avg2=(sum2/t);
    printf ("Average age of the special doctors %.f",avg2);

   avg=((avg1+avg2)/2);
   printf ("Average of all doctors %.f",avg);
}
