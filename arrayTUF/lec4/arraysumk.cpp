#include <iostream>
using namespace std;
int main()
{
   int a[]={1,2,3,1,1,1,4,2,3},i,j,from=-1,to=-5,k=3,sum=0,size=-1;
   //brute approach
   for(i=0;i<sizeof(a)/4;i++)
   {
      for(j=0;j<sizeof(a)/4;j++)
      {
         sum=sum+a[j];
         if(sum==k&&size<j-i){
            from=i;
            to=j;
            size=to-from;
            break;
         }
         if(sum>k){
            break;
         }
         
      }
   }
   cout<<from<<endl<<to;
   return 0;
}