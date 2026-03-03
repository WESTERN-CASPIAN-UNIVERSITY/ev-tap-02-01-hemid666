/*Tapşırıq 1: Şəxsi məlumatlar
Aşağıdakı məlumatları ekrana çıxaran proqram yazın:

•	Adınız
•	Soyadınız
•	Yaşınız
•	Universitetiniz
•	İxtisasınız
Gözlənilən çıxış:
Ad: Əli
Soyad: Məmmədov
Yaş: 20
Universitet: Bakı Dövlət Universiteti
İxtisas: Kompüter Elmləri*/

#include <stdio.h>
int main (){
	char ad[50], soyad[50], universitet[100], ixtisas [100];
	int yas;
	printf("adinzi daxil edin:");
	scanf("%s",ad);
	
	printf("soyadinizi daxil edin:");
	scanf("%s", soyad);
	
	printf("yasinizi daxil edin:");
	scanf("%d", &yas);
	
	printf("universitetinizi daxil edin:");
	scanf("%[\n]", universitet);
	
	printf("ixtisasinizi daxil edin:");
	scanf("%[^\n]",ixtisas);
	
	printf("\n--- Melumatlar ---\n");
	printf("Ad: %s\n", ad);
	printf("Soyad: %s\n", soyad);
	printf("Yas: %d\n", yas);
	printf("Universitet: %s\n", universitet);
	printf("Ixtisas: %s\n", ixtisas);

	return 0;
}	
