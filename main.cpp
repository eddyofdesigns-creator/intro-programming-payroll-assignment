
#include <iostream>
#include <string>

using namespace std;

int option;

// Customer 1
string name1 = "Eddy";
int accountNumber1 = 1001;
int pin1 = 1111;
double balance1 = 1000.00;

// Customer 2
string name2 = "Takatso";
int accountNumber2 = 1002;
int pin2 = 2222;
double balance2 = 2500.00;

// Customer 3
string name3 = "Lerato";
int accountNumber3 = 1003;
int pin3 = 3333;
double balance3 = 5000.00;


// Function to find an account
int findAccount(int accountNumber)
{
    if (accountNumber == accountNumber1)
    {
        return 1;
    }
    else if (accountNumber == accountNumber2)
    {
        return 2;
    }
    else if (accountNumber == accountNumber3)
    {
        return 3;
    }
    else
    {
        return 0;
    }
}


// Function to check the PIN
bool checkPin(int customer, int enteredPin)
{
    if (customer == 1 && enteredPin == pin1)
    {
        return true;
    }
    else if (customer == 2 && enteredPin == pin2)
    {
        return true;
    }
    else if (customer == 3 && enteredPin == pin3)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// Function to get a customer's name
string getName(int customer)
{
    if (customer == 1)
    {
        return name1;
    }
    else if (customer == 2)
    {
        return name2;
    }
    else
    {
        return name3;
    }
}


// Function to get a customer's balance
double getBalance(int customer)
{
    if (customer == 1)
    {
        return balance1;
    }
    else if (customer == 2)
    {
        return balance2;
    }
    else
    {
        return balance3;
    }
}


// Function to update a customer's balance
void setBalance(int customer, double newBalance)
{
    if (customer == 1)
    {
        balance1 = newBalance;
    }
    else if (customer == 2)
    {
        balance2 = newBalance;
    }
    else
    {
        balance3 = newBalance;
    }
}


// Function to log in
int login()
{
    int accountNumber;
    int enteredPin;

    cout << "Enter account number: " << endl;
    cin >> accountNumber;

    int customer = findAccount(accountNumber);

    if (customer == 0)
    {
        cout << "Account not found!" << endl;
        return 0;
    }

    cout << "Enter PIN: " << endl;
    cin >> enteredPin;

    if (checkPin(customer, enteredPin))
    {
        cout << "Welcome, " << getName(customer) << "!" << endl;
        return customer;
    }
    else
    {
        cout << "Incorrect PIN!" << endl;
        return 0;
    }
}


// Function to deposit money
void deposit()
{
    int customer = login();

    if (customer == 0)
    {
        return;
    }

    double amount;

    cout << "Enter amount to deposit: R" << endl;
    cin >> amount;

    if (amount > 0)
    {
        setBalance(customer, getBalance(customer) + amount);

        cout << "Deposit successful!" << endl;
        cout << "New balance: R" << getBalance(customer) << endl;
    }
    else
    {
        cout << "Invalid amount. Deposit must be more than 0." << endl;
    }
}


// Function to withdraw money
void withdraw()
{
    int customer = login();

    if (customer == 0)
    {
        return;
    }

    double amount;

    cout << "Enter amount to withdraw: R" << endl;
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Amount must be more than 0." << endl;
    }
    else if (amount > getBalance(customer))
    {
        cout << "Insufficient funds!" << endl;
    }
    else
    {
        setBalance(customer, getBalance(customer) - amount);

        cout << "Withdrawal successful!" << endl;
        cout << "New balance: R" << getBalance(customer) << endl;
    }
}


// Function to send cash
void sendCash()
{
    int sender = login();

    if (sender == 0)
    {
        return;
    }

    int recipientAccount;
    cout << "Enter recipient account number: " << endl;
    cin >> recipientAccount;

    int recipient = findAccount(recipientAccount);

    if (recipient == 0)
    {
        cout << "Recipient account not found!" << endl;
        return;
    }

    if (sender == recipient)
    {
        cout << "You cannot send cash to your own account!" << endl;
        return;
    }

    double amount;

    cout << "Enter amount to send: R" << endl;
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Amount must be more than 0." << endl;
    }
    else if (amount > getBalance(sender))
    {
        cout << "Insufficient funds!" << endl;
    }
    else
    {
        setBalance(sender, getBalance(sender) - amount);
        setBalance(recipient, getBalance(recipient) + amount);

        cout << "Cash sent successfully!" << endl;
        cout << "Sent to: " << getName(recipient) << endl;
        cout << "Your new balance: R" << getBalance(sender) << endl;
    }
}


// Function to check balance
void checkBalance()
{
    int customer = login();

    if (customer == 0)
    {
        return;
    }

    cout << "Account holder: " << getName(customer) << endl;
    cout << "Account number: ";

    if (customer == 1)
    {
        cout << accountNumber1 << endl;
    }
    else if (customer == 2)
    {
        cout << accountNumber2 << endl;
    }
    else
    {
        cout << accountNumber3 << endl;
    }

    cout << "Current balance: R" << getBalance(customer) << endl;
}


// Function to display the menu
void showMenu()
{
    cout << endl;
    cout << "===== GCC BANK =====" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Send Cash" << endl;
    cout << "4. Check Balance" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter choice: " << endl;

    cin >> option;

    switch (option)
    {
        case 1:
            deposit();
            break;

        case 2:
            withdraw();
            break;

        case 3:
            sendCash();
            break;

        case 4:
            checkBalance();
            break;

        case 5:
            cout << "Thank you for using GCC Bank!" << endl;
            break;

        default:
            cout << "Please enter a valid choice from 1 to 5." << endl;
            break;
    }
}


int main()
{
    do
    {
        showMenu();
    }
    while (option != 5);

    return 0;
}
