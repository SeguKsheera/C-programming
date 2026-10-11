// c program to print the average of 3 numbers

#include<stdio.h>

int main(){
     int a,b,c;
     float avg;
     
     printf("Enter the value of a:");
     scanf("%d",&a);

     printf("Enter the value of b:");
     scanf("%d",&b);

     printf("Enter the value of c:");
     scanf("%d",&c);

     avg = (a+b+c)/3;
     printf("The average of three numbers is :%f",avg);

     return 0;
}
/*Enter the value of a:11
Enter the value of b:16
Enter the value of c:21
The average of three numbers is :16.000000 */
