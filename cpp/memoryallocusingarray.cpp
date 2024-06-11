#include <bits/stdc++.h>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; };
    void setPrice(void);
    void displayPrice(void);
};
void shop ::setPrice(void)
{
    cout << "Enter the id of the product of counter " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter the price of the product: " << counter + 1 << " : ";
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The id of the product of counter no. " << i + 1 << " is: " << itemId[i] << endl;
        cout << "The price of the product of counter no. " << i + 1 << " is: " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
}