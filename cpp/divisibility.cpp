#include <iostream>
using namespace std;
class divisibility
{
public:
    int n;
    void enternumber();
    bool checkDivisibility();
};
void divisibility ::enternumber(void)
{
    cout << "Enter a number: ";
    cin >> n;
}
bool divisibility ::checkDivisibility(void)
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        cout << true;
    }
    else
        cout << false;
}
int main()
{
    divisibility hello;
    hello.enternumber();
    hello.checkDivisibility();
    return 0;
}