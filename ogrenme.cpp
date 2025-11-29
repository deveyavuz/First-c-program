#include <iostream>


int Topla(int a, int b);
int Cikar(int a, int b);
int Carp(int a, int b);
double Bol(int a, int b);
int main()
{
	int sayi1, sayi2, secim, sonuc;

	std::cout << "Basit Hesap Makinesi\n";
	std::cout << "1. Toplama\n";
	std::cout << "2. Cikarma\n";
	std::cout << "3. Carpma\n";
	std::cout << "4. Bolme\n";
	std::cout << "Birinci sayiyi giriniz: ";
	std::cin >> sayi1 ;
	std::cout << "Ikinci sayiyi giriniz: ";
	std::cin >> sayi2 ;
	std::cout << "Yapmak istediginiz islemi seciniz (1-4): ";
	std::cin >> secim;
	
	if (secim == 1) {
		sonuc = Topla(sayi1, sayi2);
		std::cout << "Sonuc: " << sonuc << std::endl;
	}
	else if(secim == 2) {
		sonuc = Cikar(sayi1, sayi2);
		std::cout << "Sonuc: " << sonuc << std::endl;
	}
	else if (secim == 3) {
		sonuc = Carp(sayi1, sayi2);
		std::cout << "Sonuc: " << sonuc << std::endl;
	}
	else if (secim == 4) {
		double bolmeSonuc = Bol(sayi1, sayi2);
		std::cout << "Sonuc: " << bolmeSonuc << std::endl;
	}
	else {
		std::cout << "Gecersiz secim!";
		return 1;
	}
	
	return 0;
}
int Topla (int a , int b)
{
	return a + b;
}
int Cikar (int a , int b)
{
	return a - b;
}
int Carp (int a , int b)
{
	return a * b;
}
double Bol (int a , int b)
{
	if (b == 0)
	{
		std::cout << "Hata: Sifira bolemezsin";
		return 1;
	}
	return (double)a / b;
}