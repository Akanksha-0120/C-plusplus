#include<iostream>
using namespace std;
int main()
{
    char ch;
    do
    {
    char op;
    float num1,num2,res;
    cout<<"enter the nummber :"<<endl;
    cin>>num1>>num2;
    cout<<"enter the operator :"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':cout<<"the sum of two number is :"<< num1+num2<<endl;
                 break;
        case '-':cout<<"the substraction of two number is :"<< num1-num2<<endl;
                 break;
        case '*':cout<<"the multiplication of two number is :"<< num1*num2<<endl;
                 break;
        case '/':cout<<"the division of two number is :"<< num1/num2<<endl;
                 break;
    }
     cout<<"do you want to do another calculation then click y or n"<<endl;
     cin>>ch;
    }
     while(ch=='y'||ch=='Y');
   return 0;
}