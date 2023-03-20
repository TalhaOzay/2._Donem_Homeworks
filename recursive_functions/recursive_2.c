#include <stdio.h>

int size;
int biggest(int num[]){
    static int i,max=-99;
    if (i==size){
        return 0;
    }else{
        if (max<num[i]){
            max=num[i];
            i++;
            biggest(num);
        }
    }
    return max;
}

int main(){
    printf("Please enter how many numbers you will enter: ");
    scanf("%d",&size);
    int num[100],i;
    for (i=0;i<size;i++){
        printf("Enter %d. number: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Biggest number in this array is %d",biggest(num));
    return 0;
}