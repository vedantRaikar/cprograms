#include<stdio.h>
long int fact(int);
int main(){
	int n ;
	long int c = 1;
	printf("enter the number: ");
	scanf("%d" , &n);
	c = fact(n);
	printf("the factorial of the number %d is %d" , n , c);
    return 0 ;
    
}

long int fact(int a){
	int i ;
	long int factorial = 1;
	for(i=1 ; i<=a ;i++){
		factorial = factorial * i;
		
	}
	return(factorial);
	
}


