#include<stdio.h>
#include<stdlib.h>

int binary_search(int key,int a[],int n)
{
int beg,mid,end;
beg=0;
end=n-1;
while(beg<=end)
{
mid=(beg+end)/2;
if(key==a[mid])
{
return mid;
}
else
{
if(key<a[mid])
{
end=mid-1;
}
}
if(key>a[mid])
beg=mid+1;
}
return-1;
}
void main()
{
int n, a[10], key, position, i;
scanf("%d",&n);
printf("\ninput %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements to be searched\n");
scanf("%d",&key);
position=binary_search(key,a,n);
if(position==-1)
printf("\nitem not found");
else
printf("\nitem found at position:%d\n",position);
}


