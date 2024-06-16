#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    static int count; // default value of static variable is zero
    int hello = 0;

public:
    void setdata(void)
    {
        cout << "EMPLOYEE " << count + 1 << ":" << endl;
        cout << "Enter the employee id of employee : ";
        cin >> id;
        cout << "Enter the employee salary: ";
        cin >> salary;
        count++;
        hello++;
    }
    void displaydata(void)
    {

        cout << "Id of employee: " << id << endl;
        cout << "salary of the employee: " << salary << endl;
        // cout<<count<<endl;
        cout << hello << endl;
    }
};
// void employee ::setdata(void)
// {
//     cout << "EMPLOYEE " << count +1 << ":" << endl;
//     cout << "Enter the employee id of employee : ";
//     cin >> id;
//     cout << "Enter the employee salary: ";
//     cin >> salary;
//     count++;
//     count_2++;
// }
// void employee ::displaydata(void)
// {

//     cout << "Id of employee: "<<id << endl;
//     cout << "salary of the employee: " << salary << endl;
//     //cout<<count<<endl;
//     cout<<count_2<<endl;

// }
int employee::count;
// int employee::id=54;//a nonstatic data member may not be defined outside its class

int main()
{
    employee info;
    info.setdata();
    info.displaydata();

    info.setdata();
    info.displaydata();
    return 0;
}