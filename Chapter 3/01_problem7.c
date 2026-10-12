/* c program to find grade of a student given his marks based on below:
90-100=>A
80-90=>B
70=80=>C
60-70=>D
50-60=>E
<50 =>F */

#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);

    if(marks<=0 && marks>100){
        printf("Invalid marks");}
        
    else if (marks>=90 && marks<=100){
        printf("The grade is A");}
    else if(marks>=80 && marks<=89){
        printf("The grade is B");}
    else if(marks>=70 && marks<=79){
        printf("The grade is c");}
    else if (marks>=60 && marks<=69){
        printf("The grade is D");}
    else if(marks>=50 && marks<=59){
        printf("The grade is E");}
    else{
        printf("The grade is fail");
    }
    return 0;
}

