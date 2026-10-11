// c program to calculate the area of a circle and volume of cylinder using inputs supplied from user
#include<stdio.h>

int main(){
     float radius,height;
     //The area of circle
     printf("Enter the value of radius:");
     scanf("%f",&radius);

     printf("The area of circle is : %f \n",3.14*radius*radius);

     // The volume of cylinder
     printf("Enter the value of height:");
     scanf("%f",&height);

     printf("The volume of cylinder is :%f",3.14*radius*radius*height);

     return 0;
}

/* Enter the value of radius:5
The area of circle is : 78.500000 
Enter the value of height:6
The volume of cylinder is :471.000000 */
