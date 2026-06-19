#include <iostream>
#include <Windows.h>

using namespace std;

struct BankAccount
{
    int number;
    string name;
    double balance;
};

void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BankAccount account;
    double newBalance;
    cout << "Введите номер счёта: ";
    cin >> account.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.name;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    updateBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.name << ", "
        << account.number << ", баланс: "
        << account.balance << std::endl;
    return 0;
}
