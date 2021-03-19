#include <stdio.h>
 void main()
 {
	int i,j,k,a[50],b[50],c[100],temp,m,n;
    printf("Enter the Size of First Array\n");
    scanf("%d",&m);
    printf("Enter the elements of first Array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("Enter the Size of Second Array\n");
	scanf("%d",&n);
	printf("Enter the elements of Second Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m-1;i++)
	{
		for(k=i+1;k<m;k++)
		{
			if(a[i]>a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	for(j=0;j<n-1;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(b[j]>b[k])
			{
				temp=b[j];
				b[j]=b[k];
				b[k]=temp;
			}
		}
	}
	printf("The Sorted First Array is\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nThe Sorted Second Array is\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",b[j]);
	}
	printf("\nThe Merge of Sorted Arrays \n");
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(i=m,j=0;i<m+n;i++,j++)
	{
		c[i]=b[j];
	}
	for(i=0;i<m+n;i++)
	{
		printf("%d\t",c[i]);
	}
 }