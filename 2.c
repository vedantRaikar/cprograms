#include<stdio.h>

int rev(int);

int main(){
int n;
int c; 
printf("enter the number to be reversed: ");
scanf("%d" , &n);
c = rev(n);
printf("the reversed number is: %d", c);
return 0;
	
}

int rev(int num){
	int dig;
	int reve = 0;
	while(num!=0){
		dig = num%10;
		reve = (10*reve) + dig ;
		num = num/10;
		
		
	}
	
	return(reve);
	
}
