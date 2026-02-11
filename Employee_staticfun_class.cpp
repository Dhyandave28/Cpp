#include<iostream>
using namespace std;

class employee{
    int empid;
    string empname;
    
    static string compname;
    
public:
void take(){
    std::cout << "\nEnter employee name:" << std::endl;
    std::cin >> empname;
    
    cout<<"\nEnter employee id:";
    cin>>empid;
}

void display(){
    cout<<"\nEmployee id:"<< empid;
    cout<<"\nEmployee name:"<<empname;
}

static void displaycomp(){
    cout<<"\nCompany name:"<<compname;
    
}
};

string employee::compname="India";

int main(){
    
    employee e1,e2,e3;
    
    e1.take();
    e1.display();
    employee::displaycomp();
    
    e2.take();
    e2.display();
    employee::displaycomp();
}