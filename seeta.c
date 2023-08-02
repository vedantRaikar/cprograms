#include<stdio.h>

void main() {
	int a[100] , p[100] , arm[100] ; 
	int i , j , remain , rev, tempp, tempa , f=0 , k; 
	
	printf("enter the lenght of the array: ");
	scanf("%d" , &j);
	printf("Enter the elements of the array:");
	for(i =0 ; i<j-1 ; ++i)
	{
		scanf("%d\t" ,&a[i]);
		
	}
	
	for(i=0 ; i<j-1 ; ++i)
	{
		tempp = a[i];
		while(a[i]!= 0)
		{
			remain=a[i]%10;
			rev = (rev*10)+remain;
			a[i] = a[i]/10;
			
			
		}
		 
		if(tempp == rev)
		{
			p[f] = tempp;
			++f;
		}
	}
	printf("The array of the palindrome is : ");
	for(i=0 ; i<f ; i++){
		printf("%d\t" , p[i]);
		
	}
}
