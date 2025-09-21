#include <stdio.h>
int main() {
    float side;
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("Area = %.2f\n", side * side);
    printf("Perimeter = %.2f\n", 4 * side);
    return 0;
}