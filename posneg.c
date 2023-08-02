#include<stdio.h>
 void main (){
 	int a ;
 	
 	printf("enter the  integer: \n ");
 	scanf("%d", &a );
 	
 	if(a>0){
 		printf("it is a positive number.");
	 }
	 else if (a==0){
	 	printf("it is a negative number.");
	 }
 	else {
 		printf("the number is zero.");
 		
	 }
	 
	 return 0 ; 
	 
 }
