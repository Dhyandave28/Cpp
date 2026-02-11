#include<iostream>
using namespace std;

class addition{
public:
int num1,num2;
      
void take(){
std::cout << "Enter first number:" << std::endl;
cin >> num1;
cout<<"Enter second number:";
cin>>num2;
}
    
int sum(){
return num2+num1;
}
};

int main(){
    
    addition obj;
    
    obj.take();
    int result = obj.sum();
    
    cout<<"The sum is:" <<result<<endl;
    
}