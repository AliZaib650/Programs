#include <iostream>
using namespace std;

void displaymenu();
void displayBalance (double& balance);
void deposit(double& balance);
void withdraw(double& balance);
void transfer(double& balance);

int main() {

int choice = 0;
double balance = 50000;

displaymenu();

cout<<" Enter your choice: ";
cin >> choice;

if (choice == 5) 
return 0;

else{

do {

switch (choice)

{

case 1:
deposit(balance);
break;
case 2:
withdraw(balance);
break;
case 3:
transfer(balance);
break;
case 4:
displayBalance(balance);
break;
case 5:
break;
default:
cout<< "You choosed an incorrect choice"<< endl;
}

displaymenu();

cout<< "Pick a choice: ";
cin >> choice;

} while (choice != 5);

}


return 0;
}
void displaymenu()
{
    cout << "WELCOME TO ATM" << endl;
    cout << "WE PROVIDE YOU WITH THE BEST SERVICES" << endl;
    cout << "1. Deposit." << endl;
    cout << "2. Withdraw." << endl;
    cout << "3. Transfer." << endl;
    cout << "4. Display Balance." << endl;
    cout << "5. Exit." << endl;
}

void displayBalance (double& balance)
{
    cout << "Your current balance is: $" << balance << endl;
}
void deposit(double& balance)
{
    double amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    if(amount<0)
    {
        cout << "Invalid amount. Deposit failed." << endl;
        return;
    }
    balance += amount;
    cout << "Deposit successful. New balance: $" << balance << endl;
}
void withdraw(double& balance)
{
    double amount ;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;
    if(amount<0)
    {
        cout << "Invalid amount. Withdrawal failed." << endl;
        return;
    }
    if(amount<=balance)
    {balance -= amount;
    cout << "Withdrawal successful. New balance: $" << balance << endl;
    }
    else
    cout << "Insufficient funds. Withdrawal failed." << endl;
}
void transfer(double& balance)
{
    int accountNumber;
    double amount;

    cout << "Enter recipient account number: ";
    cin >> accountNumber;

    cout << "Enter amount to transfer: $";
    cin >> amount;

    if (accountNumber <= 0)
    {
        cout << "Invalid account number." << endl;
    }
    else if (amount <= 0)
    {
        cout << "Invalid transfer amount." << endl;
    }
    else if (amount <= balance)
    {
        balance -= amount;

        cout << "Transfer successful!" << endl;
        cout << "Transferred to account: " << accountNumber << endl;
        cout << "Remaining balance: $" << balance << endl;
    }
    else
    {
        cout << "Insufficient funds. Transfer failed." << endl;
    }
}   

