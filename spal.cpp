#include<iostream>
using namespace std;
int main()
{
	char str[100];
	int i,length,flag=0;
	cout<<"enter any character:"<<endl;
	cin>>str;
	length=0;
	while(str[length]!='\0')
	{
		length++;
	}
	
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
		cout<<str<<" is  not a palindrome"<<endl;
	}
	
	else
	{
		cout<<str<<" is a palindrome"<<endl;
	}
	
	return 0;
}
