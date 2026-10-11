// c program to convert celsius temperature to fahrenheit using inputs supplied from user

#include<stdio.h>

int main(){
     float celsius,fahrenheit;
   
     printf("Enter value of celsius:");
     scanf("%f",&celsius);

     fahrenheit = (9/5)*celsius + 32; 

     printf("The value of fahrenheit is:%f", fahrenheit);

     return 0;
}

/*Enter value of celsius:40
The value of fahrenheit is:72.000000 */
