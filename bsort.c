#include<stdio.h>
void main(){
	int a[100],n,i,j,positon ,pos ,small;
	printf("Enter number of elements ");
	scanf("%d",&n);
	
	printf("Enter the %d elements: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	 for(i=0;i<n-1;i++){
	 	pos=1 , small =a[i];
	 	for(j=i+1;j<n;j++){
	 		if(small>a[j]){
	 			pos = j;
	 			small =a[j];
			 }
		 }
		 a[pos]=a[i];
		 a[i]=small;
		 
	 }
	 
	 for(i=0;i<n;i++){
	 	printf("%d\t" , a[i]);
	 }
}
