#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin>>firstName;

    cout << "Enter your last name: ";
    cin>>lastName;
    cout<<"your name is :"<<endl<<firstName<<" "<<lastName<<endl;
    cout << "Your name in reverse order is :"<<endl<<lastName<<" "<<firstName<<endl;

   /* for (int i = lastName.length() - 1; i >= 0; i--) {
        cout << lastName[i];
    }

     cout << " ";

    for (int i = firstName.length() - 1; i >= 0; i--) {
        cout << firstName[i];
    }*/

    return 0;
}