#include<stdio.h>
#include<conio.h>

int main()
{
	int sayi1, sayi2, toplam, fark, carpim;
	
	// Kullan�c�dan veri alarak i�lem yapmak
	printf("Sayi Girin: "); scanf("%d", &sayi1);
	printf("2. Sayiyi Girin: "); scanf("%d", &sayi2);

	printf("Toplam: %d\n", sayi1+sayi2);
	printf("Fark: %d\n", sayi1-sayi2);
	printf("Carpim: %d\n", sayi1*sayi2);
	printf("Bolunen: %.2f", (float)sayi1/(float)sayi2);

}
