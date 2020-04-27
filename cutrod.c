#include <stdio.h>

int max(int num1, int num2) 
{
    return (num1 < num2 ) ? num2 : num1;
}
int cutRod(int price[], int n) 
{ 
	int val[n+1]; 
   	val[0] = 0; 
   	int i, j; 
  
   
   	for (i = 1; i<=n; i++) 
   	{ 
       		int maximum = -99; 
       		for (j = 0; j < i; j++) 
         		maximum = max(maximum, price[j] + val[i-j-1]); 
       		val[i] = maximum; 
   	} 
  
   	return val[n]; 
} 

int main()
{
	int n;
	printf("Enter the length of the rod=");
	scanf("%d",&n);
	int price[n];
	printf("Enter the price of each piece=\n");
	for(int i=0;i<n;i++)
		scanf("%d",&price[i]);
	printf("The maximum obtainable value is : %d",cutRod(price,n));
	return 0;
}