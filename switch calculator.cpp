#include<iostream>
using namespace std;
int main()
{
/*	int num;
	cin>>num;
	switch(num)
	{
		case 1:cout<<"first"<<endl;
		        break;
		case 2:cout<<"second"<<endl;
		        break;
	    default:cout<<"invalid"<<endl;
	}
   */  

       int a, b,ab;
       
       cout<<"enter the value of a:"<<endl;
       cin>>a;
       
       cout<<"enter the value of b:"<<endl;
       cin>>b;
       
       char op;
       
       cout<<"enter the operation:"<<endl;
       cin>>op;
       
       switch(op)
       {
       	  case '+': ab=a+b;
		            cout<< "result is " << ab <<endl;
       	            break;
       	  
       	  case '-': ab=a-b;
		            cout<< "result is "<< ab <<endl;
       	            break;
       	            
       	  case '*': ab=a*b;
		            cout<< "result is "<< ab <<endl;
       	            break;
       	            
       	  case '/': ab=a/b;
		            cout<< "result is " << ab <<endl;
       	            break;
       	            
       	  case '%': ab=a%b;
		            cout<< "result is " << ab <<endl;
       	            break;
       	            
       	  default : cout<<"invalid"<<endl;
       	  
	   }
       
        return 0;


























}
