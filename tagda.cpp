#include<iostream>
using namespace std;
int main()
{
	int n,row=1;
	cin>>n;
	while(row<=n)
	{
		int col=1;
		int val=1;
		while(col<=n-row+1)
		{
			cout<<val;
			val=val+1;
			col=col+1;
		}
	    
	    col=1;
	    while(col<=(row-1)*2)
	    {
	    	cout<<"*";
	    	col=col+1;
		}
	
	    col=n-row+1;
	    
	    while(col>=1)
	    {
	    	cout<<col;
	    	
	    	col=col-1;
		}
	
	
	
	
	
	cout<<endl;
	row=row+1;
	}
	
}
