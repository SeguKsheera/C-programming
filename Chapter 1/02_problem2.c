// c program to calculate the area of a rectangle using inputs supplied from user

#include<stdio.h>

int main(){
     int length,width;
     printf("The length of rectangle:");
     scanf("%d",&length);
     
     printf("The width of rectangle:");
     scanf("%d",&width);

     printf("The area of rectangle is %d",length*width);
     return 0;
}

/* the output is
 The lenth of rectangle:15
 The width of rectangle:20
 The area of rectangle is 300 */
