#include <stdio.h>
int rfunc (int a)  //2) recursive function
{  
    if(a == 0)  
        return 0; 
    else   
    {  
        printf("%d ",a);  
        return rfunc(a-1); // 3) recursive call is made
    }  
} 
int main()
{
   rfunc(5); // 1) function call from main

   return 0;
}