
#include <iostream>
using namespace std;
class divisibility{
    public:
    int n;
  //  void enternumber ();
   bool checkDivisibility ();
    
}hello;
/*void divisibility :: enternumber (){
    cout<<"enter a number"<<endl;
    cin>>n;
}*/
bool divisibility :: checkDivisibility(void){
    cout<<"enter a number"<<endl;
    cin>>n;
if((n%4==0&&n%100!=0)||n%400==0){
    cout<< true;}

else cout<< false;

}
int main() {
   
    
    
    hello.checkDivisibility();
    return 0;
}