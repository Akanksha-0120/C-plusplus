#include<bits/stdc++.h>
using namespace std;

void printcounting(int num)
{
	for(int i=1;i<=num;i++)
	{
		cout<<i<<endl;
	}
    cout<<endl;
}
int main ()
{
	int n;
	cin>>n;
	printcounting(n);
	return 0;
}


bool isEven(int a)
{
	//1--even
	//0--odd
	
	if(a&1)
	{
		return 0;
	}

    else
    {
    	return 1;
	}

}
int main()
{
   int num;
   cin>>num;
   if(isEven(num))
   {
   	cout<<"number is even"<<endl;
	   }	
    else
    {
    	cout<<"number is odd"<<endl;
	}
     return 0;

}


bool isprime (int n)
{
	for(int i=2;i<n;i++)
	{
		//0--not a prime
		//1--prime
		if(n%i==0)
		{
			return 0;
		}
	}
     return 1;
}

int main()
{
	int n;
	cin>>n;
	if(isprime(n))
	{
		cout<<"prime number"<<endl;
	}
    else
    {
    	cout<<"not a prime number"<<endl;
	}
}



int power(int n,int m)
{
	int ans=1;
	for(int i=1;i<=m;i++)
	{
		ans=ans*n;
	}
     return ans;
}

int main()
{
	int a,b;
	cin>>a >> b;
	int answer=power(a,b);
	cout<<"answer is:"<<answer<<endl;
	return 0;
}



int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
    return fact;
}

int nCr(int n,int r)
{
	int num=factorial(n);
	int denom=factorial(r)*factorial(n-r);
	return num/denom;
}

int main()
{
	int n,r;
	cin>> n >> r;
	cout<<"answer is"<< nCr(n,r)<<endl;
	return 0;
}



void dummy(int n)
{
	n++;
	cout<<"n is"<< n<<endl;
	n++;
}

int main()
{
   
   int n;
   cin>>n;
   dummy(n);
   cout<<"number is"<<n<<endl;
   return 0;












}



















































































