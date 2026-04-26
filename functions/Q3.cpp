//Write function to check if a number even or odd
#include<iostream>
using namespace std;
int even_or_odd(int n){
    if (n%2 == 0)
    {
        cout<<"The number "<<n<<" is a even number ";
    }
    else {
        cout<<"The number "<<n<<" is a odd number ";
    }
}

int main(){
    int n ;
    cout<<"Please enter the number: ";
    cin>>n;
    even_or_odd(n);


}