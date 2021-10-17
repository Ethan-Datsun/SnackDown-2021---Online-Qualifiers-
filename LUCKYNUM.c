#include<stdio.h>

int main()
{
	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
	{
		int A,B,C;
	
		scanf("%d %d %d",&A,&B,&C);
		
		if(A==7 || B==7 || C==7)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;
}