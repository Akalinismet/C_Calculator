#include <stdio.h> //Temel Komutlar için C Kütüphanesi
#include <math.h> //C Matematiksel iþlemler kütüphanesi

int main(void)
{

	int secim = 0;
	int number1 = 0;
	int number2 = 0;

	printf("Welcome To Basic Calculator By Ismet Akalin\n\n");

	do {
		printf("\nPlease Select Your Calculations;\n");
		printf("Additon        => 1 (number1 + number2)\n");
		printf("Subtraction    => 2 (number1 - number2)\n");
		printf("Multiplication => 3 (number1 x number2)\n");
		printf("Division       => 4 (number1 / number2)\n");
		printf("Modulus        => 5 (number1 %% number2)\n");
		printf("Exponentiation => 6 ( number1^number2 )\n");
		printf("Square root    => 7 (number1^-1 & number2^-1)\n");
		printf("Exit           => 8\n\n");

		printf("Your Prefer: ");
		scanf_s("%d", &secim);

		if (secim >= 1 && secim <= 8)
		{ 
		 if (secim != 8)
		 {
			 printf("\nEnter Your Number for Calculations;\n");
			 printf("Your Numbers: ");
			 scanf_s("%d %d", &number1, &number2);

			 if (secim == 1)
			 {
				 int sonuc;
				 sonuc = number1 + number2;

				 printf("\nAddition Result: %d\n", sonuc);
			 }
			 else if (secim == 2)
			 {
				 int sonuc;
				 sonuc = number1 - number2;

				 printf("\nSubtraction Result: %d\n", sonuc);
			 }
			 else if (secim == 3)
			 {
				 int sonuc;
				 sonuc = number1 * number2;

				 printf("\nMultiplication Result: %d\n", sonuc);
			 }
			 else if (secim == 4)
			 {
				 int sonuc;
				 sonuc = number1 / number2;

				 printf("\nDivision Result: %d\n", sonuc);

			 }
			 else if (secim == 5)
			 {
				 int sonuc;
				 sonuc = number1 % (number2);

				 printf("\nModulus Result: %d\n", sonuc);
			 }
			 else if (secim == 6)
			 {
				 int sonuc;
				 sonuc = pow(number1, number2);

				 printf("\nExponentiation Result: %d\n", sonuc);
			}
			 else if (secim == 7)
			 {
				 int sonuc1;
				 int sonuc2;
				 sonuc1 = sqrt(number1);
				 sonuc2 = sqrt(number2);

				 printf("\nSquare root Results (1&2): %d & %d\n", sonuc1, sonuc2);
			 }
			
			else
			{
				printf("Please Enter Valid Number");
			}
			
		}

		 if (secim == 8)
		 {
			printf("\n\nGood Bye, Thanks For Your Support\n\n");
		 }
		
		}
		else
		{
			printf("\nPlease Enter Valid Number\n");
		}
	} while (secim != 8);


	return 0;
}
