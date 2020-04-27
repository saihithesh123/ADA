#include <stdio.h> 
#include<stdlib.h>
int Pivot_bin(int[], int, int); 
int bin(int[], int, int, int); 

int pivotedBinarySearch(int arr[], int n, int key) 
{ 
   int pivot = Pivot_bin(arr, 0, n-1); 
  
  
   if (pivot == -1) 
       return bin(arr, 0, n-1, key); 
   if (arr[pivot] == key) 
       return pivot; 
   if (arr[0] <= key) 
       return bin(arr, 0, pivot-1, key); 
   return bin(arr, pivot+1, n-1, key); 
} 
  

int Pivot_bin(int arr[], int low, int high) 
{ 
   // base cases 
   if (high < low)  return -1; 
   if (high == low) return low; 
  
   int mid = (low + high)/2;   /*low + (high - low)/2;*/
   if (mid < high && arr[mid] > arr[mid + 1]) 
       return mid; 
   if (mid > low && arr[mid] < arr[mid - 1]) 
       return (mid-1); 
   if (arr[low] >= arr[mid]) 
       return Pivot_bin(arr, low, mid-1); 
   return Pivot_bin(arr, mid + 1, high); 
} 

int bin(int arr[], int low, int high, int key) 
{ 
   if (high < low) 
       return -1; 
   int mid = (low + high)/2;  /*low + (high - low)/2;*/
   if (key == arr[mid]) 
       return mid; 
   if (key > arr[mid]) 
       return bin(arr, (mid + 1), high, key); 
   return bin(arr, low, (mid -1), key); 
} 
  
int main() 
{ 
   
   		int a[50];
		int k,n;
		printf("Enter the no.of elements =");
		scanf("%d",&n);
		printf("Enter the elements of the array=\n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		printf("enter key=");
		scanf("%d",&k);
   		printf("Index of the element is = %d",pivotedBinarySearch(a, n, k)); 
   return 0; 
} 

