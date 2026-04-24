#include<iostream>
using namespace std;
int main(){
    int n = 10;
    for (int i = n; i > 0; i--)
    {
        for (int j = n-i ; j > 0; j--)
        {
            cout<<" ";
        }
        for (int k = i; k > 0; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}

