#include <stdio.h>

int main()
{
	int i=1, a=1;
	
	while(i<13)
	{
		if (i<12)
		{
			if (i>=11)
			{
				printf("\n\n");
				i++;
				continue;
			}
			printf("1 x %d = %d\t", i,i*1);
			printf("2 x %d = %d\t", i,i*2);
			printf("3 x %d = %d\t", i,i*3);
			printf("4 x %d = %d\t", i,i*4);
			printf("5 x %d = %d\n", i,i*5);
			i++;
		}

		else
		{
			printf("6 x %d = %d\t", a,a*6);
			printf("7 x %d = %d\t", a,a*7);
			printf("8 x %d = %d\t", a,a*8);
			printf("9 x %d = %d\t", a,a*9);
			printf("10 x %d = %d\n", a,a*10);
			a++;
			
			if (a>10)
			{
				return 0;
			}
		}
	}
}
