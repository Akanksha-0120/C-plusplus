#include<iostream>
using namespace std;
/*
int getMax(int num[],int n)
{
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
	  maxi=max(maxi,num[i]);
	  
	}
	return maxi;
}

int getMin(int num[],int n)
{
	int mini=INT_MAX;
	for(int i=0;i<n;i++)
	{
		mini=min(mini,num[i]);
	}
	return mini;
}
*/
int main()
{
	int size;
	cin>>size;
	int num[100];
	
	for(int i=0;i<size;i++)
	{
		cin>>num[i];
	}
//	cout<<"maximum value is "<<getMax(num,size)<<endl;
	
//	cout<<"minimum value is "<<getMin(num,size)<<endl;
	int largest=num[0];
    for(int i=0;i<size;i++)
    {
    	if(largest<num[i])
    	{
    		largest=num[i];
		}
	}	cout<<"largest number is "<<largest<<endl;
	return 0;
}
