#include <stdio.h>


int gcd(int a, int b){
	int c;
	if(a<b)
		c = a;
	else 
		c=b;
	
	while (a%c!=0 || b%c!=0)
		c = c-1;
	
	return c;
}


int main(){
int a,b;
	a=24;
	b=10;
	int c = gcd(a,b);
	printf("%d\n", c);

}
