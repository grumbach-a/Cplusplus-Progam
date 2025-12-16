// Angela Grumbach 
// CS 210
// 23 November 2025
// Create an app that displays investment information with and without a monthly deposit

#ifndef BANKINGFUNCTIONS_H
#define BANKINGFUNCTIONS_H

// Prints the details for a single year of investment outcomes.
// Displays: year index, ending balance, and interest earned.
void printDetails(int year, double yearEndBalance, double interestEarned);


// Calculates ending balance for the given number of years
// ASSUMES no monthly deposits are added.
// Compounds interest monthly.
// Calls printDetails() after each year.
// Returns final balance after all years.
double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);


// Calculates ending balance with monthly deposits.
// Compounds interest monthly.
// Calls printDetails() after each year.
// Returns final balance after all years.
double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);

#endif
