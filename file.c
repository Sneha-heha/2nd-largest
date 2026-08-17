#include<stdio.h>
int main()
{
int arr[100];
int n,larg,seclarg,i,j;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the %d element;\n",n); 
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
larg=arr[0];
seclarg=arr[0];
for (i=1;i<n;i++)
{
if(arr[i] > larg)
{
larg = arr[i];
}
}
for(j=0;j<n;j++)
{
if(arr[j]>seclarg && arr[j] != larg)
{
seclarg = arr[j];
}
}
printf("second largest is = %d",seclarg);

return 0;
}
 
