#include<iostream>
using namespace std;
int swap(int x, int y)
{
	int temp=x;
	x=y;
	y=temp;
	cout<<"x="<<x<<"  y="<<y<<endl;
}
int swaptr(int* x, int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	cout<<"x="<<*x<<"  y="<<*y<<endl;
}
int main()
{
	int a=10,b=20;
	cout<<"value of swap in main a="<<a<<"  b="<<b<<endl;
	cout<<"value of swap  function:"<<endl;
	swap(a,b);
	cout<<"value of swaptr function:"<<endl;
	swaptr(&a,&b);
//	cout<<"value of swap in main a="<<a<<"  b="<<b<<endl;
	
}
