#include<iostream>
using namespace std;

class mathutil{
public:

 static int add(int a,int b){
     return a+b;
 }
 
 static int substract(int a, int b){
     return a-b;
 }
};

int main(){
    int x=15, y=7;
    cout<<"Addition of "<<x << " and "<< y<<" = "<<mathutil::add(x,y)<<endl;
    cout<<"Substraction of "<<x << " and "<< y<<" = "<<mathutil::substract(x,y)<<endl;
    
}