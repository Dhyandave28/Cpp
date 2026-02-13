#include <iostream>
using namespace std;

class library {

private: 
 int memberid;
 
 class Fine{
     private: 
      int Dayslate;
      
      void intdaylate(){
          cout<<"Enter the number of days late:";
          cin >> Dayslate;
      }
      
      double calcfine() const{
          double fine =0.0;
          
          if(Dayslate <=5){
              fine = Dayslate *2;
          }
          else if(Dayslate <=10){
              fine= (5*2) + (Dayslate-5)*3;
          }
          else{
              fine = (5*2)+ (5*3) + (Dayslate-10)*5;
          }
          return fine;
      }
      
    friend class library;
 };
 
 Fine fine;
 
public:
 void input(){
     cout<<"Enter memeber id:";
     cin >> memberid;
     
     fine.intdaylate();
 }
 
 void display() const{
     cout << "\n--- Library Fine Details ---" << endl;
     cout << "Member ID: " << memberid << endl;
     cout << "Fine Amount: Rs. " << fine.calcfine() << endl;
     
 }
};

int main() {
    
    library l1;
    
    l1.input();
    l1.display();
    
    
}