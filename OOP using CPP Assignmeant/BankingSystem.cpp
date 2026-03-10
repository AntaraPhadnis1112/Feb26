#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
    int AccountNumber;
    string accountHolderName;
    double balance;

    public :
     
    void setACNumber(int ACN)
    {
        AccountNumber = ACN;
    }
    int getACNumber()const
    {
        return AccountNumber;
    }

    void setHolderName(string name)
    {
        accountHolderName = name;
    }
    string getHolderName()const
    {
        return accountHolderName;
    }
        
    
    void setBalance(double bal)
    {
        balance = bal;
    }
    double getBalance()const
    {
        return balance;
    }

    void Deposite(double amount)
    {
        if(amount > 0) 
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        } 
        else 
        {
            cout << "Invalid deposit amount!" << endl;
        }
    
    }

    void withdraw(double amount)
    {
        if(amount > balance) 
        {
            cout << "Insufficient balance! Current balance: " << balance << endl;
        } else if(amount <= 0) {
            cout << "Invalid withdraw amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }
    void AccountDetails()
    {
    cout << "Account Holder Name: " << accountHolderName << endl;
    cout << "Account Number     : " << AccountNumber << endl;
    cout << "Balance            : " << balance << endl;
    }
};

int main()
{
    BankAccount ba;
    int choice;

    int accNo;
    string name;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accNo;
    ba.setACNumber(accNo);

    cout << "Enter Name : ";
    cin >> name;
    getline(cin, name);
    ba.setHolderName(name);

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;
    ba.setBalance(initialBalance);


    do {
        cout << "\n--- Banking Menu ---" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                ba.Deposite(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                ba.withdraw(amount);
                break;
            }
            case 3:
                ba.AccountDetails();
                break;
            case 4:
                cout << "Exit program " << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 4);


}