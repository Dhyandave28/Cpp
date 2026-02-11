#include<iostream>
using namespace std;

class bankaccount{

public:

int side;

void take(){
    std::cout << "Enter number to be squared:" << std::endl;
    std::cin >> side;
}

inline float square(){
    return side*side;
    
}
};


int main(){
    
    bankaccount radd;
    
    radd.take();
    float result = radd.square();
    
    cout<<"Square is:"<<result<<endl;
    
}