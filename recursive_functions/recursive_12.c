#include<stdio.h>

// recursive function for 
// finding prime factor
int primeFactor(int num)
{
   int i = 2;
   if(num==1) return;
   while(num%i!=0) i++;
   printf("%d\t",i);
   primeFactor(num/i);
}

int main()
{
   int number;

   printf("Enter a Positive Integer number: ");
   scanf("%d",&number);

   printf("Prime factors of %d :\n",number);
   primeFactor(number);

   return 0;
}

/*
Enter a positive Integer number: 96
Prime factors of 96 :
2 2 2 2 2 3
En küçük asal sayılar ile bölemlere ayırıyor.
*/