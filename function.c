#include<stdio.h>

void First (void){ 	
	printf("I am now inside function First\n");
}
 void Second (void){ 
	printf( "I am now inside function Second\n");
	First();
	printf("Back to Second\n");
}
int main (){
	printf( "I am starting in function main\n");
    	First ();
	 printf( "Back to main function \n");
    	Second ();
   	printf( "Back to main function \n");
	return 0;
}

