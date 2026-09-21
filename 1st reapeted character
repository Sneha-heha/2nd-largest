#include<stdio.h>
int main()
{
char arr[100];
int n,i,j;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the characters:\n");
for(i=0;i<n;i++)
{
	scanf("%c",&arr[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
		{
		if(arr[i] == arr[j])
			{
			printf("first reapeted character = %c\n",arr[i]);
			return 0;
			}
 		}
}
 printf("no repeated character found \n");
 return 0;
}
