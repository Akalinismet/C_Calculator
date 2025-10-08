#include <stdio.h> //Temel Komutlar için C Kütüphanesi
#include <math.h> //C Matematiksel iþlemler kütüphanesi

int main(void)
{

	int secim = 0; //Kullanýcýnýn menüden sectigi islem
	int number1 = 0; //Kullanýcý'dan alýnan birinci sayi
	int number2 = 0; //Kullanýcý'dan alýnan ikinci sayi

	printf("Welcome To Basic Calculator By Ismet Akalin\n\n");

	do {
		printf("\nPlease Select Your Calculations;\n");
		printf("Additon        => 1 (number1 + number2)\n");
		printf("Subtraction    => 2 (number1 - number2)\n");
		printf("Multiplication => 3 (number1 x number2)\n");
		printf("Division       => 4 (number1 / number2)\n");
		printf("Modulus        => 5 (number1 %% number2)\n");
		printf("Exponentiation => 6 ( number1^number2 )\n");
		printf("Square root    => 7 (number1^(1/2) & number2^(1/2))\n");
		printf("Exit           => 8\n\n");

		printf("Your Choice: ");
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
				 int sonuc = number1 + number2;

				 printf("\nAddition Result: %d\n", sonuc);
			 }
			 else if (secim == 2)
			 {
				 int sonuc = number1 - number2;

				 printf("\nSubtraction Result: %d\n", sonuc);
			 }
			 else if (secim == 3)
			 {
				 int sonuc = number1 * number2;

				 printf("\nMultiplication Result: %d\n", sonuc);
			 }
			 else if (secim == 4)
			 {	
				 if (number2 == 0)
				 {
					 printf("\nERROR(/0): Your Second Number Must be Diffrent to 0 (Zero)\n");
				 }
				 else
				 {
					 double sonucdiv = ((double) number1) / ((double) number2);

					 printf("\nDivision Result: %.2lf\n", sonucdiv);
				 }

			 }
			 else if (secim == 5)
			 {
				 if (number2 == 0)
				 {
					 printf("\nERROR(%%0): Your Second Number Must be Diffrent to 0 (Zero)\n");
				 }
				 else
				 {
					 int sonuc = number1 % (number2);

					 printf("\nModulus Result: %d\n", sonuc);
				 }
				 
			 }
			 else if (secim == 6)
			 {
				 double sonucpow = pow((double) number1, (double) number2);

				 printf("\nExponentiation Result: %.2lf\n", sonucpow);
			}
			 else if (secim == 7)
			 {
				 if (number1 >= 0 && number2 >= 0)
				 {

					double sonuc1 = sqrt((double) number1);
					double sonuc2 = sqrt((double) number2);

					printf("\nSquare root Results (1&2): %.2lf & %.2lf\n", sonuc1, sonuc2);
				 
				 }
				 else
				 {
					printf("\nERROR(>0): Your Numbers Must be Greater Than or Equal to 0 (Zero) for Square Root\n");
				 }
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
