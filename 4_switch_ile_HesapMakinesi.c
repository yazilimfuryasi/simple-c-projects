#include<stdio.h>

int main()
{
	int secim,sayi1,sayi2,sonuc;
	
	printf("Sayi Gir: "); scanf("%d",&sayi1);
	printf("2. Sayi Gir: "); scanf("%d",&sayi2);
	
	printf("Toplama		: 1\n"); 
	printf("Cikarma		: 2\n");
	printf("Carpma		: 3\n"); 
	printf("Bolme		: 4\n"); 
	printf("Secenek: "); scanf("%d", &secim);

	switch(secim)
	{
		case 1:
			{
				sonuc = sayi1+sayi2; printf("Sonuc: %d", sonuc); break;
			}
		case 2:
			{
				sonuc = sayi1-sayi2; printf("Sonuc: %d", sonuc); break;
			}
		case 3:
			{
				sonuc = sayi1*sayi2; printf("Sonuc: %d", sonuc); break;
			}
		case 4:
			{
				printf("Sonuc: %.2f", (float)sayi1/(float)sayi2); break;
			}
		default : printf("Yanlis Secenek"); break;
	}

}
