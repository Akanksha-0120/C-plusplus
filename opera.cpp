#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        Complex (int r = 0, int i = 0)
        {
            real = r;
            img = i;
        }
        Complex add (Complex const& x)
        {
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
        void Display() {
            cout << real << "+i" << img <<endl;
        }
};
int main()
{
    Complex C1 (3, 7);
    C1.Display();
    Complex C2 (5, 2);
    C2.Display();
    Complex C3;
    C3 = C1.add (C2);  // C2.add(C1);
    C3.Display();
   return 0;
}