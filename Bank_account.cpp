#include <iostream>

class Bankaccount{

public:
  std::string name;
  int account_id;
  std::string account_type;
  double balance;

  double deposit(double x){
    balance = balance+ x;
    return balance;
  }

  double withdraw(double x){
    balance = balance-x;
    return balance;
  }

  void display_balance(){
    std::cout<< " The account final balance is:" << balance;

  }
};

int main() {

  Bankaccount checking1;

  checking1.name = "Robin";
  checking1.account_id = 100;
  checking1.account_type = "Current";
  checking1.balance= 100;

  checking1.deposit(100);
  checking1.withdraw(50);
  checking1.display_balance();

}
