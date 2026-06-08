#include <iostream>
#include <Windows.h>

using namespace std;

struct BankAccount
{
    int number;
    string name;
    double balance;
    double newBalance;
};

void updateBalance(BankAccount& account) {
    account.balance = account.newBalance;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    BankAccount account;
    cout << "Введите номер счёта: ";
    cin >> account.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.name;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> account.newBalance;
    updateBalance(account);
    std::cout << "Ваш счёт: " << account.name << ", "
              << account.number << ", баланс: "
              << account.balance << std::endl;
    return 0;
}
