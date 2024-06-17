#include <iostream>
using namespace std;
class Complex_Analysis
{
private:
    int a, b;

public:
    void setno(int a1, int b1)
    {
        a = a1;
        b = b1;
        cout<<"z = "<<a<<" + "<<b<<"i"<<endl;
    }
    void sum(Complex_Analysis z1,Complex_Analysis z2)
    {
        a=z1.a+z2.a;
        b=z1.b+z2.b;
        cout<<"z = "<<a<<" + "<<b<<"i"<<endl;        
    }
};
int main()
{
    Complex_Analysis w1,w2,w3;
    w1.setno(2,3);
    w2.setno(4,7);
    w3.sum(w1,w2);
    


    return 0;
}