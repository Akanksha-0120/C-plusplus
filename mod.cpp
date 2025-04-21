#include<iostream>
using namespace std;
int mod(int n)
{
	cout<<"inside the function"<<endl;
	int num=6;
	cout<<num%2<<endl;
	cout<<"outside the function"<<endl;
}
int main()
{
	int num;
	mod(num);
	cout<<"enter a number: "<<endl;
	cin>>num;
	cout<<"remainder= "<<(num%2)<<endl;
	return 0;
}
