#include <stdio.h>
int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    float area = (22.0/7) * radius * radius;
    printf("Area of Circle = %.2f\n", area);
    return 0;
}