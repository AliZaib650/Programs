#include <iostream>              // this is preprocessor directive
#include <string>                // for string inputs
#include <iomanip>
using namespace std;            // standard library

int main()                     // main function
{
    string customer_name;         // declaring variables
    string acc_no;
    float opening_balance;
    float balance, final_balance, interest_rate;
    int interest;
    int withdrawal, deposit;
    int _5knotes, _1knotes, _500notes, _100notes, remaining;
    float deposit_percentage, withdrawal_percentage;
    
    cout << "Enter Customer Name: ";             // taking input from user
    getline(cin, customer_name);

    cout << "Enter Account Number: ";         // getting acc number
    getline(cin, acc_no);

    cout << "Enter Opening Balance: ";            // getting opening balance
    cin >> opening_balance;

    cout << "Enter Amount Deposited: ";           // taking withdrawal, depsoited amount and monthly interst rate
    cin >> deposit;

    cout << "Enter Amount Withdrawn: ";            
    cin >> withdrawal;

    cout << "Enter Monthly Interest Rate (%): ";
    cin >> interest_rate;
            
    balance = opening_balance + deposit - withdrawal;   // Calculate balance after transactions
    interest = balance * interest_rate / 100;          // Calculate monthly interest
    final_balance = balance + interest;                  // Calculate final balance

    _5knotes = final_balance / 5000;                 // calcualting donominations in pak currency
    remaining = (int)final_balance % 5000;
    _1knotes = remaining / 1000;
    remaining = remaining % 1000;
    _500notes = remaining / 500;
    remaining = remaining % 500;
    _100notes = remaining / 100;
    remaining = remaining % 100;

    withdrawal_percentage = (withdrawal / opening_balance) * 100;
    deposit_percentage = (deposit / opening_balance) * 100;
    
    cout << fixed << setprecision(2);        // precision setting 2 for all printing values
    cout << "       BANK ACCOUNT TRANSACTION SUMMARY          \n";         // printing transaction summary

    cout << "Customer Name       : " << customer_name << endl;            // printing name
    cout << "Account Number      : " << acc_no << endl;                  // printing acc number, balnce,etc
    cout << "Opening Balance     : Rs. " << opening_balance << endl;
    cout << "Amount Deposited    : Rs. " << deposit << endl;
    cout << "Amount Withdrawn    : Rs. " << withdrawal << endl;
    cout << "Interest Rate       : " << interest_rate << "%" << endl;

    cout << "--------------------------------------------------\n";

    cout << "Balance After Transactions : Rs. "<< balance << endl;           // printing balnce after trannsaction
    cout << "Monthly Interest           : Rs. "<< interest << endl;
    cout << "Final Account Balance      : Rs. " << final_balance << endl;           // printing final balance

    cout << "--------------------------------------------------\n";

    cout << "Currency Denominations:\n";                      // printing currency denominations
    cout << "Rs. 5000 Notes       : " << _5knotes << endl;
    cout << "Rs. 1000 Notes       : " << _1knotes << endl;
    cout << "Rs. 500 Notes        : " << _500notes << endl;
    cout << "Rs. 100 Notes        : " << _100notes << endl;
    cout << "Remaining Amount     : Rs. " << remaining << endl;

    cout << "--------------------------------------------------\n";

    cout << "Deposit Percentage   : "<< deposit_percentage << "%" << endl;         // printing percentages
    cout << "Withdrawal Percentage: "<< withdrawal_percentage << "%" << endl;

    cout << "==================================================\n";
    return 0;
}