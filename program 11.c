#include <stdio.h>
int main() {
    float P, R, N;
    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &P, &R, &N);
    float interest = (P * R * N) / 100;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}