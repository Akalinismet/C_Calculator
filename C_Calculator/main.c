#include <stdio.h> // Temel Giriþ/Çýkýþ iþlemleri (printf, scanf_s) için C Kütüphanesi
#include <math.h>  // Matematiksel iþlemler (pow, sqrt) için C Kütüphanesi

int main(void)
{
	// Deðiþken Tanýmlamalarý
	int secim = 0;   // Kullanýcýnýn menüden seçtiði iþlem numarasý
	int number1 = 0; // Kullanýcýdan alýnan birinci sayý
	int number2 = 0; // Kullanýcýdan alýnan ikinci sayý

	printf("Welcome To Basic Calculator By Ismet Akalin\n\n");

	// Kullanýcý '8' (Çýkýþ) seçeneðini seçene kadar döngüyü devam ettir
	do {
		// Ýþlem Menüsünü Ekrana Yazdýrma
		printf("\nPlease Select Your Calculations;\n");
		printf("Additon        => 1 (number1 + number2)\n");
		printf("Subtraction    => 2 (number1 - number2)\n");
		printf("Multiplication => 3 (number1 x number2)\n");
		printf("Division       => 4 (number1 / number2)\n");
		printf("Modulus        => 5 (number1 %% number2)\n"); // %% ile % karakteri yazdýrýlýr
		printf("Exponentiation => 6 (number1^number2)\n");
		printf("Square root    => 7 (number1^(1/2))\n");
		printf("Exit           => 8\n\n");

		printf("Your Choice: ");
		scanf_s("%d", &secim);

		// HOCANIZIN ÖNERDÝÐÝ YAPI BURADA BAÞLIYOR: 1-7 (Ýþlemler), 8 (Çýkýþ), Diðerleri (Hata)

		// 1. Ana Ýþlemler: Seçim 1 ile 7 Arasýnda mý? (Sayý Giriþi ve Hesaplama Bloðu)
		if (secim >= 1 && secim <= 7)
		{
			// Karekök iþlemi (tek sayý) için özel giriþ al
			if (secim == 7)
			{
				printf("\nEnter Your Number for Square Root;\n");
				printf("Your Number: ");
				scanf_s("%d", &number1);
				// number2 bu iþlemde kullanýlmadýðý için alýnmaz.
			}
			// Diðer tüm iþlemler (1, 2, 3, 4, 5, 6) için iki sayý giriþi
			else
			{
				printf("\nEnter Your Two Numbers for Calculations;\n");
				printf("Your Numbers: ");
				scanf_s("%d %d", &number1, &number2);
			}

			// Seçime göre ilgili iþlemi yap
			if (secim == 1) // Toplama
			{
				int sonuc = number1 + number2;
				printf("\nAddition Result: %d\n", sonuc);
			}
			else if (secim == 2) // Çýkarma
			{
				int sonuc = number1 - number2;
				printf("\nSubtraction Result: %d\n", sonuc);
			}
			else if (secim == 3) // Çarpma
			{
				int sonuc = number1 * number2;
				printf("\nMultiplication Result: %d\n", sonuc);
			}
			else if (secim == 4) // Bölme
			{
				// Sýfýra Bölme Kontrolü
				if (number2 == 0)
				{
					printf("\nERROR(/0): Your Second Number Must be Different to 0 (Zero)\n");
				}
				else
				{
					// Daha hassas sonuç için double (ondalýklý) dönüþüm yapýlýr
					double sonucdiv = ((double)number1) / ((double)number2);
					printf("\nDivision Result: %.2lf\n", sonucdiv);
				}
			}
			else if (secim == 5) // Mod alma
			{
				// Sýfýra Mod Alma Kontrolü
				if (number2 == 0)
				{
					printf("\nERROR(%%0): Your Second Number Must be Different to 0 (Zero)\n");
				}
				else
				{
					int sonuc = number1 % (number2);
					printf("\nModulus Result: %d\n", sonuc);
				}
			}
			else if (secim == 6) // Üs Alma
			{
				double sonucpow = pow((double)number1, (double)number2);
				printf("\nExponentiation Result: %.2lf\n", sonucpow);
			}
			else if (secim == 7) // Karekök Alma
			{
				// Karekök için sayýnýn negatif olmamasý gerekir
				if (number1 >= 0)
				{
					double sonuc1 = sqrt((double)number1);
					printf("\nSquare root Result: %.2lf\n", sonuc1);
				}
				else
				{
					printf("\nERROR(>0): Your Number Must be Greater Than or Equal to 0 (Zero) for Square Root\n");
				}
			}
		}
		// 2. Çýkýþ Ýþlemi: Seçim 8 mi?
		else if (secim == 8)
		{
			printf("\n\nGood Bye, Thanks For Your Support\n\n");
		}
		// 3. Geçersiz Giriþ: Seçim 1-8 Aralýðý Dýþýnda mý?
		else
		{
			printf("\nPlease Enter Valid Number (1-8)\n");
		}

	} while (secim != 8); // secim 8'e eþit olmadýðý sürece döngü devam eder

	return 0;
}