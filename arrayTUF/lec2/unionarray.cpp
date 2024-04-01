#include <iostream>
using namespace std;
int removeduplicate(int a[]){
    int n=sizeof(a)/4;
    for(int i=1,j=0;i<n;i++,j++){
        if(a[i]!=a[i-1]){
            a[j]=a[i];
        }
    }
}
int main()
{
    int a[]={1,2,2,3,5},b[]={2,3,3,5,6,6},n,i,j;
    if(sizeof(a)>=sizeof(b))
    {
        n=sizeof(a)/4;
    }
    else 
    {
        n=sizeof(b);
    }
    removeduplicate(a);
    removeduplicate(b);
    int U[sizeof(a)+sizeof(b)];
    for(i=0,j=0;j<sizeof(a)/4;i++,j++){
        U[i]=a[j];
    }
    for(int j=0,i;j<sizeof(b)/4;i++,j++){
        U[i]=b[j];
    }
    removeduplicate(U);
    cout<<U[0]<<U[1]<<U[2]<<U[3]<<U[4]<<U[5];
}