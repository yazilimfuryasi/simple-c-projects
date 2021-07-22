#include <stdio.h>

int main()

{

	char kadi[20], pass[20];
	
	tekrar:
	
	printf("Username: ");
	scanf("%s", &kadi);
	
	printf("Password: ");
	scanf("%s", &pass);

	if (strcmp(kadi, "admin") == 0 && strcmp(pass, "12345") == 0)
	{
		printf("Giris Basarili!");
	}
	
	else
	{
		printf("Hatali Giris\n");
		goto tekrar;
	}
}
