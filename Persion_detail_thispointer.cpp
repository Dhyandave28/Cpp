#include<iostream>
using namespace std;

class person{

private:
 string name;
 int age;

public:
 void setdetails(string name, int age){
     this -> name= name;
     this -> age=age;
 }
 
 void displaydetail() const {
     cout<<"Person detail:"<<endl;
     cout<<"Name:"<< name<< endl;
     cout<<"Age:"<<age<<endl;
     
 }
};
 
int main(){
    person p1;
    p1.setdetails("Dhyan",2);
    p1.displaydetail();
}
 
 