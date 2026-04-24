#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = n; i > 0; i--)
    {
        for (int k = n-i; k > 0; k--)
        {
            cout<<" ";
        }
        for (int j = (i*2-1); j > 0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}


