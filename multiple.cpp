#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter a number: "<<endl;
	cin>>n;
	cout<<"multiple of " <<n<< " ="<<endl;
	for(i=1;i<=100;i++)
	{
		if(i%n==0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
