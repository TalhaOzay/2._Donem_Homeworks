#include <stdio.h>

void main(){
    int schoolNumber;
    char name[20],surname[20];
    FILE *students;
    if ((students = fopen("students.dat","r")) == NULL){
        printf("Error opening.");
    }else{
        printf("%-6d %-9s %-12s\n",schoolNumber,name,surname);
        fscanf(students,"%d%s%s",&schoolNumber,name,surname);

        while(!feof(students)){
            printf("%-6d %-9s %-12s\n",schoolNumber,name,surname);
            fscanf(students,"%d%s%s",&schoolNumber,name,surname);
        }
        fclose(students);
    } 
}