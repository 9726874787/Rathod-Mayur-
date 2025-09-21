#include <stdio.h>
int main() {
    float celsius;
    printf("Enter Celsius: ");
    scanf("%f", &celsius);
    float fahrenheit = (9.0/5) * celsius + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);
    return 0;
}