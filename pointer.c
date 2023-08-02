#include<stdio.h>

void main(){
int var1 , var2 ;
int *ptr ;

ptr = &var1;
*ptr = 27 ;
printf("%d\n" , var1);

var2 = *ptr;

printf("%d\n" , var2);


}
