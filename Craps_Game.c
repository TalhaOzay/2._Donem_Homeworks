#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zar(void){
    int r=0,sum=0,s,zar1,zar2;
    zar1 = rand() %6 +1;
    zar2 = rand() %6 +1;
    sum = zar1 + zar2;
    return sum;
}

void main(){
    int deneme=0,dice,puan;
    int asd;
    srand(time(NULL));
    printf("Welcome to the craps game.\nPlease enter 1 to continue...\n");
    scanf("%d",&asd);
    printf("Zarlar atiliyor.\n");
    dice = zar();
    printf("Zarlar %d geldi.\n",dice);
    if(dice == 7 || dice == 11){
        printf("***TEBRİKLER***");
        printf("Oyunu kazandiniz.");
    }else if (dice == 2 || dice == 3 || dice == 12){
        printf("Poor you.");
        printf("Oyunu kaybettiniz.");
    }else{
        printf("Oyun devam ediyor. \n");
        puan = dice;
        dice = 0;
        printf("Zarlar 7 gelmediği sürece puaninizi tutturmaya çalisiniz.\n");
        printf("Puaniniz = %d.\n",puan);
        while (puan != dice){
            if (dice == 7){
                printf("Zarlar 7 geldigi icin kaybettiniz.");
                break;
            }
            dice = zar();
            printf("Zarlar %d geldi. \n",dice);
            deneme++;
        }
        if (puan == dice){
            printf("***Tebrikler Kazandiniz***\n");
            printf("Puaniniiz %d. denemenizde tutturdunuz.",deneme);
        }
    }
}