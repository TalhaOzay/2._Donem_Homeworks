#include <stdio.h>

int f(int x){
    int r;
    if (x <= 0){
        return 0;
    }else{
        r=f(x-1)+2;
        return r;
    }   
}

int main (){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Multiplay by two is %d",f(x));
    return 0;
}