//To find the  ful Fibonacci series upto nth term
#include<iostream>
using namespace std;


int fibonacci (int n){
    int a = 0,b = 1,next;
   for (int i = 1; i < n; i++)
   {
       
       next = a + b;
       a = b;
       b = next;
    
   }
//    cout << b << " ";
   return next;


}
int main (){
    int n = 6;
    cout<<fibonacci(n);

}
