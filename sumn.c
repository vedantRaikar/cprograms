#include<stdio.h>

void main(){
	int  i ,n , sum = 0 ; 
	printf("enter the number till which you want toprint the elements. ");
    scanf("%d" , &n);
    
    for( i = 0  ; i<=n ; ++i ){
    	sum += i ;
    	
	}
	
   printf("the of all the %d elements is %d" , n , sum );
   
}
