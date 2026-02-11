#include<iostream>
using namespace std;

class bankaccount{

int radius;

public:

void inpu(){
std::cout << "Enter the raidus of cirlce:" << std::endl;
std::cin >> radius;
}

void calc(){
    float result =3.14*radius*radius;
    cout<<"The area of circle is:"<<result<<endl;
}
};


int main(){
    
    bankaccount radd;
    
    radd.inpu();
    radd.calc();
    
}