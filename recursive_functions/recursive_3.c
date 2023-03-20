#include <stdio.h>

int f(int num){
    if (num<1){
        return 0;
    }else{
        return (num%10)+f(num/10);
    }
}

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Sum of digits of number : %d",f(num));
    return 0;
}