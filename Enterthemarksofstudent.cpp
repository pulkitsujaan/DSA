//arrray is stored in contigous memory
#include<iostream>
using namespace std;
int main()
{
    //Array
    int n;//Gunjan=variable
    int marks[10];//[]tells that the variable is an array
    //Assigning the value to array
    for(int i=1;i<=marks[10];i++)
    {
        cout<<"Enter the marks of Roll.no."<<i<<": ";
        cin>>marks[i];
    }
    cout<<"Enter the roll no. of the student whom marks you want to know: ";
    cin>>n;
    cout<<marks[n];
}