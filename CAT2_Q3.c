/*EDISON CHEPKWONY 
CT101/G/23928/24 
*/
#include<stdio.h>

int main() {
    // Declare variables
    float hoursWorked, hourlyWage, grossPay, taxes, netPay;

    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hoursWorked);
   
    printf("Enter the hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate the gross pay
    if (hoursWorked > 40) {
        // Calculate regular pay for the first 40 hours
        grossPay = 40 * hourlyWage;
       
        // Calculate overtime pay for hours worked beyond 40
        grossPay += (hoursWorked - 40) * (hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = 600 * 0.15 + (grossPay - 600) * 0.20;
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Display the results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}