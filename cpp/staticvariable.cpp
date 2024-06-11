#include <iostream>
using namespace std;
class employee {
    int id;
    int salary;
    int count;
    public:
    void setdata(void);
    void displaydata(void);
};
void setdata(void){
    cout<<"Enter the employee id of employee "<<count<<": ";
    cin>>id;
    cout<<"Enter the employee salary: ";
    cin>>salary;
    count++;
}
void displaydata(void){
    cout<<"Id of employee " <<count<<": ";
    cout<<"salary of the employee: "<<salary;
}
int main() {
    employee info;
    info.setdata();
    info.displaydata();
    info.setdata();
    info.displaydata();
    return 0;
}