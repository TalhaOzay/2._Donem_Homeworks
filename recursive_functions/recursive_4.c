#include <stdio.h>

int ebob(int num1,int num2){
    static int i=1,max=0;
    if (i<=num1 && i<=num2){
        if (num1%i==0 && num2%i==0){
            max=i;
            i++;
            ebob(num1,num2);
        }else{
            i++;
            ebob(num1,num2);
        }
    }else{
        return max;
    }
}

int main(){
    int num1,num2;
    printf("Please enter first and second number : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Greatest common divisor of %d and %d is %d",num1,num2,ebob(num1,num2));
    return 0;
}