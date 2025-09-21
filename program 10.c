#include <stdio.h>
int main() {
    float fahrenheit;
    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celsius = (5.0/9) * (fahrenheit - 32);
    printf("Celsius = %.2f\n", celsius);
    return 0;
}