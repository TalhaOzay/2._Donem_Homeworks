#include <stdio.h>

void tersten(char name[],int length){
    if (0<=length){
        length--;
        printf("%c",name[length]);
        tersten(name,length);
    }else{
        return;
    }
}

int main(){
    char name[26];
    int lenght;
    printf("Enter your name: ");
    gets(name);
    for (lenght=0;name[lenght] != '\0';lenght++);
    printf("%d\n",lenght);
    tersten(name,lenght);
    return 0;
}