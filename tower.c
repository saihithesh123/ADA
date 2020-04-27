#include<stdio.h>
#include<stdlib.h>

void towerofhanoi(int n,char src,char temp,char dist)
{
if(n==1)
{
printf("move disc 1 from %c to %c\n",src,dist);
return;
}
towerofhanoi(n-1,src,dist,temp);
printf("move disc %d from %c to %c\n",n,src,dist);
towerofhanoi(n-1,temp,src,dist);
}
int main()
{
int n=3;
towerofhanoi(n,'A','B','C');
return 0;
}
