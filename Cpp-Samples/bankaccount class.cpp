#include <iostream>
#include <string>

class BankAccount
{

private:
    int accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(int accountN, std::string HolderName, double b)
    {
        accountNumber = accountN;
        accountHolderName = HolderName;
        balance = b;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }
    std::string getAccountHolderName()
    {
        return accountHolderName;
    }
    double getBalance()
    {
        return balance;
    }
    double deposit(double amount)
    {
        balance += amount;
        std::cout << "Your new balance is " << balance << std::endl;
        return balance;
    }
    double withdraw(double amount)
    {
        if (amount < balance)
        {
            balance -= amount;
            std::cout << "Your new balance is " << balance << std::endl;
            return 0;
        }
        else
        {
            std::cout << "Your amount is bigger than your balance!" << std::endl;
            return -1;
        }
    }
};

int main()
{

    int accountNumber;
    std::string accountHolderName;
    double balance;

    std::cout << "Enter your account name " << std::endl;
    std::cin >> accountHolderName;
    std::cout << "Enter your account number " << std::endl;
    std::cin >> accountNumber;
    std::cout << "Enter your balance " << std::endl;
    std::cin >> balance;

    BankAccount bankObj(accountNumber, accountHolderName, balance);
    bankObj.getAccountNumber();
    bankObj.getAccountHolderName();
    bankObj.getBalance();

    std::cout << "Your account name is " << accountHolderName << std::endl;
    std::cout << "Your account number is " << accountNumber << std::endl;
    std::cout << "Your balance is " << balance << std::endl;

    int choice;
    std::cout << "1. Deposit" << std::endl;
    std::cout << "2. Withdraw" << std::endl;
    std::cout << "Choose what you would like to do to continue: " << std::endl;
    std::cin >> choice;

    double currentBalance = bankObj.getBalance();

    switch (choice)
    {
    case 1:
        double amount;
        std::cout << "Enter the amount to deposit: ";
        std::cin >> amount;
        bankObj.deposit(amount);
        currentBalance = bankObj.getBalance();
        std::cout << "Your updated balance is " << currentBalance << std::endl;
        break;

    case 2:
        double withdrawAmount;
        std::cout << "Enter the amount to withdraw: ";
        std::cin >> withdrawAmount;
        bankObj.withdraw(withdrawAmount);
        currentBalance = bankObj.getBalance();
        std::cout << "Your updated balance is " << currentBalance << std::endl;
        break;

    default:
        std::cout << "Error!" << std::endl;
        break;
    }
    return 0;
}
