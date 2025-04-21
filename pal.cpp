#include<iostream>
using namespace std;
int main()
{
	int num,number,rem,rev=0;
	cout<<"enter original number: "<<endl;
	cin>>num;
	number=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rem+(rev*10);
		num=num/10;
	}
	
	cout<<"reverse number:"<<rev<<endl;
	
	if(number==rev)
	{
		cout<<"palindrome number"<<endl;
	}
	else
	{
		cout<<"not palindrome"<<endl;
	}
	return 0;
}

