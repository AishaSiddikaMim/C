#include<stdio.h>
int main()
{
    struct riv
    {
        char river[100];
        float area,size;
    };
    int i,n,p=0,d=0;
    float max=0,max1=0;
    struct riv riv[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("Enter the name of river : ");
        fflush(stdin);
        gets(riv[i].river);
        scanf("%f%f",&riv[i].area,&riv[i].size);
        printf(".%d\n",i);
    }
    max=riv[0].size;
    for(i=1; i<n; i++)
    {
        if(max<riv[i].size)
        {
            max=riv[i].size;
            p=i;
        }
    }
    printf("%s river has highest water by size,size= %f\n",riv[p].river,max);
    max1=riv[0].area;
    for(i=1; i<n; i++)
    {
        if(max1<riv[i].area)
        {
            max1=riv[i].area;
            d=i;
        }
    }
    printf("%s river has highest water by area,area= %f\n",riv[d].river,max1);
}
