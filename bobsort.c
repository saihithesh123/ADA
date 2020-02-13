#include<stdio.h>
#include<time.h>


void bubble_sort(int a[],int n)
{
int i,j;
int temp;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is :\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
void main()
{
clock_t start,end;
double cpu_time_used;

start=clock();
int a[1000];
int n,i;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

bubble_sort(a,n);

  end = clock();
 
  cpu_time_used= ((double) (end - start)) / CLOCKS_PER_SEC;
  printf("time taken is %lf",cpu_time_used);
}
