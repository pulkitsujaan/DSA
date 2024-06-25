/*
-------------Derived Class Syntax----------------
class {{derived-class-name}}:{{Visibility-mode}} {{bas-class-name}}
{
    class members/methods/etc...
};
-------------------------------------------------
Note:-
1. Default visibility mode is private
2. Private Visibility Mode: Public members of base class becomes Private Members of Derived class
3. Public Visibility Mode: Public members of base class becomes Public Members of Derived class
4. Private members of base class cannot be accessed by the derived class
OR
WE cannot inherit Private members of base class
*/
#include <iostream>
using namespace std;
class Student
{
private:
public:
    int Roll_Number;
    float salary;
    Student() {};
    Student(int id)
    {
        Roll_Number = id;
        salary = 56000;
    }
};
class programmer : public Student
{
public:
    int languageCode = 9;
    programmer(int id)
    {
        Roll_Number = id;//WE don't have to declare Roll_Number because it already declared in base class
    }
};
int main()
{
    Student Jane(1), mike(2), will, dustin;
    cout << Jane.salary << endl;
    cout << mike.salary << endl;
    programmer skill(1);
    cout << skill.languageCode << endl;
    cout << skill.Roll_Number << endl;
    return 0;
}