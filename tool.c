#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
	char url[50];
	int secenek;

	system("clear");

	printf("1: XSS aciklari bulma\n2: SQL Injection aciklari bulma\nUyari! Sadece linux tabanli cihazlarda calismaktadir!\nGiris: ");
	scanf("%d", &secenek);

	if (secenek == 1)
	{
		system("clear");
		printf("Coming Soon... Goodbye!");
		Sleep(1.5);
		return 0;
	}
	else if (secenek == 2)
	{
		printf("Lutfen url giriniz: ");
		scanf("%s", url);
		printf("Lutfen bekleyiniz!");
		Sleep(2);
		system("sqlmap -u %s --dbs --random-agent", url);
	}
	else
	{
		system("clear");
		printf("Gecersiz secenek sectiniz!");
		Sleep(1.5);
		main();
	}
}