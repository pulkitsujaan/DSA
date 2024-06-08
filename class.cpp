#include <iostream>
using namespace std;
class hello
{
private:
   int a, b, c;

public:
   int d, e;
   void setData(int a, int b, int c);
   void getData()
   {
      cout << "The value of a is: " << a << endl;
      cout << "The value of b is: " << b << endl;
      cout << "The value of c is: " << c << endl;
      cout << "The value of d is: " << d << endl;
      cout << "The value of e is: " << e << endl;
   }
};
void hello ::setData(int a1, int b1, int c1)
{
   a = a1;
   b = b1;
   c = c1;
}
int main()
{
   hello vinay;
   vinay.d = 55;
   vinay.e = 7;
   vinay.setData(1, 2, 3);
   vinay.getData();
   return 0;
}