#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5},sum=0,originalsum,i;
    //brute approach
    for(i=1;i<sizeof(a)/4;i++){
        if(a[i]-a[i-1]!=1){
            cout<<a[i]-1;
            break;
        }
    }
    //optimal approach
    for(i=0;i<sizeof(a)/4;i++){
        sum=sum+a[i];
    }
    originalsum=((a[i-1])*(a[i-1]+1))/2;
    cout<<originalsum-sum;
}