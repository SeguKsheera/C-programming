// c program to calculate simple interest using inputs supplied by the user.

#include<stdio.h>

int main(){
     int principle,years,rate, simple_interest;
     printf("Enter the value of principle:");
     scanf("%d",&principle);

     printf("Enter the value of number of years:");
     scanf("%d",&years);

     printf("Enter the value of rate of interest:");
     scanf("%d",&rate);

     simple_interest = (principle*years*rate)/100;

     printf("The value of simple interest is:%d",simple_interest);

     return 0;  
}
/*Enter the value of principle:22
Enter the value of number of years:30
Enter the value of rate of interest:10
The value of simple interest is:66 */
