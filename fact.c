#include<stdio.h>
void main () { 
 int num , i , fact =1;
 printf("enter the number to find the factorial of: ");
 scanf("%d " , & num );
 for(i=2 ; i<=num ; i++ ){
 	fact*=i;
 	
 }
printf("the factorial of the number is: %d", fact);

 
 
}
