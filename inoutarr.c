#include<stdio.h>
#define max 1000
void main (){
	int arr[max];
	int i , n ;
	
	printf("Enter size of array: ");
	scanf("%d" , &n);
	
	for(i=0 ; i<=n-1 ; i++){
		scanf("%d",&arr[i]);
		
	}
	
	for(i=0 ; i<=n ; i++){
		printf("%d , " , arr[i]);
			}
	
}
