#include <iostream>
using namespace std;
class complex;
class calculator
{
private:
public:
    void sum(complex z1, complex z2);
    void product(complex z1, complex z2);
};
void calculator :: sum(complex z1, complex z2)
{
    cout << "z(sum) = " << z1.a + z2.a << " + " << z1.b + z2.b <<"i"<< endl;
}
void calculator :: product(complex z1, complex z2)
{
    cout<<"z(product) = "<<((z1.a*z2.a)-(z1.b*z2.b))<<" + "<< ((z1.a*z2.b)+(z1.b*z2.a))<<"i"<<endl;
}
class complex
{
private:
    int a, b;
    /*friend void calculator :: sum(complex z1, complex z2);
    friend void calculator :: product(complex z1, complex z2);*/
    //to avoid making friends to multiple functions, we can make friend to whole class
    friend class calculator;
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

int main()
{
    complex z1,z2;
    calculator z3;
    z1.setdata(3,2);
    z1.print();

    z2.setdata(4,5);
    z2.print();

    z3.sum(z1,z2);
    return 0;
}