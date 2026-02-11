#include<iostream>
using namespace std;

class bankaccount{

public:

int balance;
int account_number;


void take(){
    std::cout << "Enter your account number:" << std::endl;
    std::cin >> account_number;
    
    cout<<"\nEnter your account balance:";
    cin>>balance;
}

int depo;
void deposit(){
    cout<<"\nEnter the amount to deposit:";
    cin>> depo;
    
    balance=balance+depo;
    
    cout<<"\nYour account balance is:";
    cout<< balance<<endl;
    
}

int out;

void withdraw(){
    cout<<"\nEnter the amount to be withdrawn:";
    cin>>out;
    
    balance=balance-out;
    
    cout<<"\nYour account balance is:";
    cout<<balance<<endl;
}
};


int main(){
    
    bankaccount bank;
    
    bank.take();
    bank.deposit();
    bank.withdraw();
    
}