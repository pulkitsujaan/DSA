#include <iostream>
using namespace std;
class calculator;
class complex
{
private:
    int a, b;
    friend void calculator :: realsum(complex z1, complex z2);

public:

    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void print()
    {
        cout << "z = " << a << " + " << b <<"i"<< endl;
    }
};
class calculator
{
private:
public:
    void realsum(complex z1, complex z2);
};
void calculator :: realsum(complex z1, complex z2)
{
    cout << "z(sum) = " << z1.a + z2.a << " + " << z1.b + z2.b <<"i"<< endl;
}

int main()
{
    complex z1,z2;
    calculator z3;
    z1.setdata(3,2);
    z1.print();

    z2.setdata(4,5);
    z2.print();

    z3.realsum(z1,z2);
    return 0;
}