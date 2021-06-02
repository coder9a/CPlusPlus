#include<stdio.h>
int main()
{
	int i,n, a[n],ele,flag,c=0;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be deleted\n");
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	{
		if(a[i] == ele)
		{
			flag = 1;
			break;
		}
		c++;
	}
	for(i=c;i<n;i++)
	{
		a[c] = a[c+1];
	}
	if(flag == 1)
	{
		n--;
		printf("Element found at position %d\n",c+1);	
		printf("Final array\n");
	    for(i=0;i<n;i++)
	    {
	    	printf("%d ",a[i]);
		}
	}
	else
	printf("Element not found");
}
