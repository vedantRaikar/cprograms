#include<stdio.h>



void main() {
	int n , i , sum ;
	int a[100];
	printf("Enter the lenght of the array: ");
	scanf("%d", &n);
	printf("enter all the elements of the array: \n");
	for(i=0 ; i<n ;i++){
		scanf("%d",&a[i]);
		
	}
	
	for(i=0 ; i<n ; i++){
	   sum = sum + a[i];
	   	
	}
 printf("sum of the elements of the array is: %d", sum);
 
}
