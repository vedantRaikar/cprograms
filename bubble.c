#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char s1[100] , s2[100];
	int i , j ,cnt=0 ;
	printf("enter the string 1: ");
	gets(s1);
	printf("enter the string 2: ");
	gets(s2);
	
	if(strlen(s1)!=strlen(s2)){
		printf("no anagram");
		
	}
	else{
		for(i=0 ; i<strlen(s1);i++){
			for(j=0 ; j<strlen(s2);j++){
				if(s1[i]!=s2[j]){
					++cnt;
				}
			}
		}
	}
	if(cnt!=0){
		printf("anagram");
		
		
	}
	else{
		printf("not anagram");
	}
}
