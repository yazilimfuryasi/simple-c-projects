#include <stdio.h>

int main()
{

	int i=1;
	while(i<=20)
	{
		if(i%2==0)
		{
			printf("Cift Sayi: %d\n",i);
		}
		if(i%2==1)
		{
			printf("Tek Sayi: %d\n",i);
		}
		i++;
	}

}
