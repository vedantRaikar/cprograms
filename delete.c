#include<stdio.h>

void main(){
	int i , n , pos ;
	int a[1000]; 
	printf("enter the size of the array: ");
	scanf("%d" , &n);
	
	printf("enter the elements of the array: ");
	for(i=0 ; i<n ; i++){
		scanf("%d", &a[i] );
		
	}
	
	printf("enter the position of the element to be deleted: ");
	scanf("%d", &pos);
	
	for(i=pos-1 ; i<n-1 ; i++){
	
	   a[i] = a[i+1];
}

   n--;
   
  for(i=0 ; i<n ; i++ ){
  	printf("%d\t", a[i]);
  	
  }  
}
