#include<stdio.h>
float calculateBill(char wardtype,int days);

int main()
{   
    char name[100],wardtype;
    int days;
    float bill=0.0f;
    printf("Patient name: ");
    scanf("%[^\n]s",name);
    printf("Ward type G/P/S: ");
    //fflush(stdin);   //flushes the buffer input so used or else give space before writing %c//
    scanf(" %c",&wardtype);
    printf("No.of days admitted: ");
    scanf("%d",&days);
    printf("\n Patient name: %s",name);
    switch(wardtype)
    {
    case 'P':bill=calculateBill(wardtype,days);
             if(days>7)
             {
                printf("\nTotal Bill Before Discount: %.0f",bill);
                printf("\nDiscount Applied: %.0f",bill*0.05);
                printf("\nFinal Bill Amount: %.0f",bill-(bill*0.05));
             }
             else
             {
                printf("\n Final Bill Amount: %.0f",bill);
             }
             break;
    case 'S':bill=calculateBill(wardtype,days);
            if(days>7)
             {
                printf("\nTotal Bill Before Discount: %.0f",bill);
                printf("\nDiscount Applied: %.0f",bill*0.05);
                printf("\nFinal Bill Amount: %.0f",bill-(bill*0.05));
             }
             else
             {
                printf("\n Final Bill Amount: %.0f",bill);
             }
             break;
    case 'G':bill=calculateBill(wardtype,days);  
             if(days>7)
             {
                printf("\nTotal Bill Before Discount: %0.f",bill);
                printf("\nDiscount Applied: %.0f",bill*0.05);
                printf("\nFinal Bill Amount: %.0f",bill-(bill*0.05));
             }
             else
             {
                printf("\n Final Bill Amount: %0.f",bill);
             } 
             break;             
    }
}
float calculateBill(char wardtype,int days)
{
   if(wardtype=='P')
    return(float)days*5000;
   else if(wardtype=='S')
    return(float)days*2000;
   else if(wardtype=='G')
    return(float)days*1000;
}