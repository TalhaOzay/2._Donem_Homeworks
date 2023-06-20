#include <stdio.h>

void main(){
    int schoolNumber,choice;
    char name[20],surname[20];
    FILE *students;
    if ((students = fopen("students.dat","w")) == NULL){
        printf("Error opening.");
    }else{
        printf("Enter your school number , name and surname: \n");
        printf("Veri girdisini bitirmek icin EOF giriniz.\n");
        printf("? ");
        scanf("%d%s%s",&schoolNumber,name,surname);
        while(!feof(stdin)){
            fprintf(students,"%d  %s %s\n",schoolNumber,name,surname);
            printf("? ");
            scanf("%d%s%s",&schoolNumber,name,surname);
        }
        
        fclose(students);
    }
    

}