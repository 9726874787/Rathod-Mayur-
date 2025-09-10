#include <stdio.h>

#define USD_TO_INR_RATE 48.0

int main() {
    float dollars;
    float rupees;

    // Prompt the user to enter the amount in dollars
    printf("Enter the amount in dollars ($): ");

    // Read the input from the user
    scanf("%f", &dollars);

    // Calculate the equivalent amount in Rupees
    rupees = dollars * USD_TO_INR_RATE;

    // Display the converted amount
    printf("%.2f dollars is equal to %.2f Rupees.\n", dollars, rupees);

    return 0;
}