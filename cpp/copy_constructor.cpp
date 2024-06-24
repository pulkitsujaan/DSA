#include <iostream>
using namespace std;
class Number
{
   private: 
      int a;
   public: 
      Number(){
         a=0;
      }
      Number(int n){
         a=n;
      }
      void display(){
         cout<<a;
      }
      Number(Number &obj){
         
      } 
     
};
int main()
{

   return 0;
}