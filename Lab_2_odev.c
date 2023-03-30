#include <stdio.h>

// 1. Örnek
/*
void agac(int);

void main(){
    int kademe = 1;
    agac(kademe);
}

void agac(int kademe){
    int i,bosluk,yildiz;
    if (kademe == 1){
        for (i=0; i<3;i++){
            for (bosluk=10;i<bosluk;bosluk--){
                printf(" ");
            }
            for (yildiz=2*i+1; 0<yildiz; yildiz--){
                printf("*");
            }
            printf("\n");
        }
        agac(kademe+1);
    }else if (kademe == 2){
        for (i=0; i<5;i++){
            for (bosluk=10;i<bosluk;bosluk--){
                printf(" ");
            }
            for (yildiz=2*i+1; 0<yildiz; yildiz--){
                printf("*");
            }
            printf("\n");
        }
        agac(kademe+1);
    }else if (kademe == 3){
        for (i=0; i<3;i++){
            for (bosluk=10;0<bosluk;bosluk--){
                printf(" ");
            }
            printf("|");
            printf("\n");
        }
        return;
    } 
}
*/

// 2. Örnek
/*
int bolme(int,int);
void main(){
    int bolunen,bolen,sonuc;
    printf("Lutfen boluneni giriniz : ");
    scanf("%d",&bolunen);
    printf("Lutfen boleni giriniz : ");
    scanf("%d",&bolen);
    sonuc = bolme(bolunen,bolen);
    printf("Sonuc : %d",sonuc);
}

int bolme(int bolunen,int bolen){
    static int answer = 0;
    if (bolunen<0){
        return answer-1;
    }
    bolunen -= bolen;
    answer++;
    bolme(bolunen,bolen);
}
*/

// 3. Örnek
/*
float carpma(float,float);

void main(){
    float  num1,num2;
    printf("Enter first number : ");
    scanf("%f",&num1);
    printf("Enter second number : ");
    scanf("%f",&num2);
    printf("Sonuç : %.2f",carpma(num1,num2));
}

float carpma(float num1,float num2){
    static float sonuc=0;
    if (num2<=0){
        return sonuc;
    }
    sonuc += num1;
    carpma(num1,num2-1);
}
*/

// 4. Örnek
/*
float kare(float,int);

void main(){
    float sayi;
    int üs;
    printf("Lutfen sayiyi giriniz : ");
    scanf("%f",&sayi);
    printf("Lutfen üssü giriniz : ");
    scanf("%d",&üs);
    printf("Sonuc : %.2f",kare(sayi,üs));
}

float kare(float sayi,int üs){
    static float sonuc=1;
    if (üs==0){
        return sonuc;
    }
    sonuc *= sayi;
    kare(sayi,üs-1);
}
*/