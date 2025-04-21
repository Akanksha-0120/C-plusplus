#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp;
	cout<<"enter num1: "<<endl;
	cin>>num1;
	cout<<"enter num2: "<<endl;
	cin>>num2;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"num1= "<<num1<<endl;
	cout<<"num2= "<<num2<<endl;
	return 0;
	
}
