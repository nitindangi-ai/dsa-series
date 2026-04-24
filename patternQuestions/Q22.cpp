#include<iostream>
using namespace std;
int main(){
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout<<"*";
        }
    }
    cout<<endl;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
           cout<<"*";
        }
        for (int k = 0; k < n-2; k++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 1; j++)
        {
           cout<<"*";
        }
        
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout<<"*";
        }
    }
    cout<<endl;
}

