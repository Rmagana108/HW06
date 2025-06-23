// Program Name: Small World
// Purpose: Extend programming functionality and experience
// Author: Rodrigo Magana
// Date Last Modified: June 18, 2025

#include <iostream>
using namespace std;

int main() {
    // Declare the price per share
    double pricePerShare;

    // Declare the number of shares
    int numberOfShares;

    // Declare the commission percentage
    double commissionPercent;

    // Ask user for input
    cout << "Enter price per share: ";
    cin >> pricePerShare;

    cout << "Enter number of shares you want to buy: ";
    cin >> numberOfShares;

    cout << "Enter commissions in percent: ";
    cin >> commissionPercent;

    // Calculate total paid for stock without commission
    double stockTotal = pricePerShare * numberOfShares;

    // Calculate the commission amount
    double commissionAmount = stockTotal * (commissionPercent / 100);

    // Calculate the final total with commission
    double totalPaid = stockTotal + commissionAmount;

    // Display the results
    cout << "The amount paid for the stock alone (without the commission): $" << stockTotal << endl;
    cout << "The amount of the commission: " << commissionPercent << "%" << endl;
    cout << "The total amount paid (for the stock plus the commission): $" << totalPaid << endl;

    return 0;
}
