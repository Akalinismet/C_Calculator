#include <stdio.h>
#include <math.h>
#include <limits.h>

// --- Function Definitions ---

void print_menu(void)
{
    printf("\n[1] Addition       (a + b)\n");
    printf("[2] Subtraction    (a - b)\n");
    printf("[3] Multiplication (a * b)\n");
    printf("[4] Division       (a / b)\n");
    printf("[5] Power          (a ^ b)\n");
    printf("[6] Square Root   (sqrt(a))\n");
    printf("[7] Modulo         (a %% b)\n");
    printf("[8] Exit\n");
}

int add(int a, int b)
{
    if ((a > 0 && b > INT_MAX - a) || (a < 0 && b < INT_MIN - a)) {
        printf("ERROR Integer overflow.\n");
        return 0;
    }
    return a + b;
}

int subtract(int a, int b)
{
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        printf("ERROR Integer overflow.\n");
        return 0;
    }
    return a - b;
}

int multiply(int a, int b)
{
    if (a != 0 && ((b > 0 && (a > INT_MAX / b || a < INT_MIN / b)) ||
        (b < 0 && (a == INT_MIN && b == -1)))) {
        printf("ERROR Integer overflow.\n");
        return 0;
    }
    return a * b;
}

double divide(int a, int b)
{
    if (b == 0) {
        printf("ERROR Division by zero is undefined.\n");
        return NAN;
    }
    return (double)a / (double)b;
}

double power(int a, int b)
{
    if (a == 0 && b == 0) return NAN; // 0^0 hatalı durum
    double result = pow((double)a, (double)b);
    if (isinf(result)) {
        printf("ERROR Overflow in power calculation.\n");
        return NAN;
    }
    return result;
}

double square_root(int a)
{
    if (a < 0) {
        printf("ERROR Square root of a negative number is undefined.\n");
        return NAN;
    }
    return sqrt((double)a);
}

int modulo(int a, int b)
{
    if (b == 0) {
        printf("ERROR Modulo by zero is undefined.\n");
        return INT_MIN;
    }
    return a % b;
}

int main(void)
{
    int choice = 0;
    int number1 = 0;
    int number2 = 0;
    int scan_status = 0;

    printf("Welcome to Basic Calculator\n");

    do {
        print_menu();

        printf("Your choice: ");
        scan_status = scanf("%d", &choice);

        // Non-numeric veya hatalı giriş kontrolü
        if (scan_status != 1) {
            printf("ERROR Please Enter Valid Number (1-8)\n");
            while (getchar() != '\n');  // buffer temizle
            continue;
        }

        if (choice == 8)
        {
            printf("GOOD BYE and THANKS\n");
            printf("(CCalculator Release 0.1.3 (2025 - 10 - 20 AM)), from ISMET AKALIN\n");
            break;
        }

        if (choice >= 1 && choice <= 7)
        {
            if (choice == 6) {
                printf("a: ");
                if (scanf("%d", &number1) != 1) {
                    printf("ERROR\n");
                    while (getchar() != '\n');
                    continue;
                }
            }
            else {
                printf("a: ");
                if (scanf("%d", &number1) != 1) {
                    printf("ERROR\n");
                    while (getchar() != '\n');
                    continue;
                }
                printf("b: ");
                if (scanf("%d", &number2) != 1) {
                    printf("ERROR\n");
                    while (getchar() != '\n');
                    continue;
                }
            }

            switch (choice)
            {
            case 1:
                printf("Result: %d\n", add(number1, number2));
                break;
            case 2:
                printf("Result: %d\n", subtract(number1, number2));
                break;
            case 3:
                printf("Result: %d\n", multiply(number1, number2));
                break;
            case 4:
            {
                double result = divide(number1, number2);
                if (!isnan(result))
                    printf("Result: %.2f\n", result);
                break;
            }
            case 5:
            {
                if (number1 == 0 && number2 == 0)
                {
                    printf("ERROR\n");
                }
                else {
                    double result = power(number1, number2);
                    if (!isnan(result))
                        printf("Result: %.6f\n", result);
                    break;
                }
            }
            case 6:
            {
                double result = square_root(number1);
                if (!isnan(result))
                    printf("Result: %.6f\n", result);
                break;
            }
            case 7:
            {
                int result = modulo(number1, number2);
                if (result != INT_MIN)
                    printf("Result: %d\n", result);
                break;
            }
            }
        }
        else
        {
            printf("ERROR Please Enter Valid Number (1-8)\n");
        }

    } while (choice != 8);

    return 0;
}
