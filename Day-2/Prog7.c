#include<stdio.h>
#include<string.h>
int main()
{
   char str[10];
   printf("Enter the string: ");
   scanf("%s",str);
   strrev(str);
   printf("Reverse of a string: %s",str);
   return 0;
}