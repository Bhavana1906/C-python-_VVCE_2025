#include<stdio.h>
int main()
{
    int n;
    printf("Input value");
    scanf("%d",&n);
    if(n>=1 && n<=2000)
    {
        printf("Time estimated:25 minutes");
    }
    else if(n>=2001 && n<=4000)
    {
        printf("Time estimated:35 minutes");
    }
    else if(n>=4001 && n<=7000)
    {
        printf("Time estimated:45 minutes");
    }
    else if(n=0)
    {
        printf("Time estimated:0 minutes");
    }
    else 
    {
        printf("Overloaded");
    }
return 0;
}