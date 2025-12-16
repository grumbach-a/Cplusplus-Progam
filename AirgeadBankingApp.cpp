// Angela Grumbach 
// CS 210
// 23 November 2025
// Create an app that displays investment information with and without a monthly deposit

#include <iostream>
#include "BankingFunctions.h"
using namespace std;

int main() {

    double initialInvestment = 0;
    double monthlyDeposit = 0;
    double interestRate = 0;
    int numberOfYears = 0;

    char rerun = 'Y';

    while (rerun == 'Y' || rerun == 'y') {

        // INPUT SCREEN
        cout << "********** Data Input **********" << endl;

        cout << "Initial Investment Amount: ";
        cin >> initialInvestment;

        cout << "Monthly Deposit: ";
        cin >> monthlyDeposit;

        cout << "Annual Interest (%): ";
        cin >> interestRate;

        cout << "Number of Years: ";
        cin >> numberOfYears;

        cout << endl << "Press ENTER to continue...";
        cin.ignore();
        cin.get();

        // FIRST REPORT (No monthly deposit)
        cout << endl;
        cout << "     Balance and Interest Without Monthly Deposits" << endl;
        cout << "==========================================================" << endl;
        cout << "Year\t\tYear End Balance\tYear End Earned Interest" << endl;

        calculateBalanceWithoutMonthlyDeposit(initialInvestment, interestRate, numberOfYears);

        // SECOND REPORT (With monthly deposits)
        cout << endl;
        cout << "       Balance and Interest With Monthly Deposits" << endl;
        cout << "==========================================================" << endl;
        cout << "Year\t\tYear End Balance\tYear End Earned Interest" << endl;

        balanceWithMonthlyDeposit(initialInvestment, monthlyDeposit, interestRate, numberOfYears);

        // LOOP OPTION
        cout << endl;
        cout << "Would you like to enter new values? (Y/N): ";
        cin >> rerun;
    }

    cout << "Happy Investing!" << endl;
    return 0;
}
