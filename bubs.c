#include <stdio.h>
#include <time.h>


void Bubble_Sort(int A[],int n)
{
int i,j;
int temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j]>A[j+1])
{
temp = A[j];
A[j] = A[j+1];
A[j+1] = temp;
}
}
}
printf("\nSorted Array Using Bubble Sort is : \n");
for(i=0;i<n;i++)
{
printf("%d\n",A[i]);
}
}
int main()
{
int A[1000],i;
int choice,n;
clock_t start, end;
double time_required;
printf("\n1.Bubblesort\nEnter the choice:");
scanf("%d",&choice);
	
switch(choice)
{
case 1 : printf("\nEnter The Size Of Array : ");
scanf("%d",&n);
printf("\nEnter %d Elements : \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
start = clock();
Bubble_Sort(A,n);     
end = clock();
time_required = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\nTime Taken For Sorting %d Elements is : %f\n",n,time_required);
break;
				 
default : printf("\nInvalid Choice..!\n");				  
}
return 0;
}
