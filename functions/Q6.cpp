// //Write a function to calculate factorial of a number using simplee fac variable
// #include<iostream>
// using namespace std;
// long long factori(int n){ // here we use long long to store more than 2 billion so after 12 int will overflow
//     long long fac = 1;
//     for (int i = 1; i <=n; i++)
//     {
//         fac = fac * i;
//     }
//     return fac;
    

// }
// int main(){

//     long long n = 13;
//     cout<<factori(n);


// }





#include<iostream>
using namespace std;
long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main(){
    long long n;
    cout<<"Please enter the number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is: "<<factorial(n);
}




