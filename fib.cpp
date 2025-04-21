#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1) return n;
     return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    cout<<"the value of fibonacci series :"<<(fib(n))<<endl;
    return 0;
}