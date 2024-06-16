#include <iostream>
using namespace std;

class Employee
{
    int id;
    int hello =0;
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        hello++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << hello << endl;
    }

    void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<hello<<endl;
    }
};

// Count is the static data member of class Employee
//int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    

    return 0;
}
