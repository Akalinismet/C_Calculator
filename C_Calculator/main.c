#include <stdio.h> // Temel Giri�/��k�� i�lemleri (printf, scanf_s) i�in C K�t�phanesi
#include <math.h>  // Matematiksel i�lemler (pow, sqrt) i�in C K�t�phanesi

int main(void)
{
	// De�i�ken Tan�mlamalar�
	int secim = 0;   // Kullan�c�n�n men�den se�ti�i i�lem numaras�
	int number1 = 0; // Kullan�c�dan al�nan birinci say�
	int number2 = 0; // Kullan�c�dan al�nan ikinci say�

	printf("Welcome To Basic Calculator By Ismet Akalin\n\n");

	// Kullan�c� '8' (��k��) se�ene�ini se�ene kadar d�ng�y� devam ettir
	do {
		// ��lem Men�s�n� Ekrana Yazd�rma
		printf("\nPlease Select Your Calculations;\n");
		printf("Additon        => 1 (number1 + number2)\n");
		printf("Subtraction    => 2 (number1 - number2)\n");
		printf("Multiplication => 3 (number1 x number2)\n");
		printf("Division       => 4 (number1 / number2)\n");
		printf("Modulus        => 5 (number1 %% number2)\n"); // %% ile % karakteri yazd�r�l�r
		printf("Exponentiation => 6 (number1^number2)\n");
		printf("Square root    => 7 (number1^(1/2))\n");
		printf("Exit           => 8\n\n");

		printf("Your Choice: ");
		scanf_s("%d", &secim);

		// HOCANIZIN �NERD��� YAPI BURADA BA�LIYOR: 1-7 (��lemler), 8 (��k��), Di�erleri (Hata)

		// 1. Ana ��lemler: Se�im 1 ile 7 Aras�nda m�? (Say� Giri�i ve Hesaplama Blo�u)
		if (secim >= 1 && secim <= 7)
		{
			// Karek�k i�lemi (tek say�) i�in �zel giri� al
			if (secim == 7)
			{
				printf("\nEnter Your Number for Square Root;\n");
				printf("Your Number: ");
				scanf_s("%d", &number1);
				// number2 bu i�lemde kullan�lmad��� i�in al�nmaz.
			}
			// Di�er t�m i�lemler (1, 2, 3, 4, 5, 6) i�in iki say� giri�i
			else
			{
				printf("\nEnter Your Two Numbers for Calculations;\n");
				printf("Your Numbers: ");
				scanf_s("%d %d", &number1, &number2);
			}

			// Se�ime g�re ilgili i�lemi yap
			if (secim == 1) // Toplama
			{
				int sonuc = number1 + number2;
				printf("\nAddition Result: %d\n", sonuc);
			}
			else if (secim == 2) // ��karma
			{
				int sonuc = number1 - number2;
				printf("\nSubtraction Result: %d\n", sonuc);
			}
			else if (secim == 3) // �arpma
			{
				int sonuc = number1 * number2;
				printf("\nMultiplication Result: %d\n", sonuc);
			}
			else if (secim == 4) // B�lme
			{
				// S�f�ra B�lme Kontrol�
				if (number2 == 0)
				{
					printf("\nERROR(/0): Your Second Number Must be Different to 0 (Zero)\n");
				}
				else
				{
					// Daha hassas sonu� i�in double (ondal�kl�) d�n���m yap�l�r
					double sonucdiv = ((double)number1) / ((double)number2);
					printf("\nDivision Result: %.2lf\n", sonucdiv);
				}
			}
			else if (secim == 5) // Mod alma
			{
				// S�f�ra Mod Alma Kontrol�
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
			else if (secim == 6) // �s Alma
			{
				double sonucpow = pow((double)number1, (double)number2);
				printf("\nExponentiation Result: %.2lf\n", sonucpow);
			}
			else if (secim == 7) // Karek�k Alma
			{
				// Karek�k i�in say�n�n negatif olmamas� gerekir
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
		// 2. ��k�� ��lemi: Se�im 8 mi?
		else if (secim == 8)
		{
			printf("\n\nGood Bye, Thanks For Your Support\n\n");
		}
		// 3. Ge�ersiz Giri�: Se�im 1-8 Aral��� D���nda m�?
		else
		{
			printf("\nPlease Enter Valid Number (1-8)\n");
		}

	} while (secim != 8); // secim 8'e e�it olmad��� s�rece d�ng� devam eder

	return 0;
}