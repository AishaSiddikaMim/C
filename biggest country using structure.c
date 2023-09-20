#include<stdio.h>
struct country
{
    char name[100];
    int population,density,area;
};
int main()
{
    int i,max,n,p;
    struct country c[10];
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the name of country:",i+1);
        fflush(stdin);
        gets(c[i].name);
         printf("Enter the area of country = ",i+1);
        fflush(stdin);
        scanf("%d",&c[i].area);
        printf("Enter the population of country = ",i+1);
        fflush(stdin);
        scanf("%d",&c[i].population);
        printf("Enter the density  of country =",i+1);
         fflush(stdin);
        scanf("%d",&c[i].density);
    }
    printf("\n");
     printf("<<<<<<<<<<<<<<----DETAILS OF 3 COUNTRY----->>>>>>>>>>>>>>>>>");
    for(i=0; i<n; i++)
    {
         printf("\n");
        printf("The name of the country is : %s \n",c[i].name) ;
        printf("area of the country = %d  km^2\n",c[i].area);
        printf("The population of country = %d \n",c[i].population);
        printf("The density of the country = %d /km^2\n",c[i].density);
    }
    max=c[0].density;
    for(i=0;i<n;i++)
    {
         if(max<c[i].density)
    {
        max=c[i].density;
        p=i;
    }
    }
    printf("%s country has maximum density %d",c[p].name,max);
}
