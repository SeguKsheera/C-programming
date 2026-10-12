/* c program to determine whether a student has passed or failed. To pass, a student requires a total of 40%and at least 33% in each subject. Assume there are three subjects and take the mark as input from the user.*/

#include<stdio.h>
int main(){
    int chem,phy,math,marks;

    printf("Enter chemistry marks:");
    scanf("%d",&chem);
    printf("Enter physics marks:");
    scanf("%d",&phy);
    printf("Enter maths marks:");
    scanf("%d",&math);

    marks = ((chem+phy+math)/3);
    if(marks>=40 && chem>=33 && phy>=33 && math>=33){
        printf("Student has passed");
    }
    else{
        printf("Student has failed");
    }

    return 0;
}
