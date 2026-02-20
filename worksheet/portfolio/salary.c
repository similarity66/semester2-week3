
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Rayyaan Hussain
 * ID: 201951073
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   int salary = 36250;
   float NI_rate = 0.08;
   float tax_rate = 0.15;

    // calculate the deductions and final take-home salary
   float NI_contribution = salary * NI_rate;
   float tax_contribution = ((salary - NI_contribution) - 12500) * tax_rate;
   float take_home_salary = salary - NI_contribution - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%d",salary);
    printf("NI contribution £%f",NI_contribution);
    printf("Tax contribution £%f",tax_contribution);
    printf("Take home salary £%f",take_home_salary);

    return 0;
 }