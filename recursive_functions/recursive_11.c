#include<stdio.h>

// recursive function for base conversion
int convert(int num, int base)
{
   int rem = num % base;

   if(num==0) return;

   convert(num/base, base);

   if(rem<10) printf("%d",rem);
   else printf("%c",rem-10+'A');
}

int main()
{
   int number;

   printf("Enter a positive decimal number: ");
   scanf("%d",&number);

   printf("The Binary value of %d = ",number);
   convert(number,2);

   printf("\nThe Octal value of %d = ", number);
   convert(number,8);

   printf("\nThe Hexadecimal value of %d = ", number);
   convert(number,16);

   return 0;
}