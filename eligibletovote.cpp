//Check whether you are eligible to vote or not 
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>18 || age==18)
    {
        cout<<"You are eligible to VOTE";
    }
    else
    {
        cout<<"You are not eligible VOTE";
    }

}
