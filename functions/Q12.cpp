//to cehck string is a palindrome
#include<iostream>
using namespace std;

string reverseStr(string s) {
    int start = 0;
    int end = s.length() - 1;

    while(start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    return s;
}

int main() {
    string s = "nitin";
    if ( reverseStr(s) == s)
    {
        cout <<s<< " is a palindrome ";
       
    }
    else {
        cout <<s<< " is  not a palindrome ";
    }
}