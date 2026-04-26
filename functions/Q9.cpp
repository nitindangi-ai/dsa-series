//Write a function to reverse a number.
#include<iostream>
using namespace std;

int rev(int n ){
    int rem,num = 0;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        num = num * 10 + rem;
        
    }
    return num;
    
    
    
}



int main(){
    int n = 1211;
    cout<<rev(n);


}