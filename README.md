# CCalculator
C dili İle yazdığım konsol ekranında kullanılabilen bir hesap makinesi uygulaması (CCalculator Release 0.0.2 (2025-10-08 PM))

# New Features (CCalculator Release 0.0.1 (2025-10-08 PM))
- Basic Arithmetic Operations: Added functions for addition, subtraction, multiplication, and integer division (int/int).
- Modulo Operation: Added ability to calculate the remainder (%) between two integers.
- Exponentiation: Added support for calculating powers using pow(base, exponent).
- Square Root: Added ability to calculate the square root (sqrt()) of two numbers separately.
- Interactive Menu: Created a simple, looped menu that continues running until the user chooses to exit.

# New Features (CCalculator Release 0.0.2 (2025-10-08 PM))
Error Handling and Safety
- Division by Zero Prevention: In division (Option 4) and modulo (Option 5) operations, entering zero as the second number is prevented. A clear error message is displayed to the user.
- Negative Square Root Check: In the square root operation (Option 7), if a negative number is entered, the operation is not performed and the user is warned.

Precision Improvements
- Decimal Division: Division (Option 4) now calculates results as floating-point numbers (double) and displays them with two decimal places (%.2lf).
- Mathematical Function Corrections: The results of exponentiation (pow()) and square root (sqrt()) are now correctly handled as double according to the C standard. This increases precision, especially for large ----exponents and fractional square roots.
