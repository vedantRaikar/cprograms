#include<stdio.h>

void main(){
	int n , i , max , min ;
	int a[100];
	printf("enter the lenght of array: ");
	scanf("%d", n);
	printf("enter the elements of the array: \n");
	
	for(i=0 ; i<n ; i++){
	  scanf("%d",&a[i]);
	  
	}
	
	for(i=0 ; i<n ; i++){
		max = a[0];
	
		if(a[i]>max){
		 max = a[i];
		}
	
	}
	
	for(i=0 ; i<n ; i++){
		min = a[0];
	
		if(a[i]<min){
		 min = a[i];
		}
	
	}	
}
