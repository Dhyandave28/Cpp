#include<iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter a number";
    cin>>num;
    
    int original=num;
    int rev=0;
    
    while(num>0){
        int digit = num%10;
        rev = rev*10+digit;
        num = num/10;
        
    }
    
    if (rev==original){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}
