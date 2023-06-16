#include<stdio.h>

void printGrade(int marks){
    if(marks>89 && marks<=100){
    printf("Grade A\n");
    }else if(marks>74 && marks<90){
    printf("Grade B\n");
    }else if(marks>59 && marks<=74){
    printf("Grade C\n");
    }else if(marks>49 && marks<=59){
    printf("Grade D\n");
    }else if(marks>0 && marks<=49){
    printf("Grade F\n");
    }else {
    printf("invalid marks entered\n");
    }
}
int main(){
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);

    printGrade(marks);
    return 0;
}
