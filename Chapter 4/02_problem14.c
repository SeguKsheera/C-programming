// c program to print 'n' natural numbers using do-while loop

#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the number of natural no.:");
    scanf("%d",&n);

    do{
        printf("The natural number is %d \n",i);
        i++;
    }while(i<=n);
    return 0;
}
/*Enter the number of natural no.:5
The natural number is 1 
The natural number is 2 
The natural number is 3 
The natural number is 4 
The natural number is 5 
*/
