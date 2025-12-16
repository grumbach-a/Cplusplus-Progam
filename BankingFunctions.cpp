// Angela Grumbach 
// CS 210
// 23 November 2025
// Create an app that displays investment information with and without a monthly deposit

#include "BankingFunctions.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Prints one year's results
void printDetails(int year, double yearEndBalance, double interestEarned) {
    // ensure 2 decimal places for money
    cout << fixed << setprecision(2);

    // Year   $balance   $interest
    cout << year << "\t\t$" << yearEndBalance << "\t\t$" << interestEarned << endl;
}


// Calculates balance with NO monthly deposits
double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {

    double balance = initialInvestment;

    // Convert annual percent → monthly decimal
    double monthlyRate = (interestRate / 100.0) / 12.0;

    for (int year = 1; year <= numberOfYears; ++year) {
        double interestEarnedThisYear = 0.0;   // reset yearly tracker

        // Monthly compounding loop
        for (int month = 0; month < 12; ++month) {
            double interestThisMonth = balance * monthlyRate;
            balance += interestThisMonth;
            interestEarnedThisYear += interestThisMonth;
        }

        // after 12 months, display this year's totals
        printDetails(year, balance, interestEarnedThisYear);
    }

    return balance; // final balance
}


// Calculates balance WITH monthly deposits
double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {

    double balance = initialInvestment;

    double monthlyRate = (interestRate / 100.0) / 12.0;

    for (int year = 1; year <= numberOfYears; ++year) {

        double interestEarnedThisYear = 0.0;

        for (int month = 0; month < 12; ++month) {

            // First apply interest
            double interestThisMonth = balance * monthlyRate;
            balance += interestThisMonth;
            interestEarnedThisYear += interestThisMonth;

            // Then apply the deposit
            balance += monthlyDeposit;
        }

        printDetails(year, balance, interestEarnedThisYear);
    }

    return balance;
}
