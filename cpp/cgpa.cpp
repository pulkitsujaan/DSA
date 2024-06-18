#include <iostream>
using namespace std;

class cgpa
{
public:
    int multiplier[6];
    string grade[6];
    string subject[6] ={"MATHS","PHYSICS", "ELECTRICAL", "COMPUTER SCIENCE", "ELECTRONICS"};
    void getdata(void);
    float calculate_sgpa(void);
};
void cgpa :: getdata(void)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter your grade in " << subject[i] << " :";
        cin >> grade[i];
    }
}
float cgpa :: calculate_sgpa()
{
    float sgpa;
    for(int i=0;i<5;i++){
    
    if (grade[i]=="a+"){
        multiplier[i]=10;
    }
    else if (grade[i]=="a"){
        multiplier[i]=9;
    }
    else if (grade[i]=="b+"){
        multiplier[i]=8;
    }
    else if (grade[i]=="b"){
        multiplier[i]=7;
    }
    else if (grade[i]=="c+"){
        multiplier[i]=6;
    } 
    else if (grade[i]=="c"){
        multiplier[i]=5;
    }
    }
    sgpa = ((4 * multiplier[0]) + (4 * multiplier[1]) + (3 * multiplier[2]) + (2 * multiplier[3]) + (1 * multiplier[4])) / 14;
    return sgpa;
}
int main()
{
    cgpa student;
    student.getdata();
    cout << student.calculate_sgpa();
    return 0;
}