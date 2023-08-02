#include<stdio.h>

int sumeven(int a[] , int m);

void main(){
	int i , m ;
	int a[100];
	printf("enter the elements of the array: ");
	scanf("%d" , &m);
	for(i=0 ; i<m ; i++){
		scanf("%d" , &a[i]); 
	}
	printf("the sum of all the positive numbers in the array is %d ", sumeven(a,m) );
}


int sumeven(int a[] , int m){
	int sum =0 ;
	int i ; 
	
	for(i=0 ; i<m ; i++){
		if(a[i]%2==0){
			sum += a[i];
		
		}
	}
	return(sum);
}
