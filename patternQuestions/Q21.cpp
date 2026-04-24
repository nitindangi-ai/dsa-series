#include<iostream>
using namespace std;

int main(){
    int n = 5;

    // Upper part
    for (int i = 1; i <= n; i++)
    {
        int stars = n - i + 1;

        // spaces
        for (int j = 0; j < n - stars; j++)
            cout << " ";

        // stars
        for (int k = 0; k < stars; k++)
            cout << "*";

        cout << endl;
    }

    // Lower part (inverse)
    for (int i = 2; i <= n; i++)
    {
        int stars = i;

        // spaces
        for (int j = 0; j < n - stars; j++)
            cout << " ";

        // stars
        for (int k = 0; k < stars; k++)
            cout << "*";

        cout << endl;
    }
}
