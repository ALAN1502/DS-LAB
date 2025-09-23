#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	printf("Enter the number of rows and columns of the matrices:");
	scanf("%d %d",&m,&n);
	int A[m][n],B[m][n],sum[m][n],sub[m][n],mul[m][n];
	printf("Enter the elements of matrix A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Matrix1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}
	printf("Enter the elements of matrix B:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("Matrix2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",B[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=A[i][j]+B[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sub[i][j]=A[i][j]-B[i][j];
		}
	}
	if(m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				mul[i][j]=0;
				for(k=0;k<n;k++)
				{
					mul[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
	}
	 printf("\nMatrix Addition:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix Substraction:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",sub[i][j]);
		}
		printf("\n");
	}
	if(m==n)
	{
		printf("\nMatrix Multiplication:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d \t",mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n Matrix Multiplication is not possible(not square matrices).\n");
	}
return 0;
}
		
