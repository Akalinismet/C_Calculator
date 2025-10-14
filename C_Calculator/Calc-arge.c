/* 
//Farklý Yapýlarla Denemeler yaptýðým Kýsým
#include <stdio.h>
#include <math.h>

int main(void)
{
    double num1 = 0, num2 = 0, sonuc = 0;
    char islem;

    while (1)
    {
        printf("Enter Your Calculation (or q to quit): ");
        if (scanf(" %lf%c%lf", &num1, &islem, &num2) != 3) {
            // Kullanýcý çýkmak istiyor mu diye kontrol
            char quit;
            scanf(" %c", &quit);
            if (quit == 'q' || quit == 'Q')
                break;
            else {
                printf("Invalid input.\n");
                // stdin'i temizle
                while (getchar() != '\n');
                continue;
            }
        }

        switch (islem)
        {
        case '+':
            sonuc = num1 + num2;
            break;
        case '-':
            sonuc = num1 - num2;
            break;
        case '*':
            sonuc = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Division by zero error!\n");
                continue;
            }
            sonuc = num1 / num2;
            break;
        case '%':
            sonuc = fmod(num1, num2);
            break;
        case '^':
            sonuc = pow(num1, num2);
            break;
        default:
            printf("Unknown operator.\n");
            continue;
        }

        printf("Result: %.2lf\n", sonuc);
    }

    return 0;
}
*/