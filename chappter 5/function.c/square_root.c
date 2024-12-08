#include <stdio.h>
double squareRoot(double num) {
    double guess = num / 2.0;
    double nextGuess;
    double epsilon = 0.00001; // Precision
    
    do {
        nextGuess = (guess + num / guess) / 2.0;
        if (guess - nextGuess < epsilon && nextGuess - guess < epsilon) break;
        guess = nextGuess;
    } while(1);

    return guess;
}

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    double result = squareRoot(number);
    printf("The square root of %.2lf is %.5lf\n", number, result);

    return 0;
}
