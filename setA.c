#include<stdio.h>
#include<math.h>

void main(){
    int i , j , tempp , tempa , tempc , remain , rev , w=0 , v=0 ,sum ,count , len , k;
	int x[100] , p[100] , a[100] , merge[100];
	
	printf("enter the size of the array: ");
	scanf("%d", &j);
	printf("enter the elements of the array:\n");
	for(i=0 ; i<j ; i++)
	{
       printf("enter the %d element= ",i+1);
	   scanf("%d", &x[i]);
	}
	
	for(i=0 ; i<j ; i++)
	{ 
	  rev = 0;
	  tempp = x[i];
	  while(tempp!=0)
	  {
	     
	     
	     remain = tempp%10;
	     rev = (rev*10)+remain;
	     tempp=tempp/10;
      } 
	   if(rev==x[i])
	   {
	   	 p[w] = rev;
	   	 ++w;
	   }	
	}
	printf("The list of palindromes in the array are: ");
	for(i=0 ; i<w ; i++)
	{
	   printf("%d\t", p[i]);
	}
	
	
	
	
	
	for(i=0 ; i<j ; i++){
		tempa = x[i];
		tempc = x[i];
		count = 0;
		sum = 0 ;
		
		
	 while(tempc!=0)
	  {
	  	remain= tempc%10;
	  	++count;
	  	tempc=tempc/10;
	  	
	  }
	    
	 while(tempa!=0)
	  {
	  	remain= tempa%10;
	  	sum = sum + pow(remain,count);
	  	tempa=tempa/10;
	  	
	  }
	  
	  if(sum==x[i])
	  {
	    a[v]=sum;
	    ++v;
	  }
	  
	}
	
	printf("\nThe list of armstrong numbers in the array are: ");
	for(i=0 ; i<v ; i++)
	{
		printf("%d\t",a[i]);s
	}
	
	
  //merging the two arrays.
  len = w+v;
  for(i=0 ; i<w ; i++)
  {
  	merge[i] = p[i];
  }
  
  for(i=w ; i<len;i++){
  	for(k=0;k<v;k++){
  		merge[i] = a[k];
	  }
  }
  printf("\nThe merged array is: ");
  for(i=0;i<len;i++)
  {
  	printf("%d " ,merge[i]);
  }
}
