#include <iostream>
using namespace std;
int a=2;
int main()
{
   int a=3;
   cout<<"Value of local a: "<<a<<endl<<"Value of global a"<<::a<<endl;
   /*-----------Literals in c++--------------*/
   float b=3.4;//float is by default double and to make it float the prefix f is added for example b=3.4f
   cout<<"THE SIZE OF 3.4: "<<sizeof(3.4)<<endl;
   cout<<"THE SIZE OF 3.4f: "<<sizeof(3.4f)<<endl;
   cout<<"THE SIZE OF 3.4F: "<<sizeof(3.4F)<<endl;
   cout<<"THE SIZE OF 3.4l: "<<sizeof(3.4l)<<endl;
   cout<<"THE SIZE OF 3.4L: "<<sizeof(3.4L)<<endl;
   cout<<"THE SIZE OF 3.4ll: "<<sizeof(3ll)<<endl;
   cout<<"THE SIZE OF 3ll: "<<sizeof(3ll)<<endl;
   /*-----------Refrencing in c++---------------*/
   int x=5,&y=x;
   cout<<x<<endl<<y;
   /*-----------Typecasting in c++--------------*/
   return 0;
}