#include<stdio.h>
int main()
{
	int a[5],i,sum=0,n;
	float average;
	printf("Enter Number Array Elements : ");
	scanf("%d",&n);
	//printf("Enter Array Elements : ");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Sum of array elements is = ");
	for(i=0;i<4;i++)
	{
		sum=sum+a[i];
		average=sum/n;
	}
	printf("%d \n Average =%1.f",sum,average);
	return 0;
}