#include<iostream>
using namespace std;

class student{

private:
 int rollnumber;
 string name;
 
 class marks{
     private:
      int subject1,subject2,subject3;
      
     public:
      void inputmarks(){
          cout<<"Enter marks for subject 1:";
          cin>>subject1;
          cout<<"Enter makrs for subject 2:";
          cin>>subject2;
          cout<<"Enter marks for subject 3:";
          cin>>subject3;
      }
      
      friend class result;
      friend class student;
      
 };
 
 marks mark;
 
public:
 void input(){
     cout<<"Enter roll number:";
     cin>>rollnumber;
     cout<<"Enter name:";
     cin>> name;
 }
 
 void inputmarks(){
     mark.inputmarks();
 }
 
 friend class result;
};

class result{

public:
 int calctotal(const student &s){
     return s.mark.subject1 + s.mark.subject2 + s.mark.subject3;
 }
 
 void displayresult(const student &s){
    cout << "\n--- Student Result ---" << endl;
    cout << "Roll Number: " << s.rollnumber<< endl;
    cout << "Name: " << s.name << endl;
    cout << "Total Marks: " << calctotal(s) << endl;

 }
};


int main(){
    student st;
    result res;
    
    st.input();
    st.inputmarks();
    
    res.displayresult(st);
    
}