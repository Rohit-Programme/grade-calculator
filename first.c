// Write a Program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <=marks < 90 is A
// 90<= marks <= 100 is A+
#include<stdio.h>
int main(){
    int marks;

    printf("enter your marks");
    scanf("%d",&marks);

    if(marks >=30 && marks <=70){
        printf("you garde is B");
    }

    else if(marks >= 70 && marks <=90){
        printf("you garde is A");
    }

    else if(marks<=90 && marks<=100){
        printf("your grade is A+");
    }
    else{
        printf("you are failed");
    }
}
