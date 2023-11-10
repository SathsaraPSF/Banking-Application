#include <iostream>
#include <iomanip>

double Withdraw(double balance);
double Deposit();
void ShowBalance(double balance);

int main()
{
    int choice = 0;
    double balance = 0;

    do
    {

        std::cout << "\n\n**************** BANKING SYSTEM ****************\n\n";
        std::cout << "1.CHECK BALANCE\n";
        std::cout << "2.DEPOSIT MONEY\n";
        std::cout << "3.WITHDRAW MONEY\n";
        std::cout << "4.EXIT\n\n";
        std::cout << "****************************\n\n";
        std::cout << "Enter choice do you want to perform: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            ShowBalance(balance);
            break;
        case 2:
            balance += Deposit();
            ShowBalance(balance);
            break;
        case 3:
            balance -= Withdraw(balance);
            ShowBalance(balance);
            break;
        case 4:
            std::cout << "-----------THANK YOU-------------------";
            break;
        default:
            std::cout << "Enter valid choice\n";
        }
    } while (choice != 4);

    return 0;
}

double Deposit()
{
    double amount;
    std::cout << "Enter your deposit money: Rs.";
    std::cin >> amount;

    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Your enterd value is not valid \n";
        return 0;
    }
}
void ShowBalance(double balance)
{
    std::cout << "Your balance is: Rs." << std::setprecision(2) << std::fixed << balance << "\n\n";
}

double Withdraw(double balance)
{
    double amount = 0;
    std::cout << "Enter your withdraw money: Rs.";
    std::cin >> amount;

    if (balance < amount)
    {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's not valid amount..\n";
        return 0;
    }
    else
    {
        return amount;
    }
    return 0;
}
