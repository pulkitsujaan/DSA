#include <iostream>
using namespace std;
      int count=0; 
class Number
{
   private: 
   public:

   Number()
   {
    count++;
    cout<<"This is the time when my Constructor for object number "<<count<<" is called"<<endl;
   }
   ~Number()
   {
    cout<<"This is the time when my Destructor for object number "<<count<<" is called"<<endl;
    count--;
   }
};
int main()
{
   cout<<"We are inside our main function"<<endl;
   cout<<"Creating our first object"<<endl;
   Number z1;
    {
        cout<<"New scope begins"<<endl;
        Number z2,z3;
        cout<<"New scope ends"<<endl;
    }
   return 0;
}