#include<iostream>

using namespace std;

class car{

private:
 int speed;
 
public:
 void input(){
     cout<<"Enter car speed: ";
     cin >> speed;
     
 }
 friend class speedcheck;

};

class speedcheck{

public: 
 void checklimit(const car &c){
     const int speedlimit=100;
     
     cout << "\n--- Speed Check ---" << endl;
    cout << "Car Speed: " << c.speed << " km/h" << endl;
    
    if(c.speed > speedlimit){
        cout<<"OVER SPEED LIMIT"<<endl;
    }
    else{
        cout<<"Within speed limit"<<endl;
    }

 }
};

int main(){
    car car1;
    speedcheck checker;
    
    car1.input();
    checker.checklimit(car1);
    
    
}
