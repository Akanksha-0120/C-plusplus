#include<iostream>
using namespace std;
#define VAL1 15//using #define preprocessor for defining the constant
#define VAL2 8
int main()
{ 
    int tot; 
    tot=VAL1*VAL2;
    cout<<tot;

    /*const int side=5;//using const keyword for defining the constant
    int area=side*side;
    cout<<area;
   return 0;*/
}