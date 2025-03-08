#include<stdio.h>
int main()
{
    float a,b,c,c1,c2,c3,c4,c5,d,d1,d2;
    float Total;
    printf("Number of interior walls in sq.ft units:");
    scanf("%f",&a);
    if(a>0)
    {
     printf("Surface area of each interior wall in sq.ft units:");
     scanf("%f%f%f%f%f%f",&c,&c1,&c2,&c3,&c4,&c5);
    }
    
    printf("Number of exterior walls:");
    scanf("%f",&b);
    if(b>0)
    {
    printf("Surface area of each exterior wall:");
    scanf("%f%f%f",&d,&d1,&d2);
    }
    Total=((c+c1+c2+c3+c4+c5)*18)+((d+d1+d2)*12);
    printf("Total cost estimated:%.1f INR",Total);
return 0;
}