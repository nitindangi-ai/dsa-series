#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Please enter the number you want to start print: ";
    cin>>n;

    for (int i = n; i >=0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout<<j<<","<<" ";
        }
        cout<<endl;
    }
    
}