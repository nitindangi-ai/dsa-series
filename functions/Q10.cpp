//Write a function to check if a number is palindrome.
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
    int n;
    cout<<"Please enter a number: ";
    cin>>n;
    if (rev(n)==n)
    {
       cout<<n<<" is a palindrome number";
    }else
    {
        cout<<n<<" is not a palindrome number";

    }
    
    // cout<<rev(n);


}