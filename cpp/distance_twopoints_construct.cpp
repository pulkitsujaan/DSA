#include <iostream>
#include<math.h>
using namespace std;
class Y;
class X
{
   private: 
      int x,y;
   public: 
     friend void distance(X a,Y b);
   //   void setdata(int a,int b){
   //       x=a;
   //       y=b;
   //   }
     void display(int x, int y)
     {
         cout<<"point = ( "<<x<<","<<y<<")";
     }
};
class Y
{
   private: 
      int x,y;
   public: 
     friend void distance(X a,Y b);
   //   void setdata(int a,int b){
   //       x=a;
   //       y=b;
   //   }
     void display(int x, int y)
     {
         cout<<"point = ( "<<x<<","<<y<<")";
     }
};
void distance(X a,Y b)
{
   float distance;
   distance=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
   cout<<"Distance between a and b is: "<<distance;
}
int main()
{
   X a;
   Y b;
   cout<<"Enter the x coordinate of point A: ";
   cin>>a.x;
   cout<<"Enter the y coordinate of point A: ";
   return 0;
}