#include<stdio.h>

void main(){
	int a[5];
	int len =5 , i , temp  , m;
	

	
	printf("enter the elements of the array: \n");
	for(i=0 ; i<len ; i++){
		scanf("%d" , &a[i]);
	}
	
		printf("the array is : ");
	for(i=0 ; i<len ; i++){
		printf("%d\t", a[i]);
		
	}
	
		
	for(i=0 ; i<len ; i++){
		for(m=0 ; m<i-len-1; m++){
		
	    if(a[m]<a[m+1]){
	    	temp = a[m];
	    	a[m]=a[m+1];
	    	a[m+1]=temp;
	    }
	}	
	}
	
    	printf("sorted array: ");
	for(i=0 ; i<len ; i++){
		printf("%d" , a[i]);
	}
	

}
