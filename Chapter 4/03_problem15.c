// c program to print 'n' natural numbers using for loop

#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number of natural no.:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("The natural number is %d \n",i);
    }
    return 0 ;
}
/*Enter the number of natural no.:6
The natural number is 1 
The natural number is 2 
The natural number is 3 
The natural number is 4 
The natural number is 5 
The natural number is 6 
*/
