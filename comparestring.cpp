#include <cstring>
#include <iostream>
#include <string.h>
using namespace std; 
class CompareString {
 
public:
    // Classes object of string
    char str[100];
 
    // Parameterized Constructor
    CompareString(char str1[])
    {
        // Initialize the string to class object
        strcpy(this->str, str1);
    }
 
    // Overloading '==' under a function
    // which returns integer 1/true
    int operator==(CompareString s2)
    {
        if (strcmp(str, s2.str) == 0)
            return 1;
        else
            return 0;
    }
 /*  int operator<=(CompareString s3)
    {
        if (strlen(str) <= strlen(s3.str))
            return 1;
        else
            return 0;
    }
  int operator>=(CompareString s3)
    {
        if (strlen(str) >= strlen(s3.str))
            return 1;
        else
            return 0;
    }*/
};
 
void compare(CompareString s1, CompareString s2)
{
 
    if (s1 == s2)
        cout << s1.str << " is equal to "
             << s2.str << endl;
    else 
        cout << s1.str << " is not equal to "
             << s2.str << endl;
       /* if (s1 >= s2)
            cout << s1.str << " is greater than "
                 << s2.str << endl;
        else
            cout << s2.str << " is greater than "
                 << s1.str << endl;
    }*/
}
void testcase1()
{
    char str1[100];
    cout<<"enter first string"<<endl;
    cin>>str1; 
    char str2[100];
    cout<<"enter second string"<<endl;
    cin>>str2; 
 
    CompareString s1(str1);
    CompareString s2(str2);
 
   // cout << "Comparing \"" << s1.str << "\" and \""
      ///   << s2.str << "\"" << endl;
 
    compare(s1, s2);
}

int main()
{
    testcase1();
 
   return 0;
}