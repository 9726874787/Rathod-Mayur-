#include <stdio.h>

int main() {
    float rupees;
    float dollar;

    // Prompt the user to enter the amount in dollars
    printf("Enter the amount in rupees : ");

    // Read the input from the user
    scanf("%f", &rupees);

    // Calculate the equivalent amount in Rupees
    dollar = rupees / 48;

    // Display the converted amount
    printf("%.2f rupees is equal to %.2f dollars.\n", rupees, dollar);

    return 0;
}