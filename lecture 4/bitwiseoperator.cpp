#include <iostream>
using namespace std;
int main()
{
    int i,ar[8]={1,2,2,3,3},different=0;
    for(i=0;i<=2;i++)
    {
        different ^= ar[i];
    }
    cout<<different<<endl;
    //swap two numbers using bitwise operator    
}