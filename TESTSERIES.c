#include<stdio.h>
		/* 0 = draw
			1=won by india
			2 = won  by england */ 
int main()
{
	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
	{
		int r;
		int india=0,england=0;
		
		for(int i=0;i<5;i++)
		{
			scanf("%d",&r);
			if(r==1)
				india++;
			else if(r==2)
				england++;
		}
		if(india>england)
			printf("INDIA\n");
		else if(england>india)
			printf("ENGLAND\n");
		else
			printf("DRAW\n");
	}
	return 0;
}

