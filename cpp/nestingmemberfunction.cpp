#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class binary {
    private:
    string s;
    void check_bin(void);
    public:
    void read(void);
    void display(void);
    void complementary(void);
};
void binary::read(void){
    cout<<"Enter a string s: " ;
    cin>>s;
}
void binary:: display(void){
    for(int i =0;i<s.length();i++){
        cout<<s.at(i);
    }
} 
void binary:: complementary(void){
    check_bin();
   for(int i =0;i<s.length();i++){
       if(s.at(i)==0){
           s.at(i)==1;
       }
       else if(s.at(i)==1){
           s.at(i)==0;
       }
   }
}
void binary::check_bin(void){
    for (int i =0;i<s.length();i++){
        if(s.at(i)!=0||s.at(i)!=1){
            cout<<endl<<"Non Binary";
            exit(0);
        }
    }
}
int main() {
    binary b;
    b.read();
    b.display();
    b.complementary();
    b.display();
    return 0;
}