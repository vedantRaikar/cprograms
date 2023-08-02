#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
	int i ,j , n;
	char str[30][30] , temp[30];
	
	printf("enter the number of string elements: ");
	scanf("%d",&n);
	
	printf("Emter the list of strings:\n");
	for(i=0;i<=n;i++){
		gets(str[i]);
	}
	
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			if(strcmp(str[i],str[j])>0){
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
				
			}
		}
	}
	
	printf("The sorted string is:\t");
	for(i=0 ;i<=n ; i++){
		puts(str[i]);
		
	}
}
