#include <iostream>
using namespace std;
int main()
{
   int a[]={1,2,3,1,1,1,4,2,3},i,j;
   //brute approach
   for(i=0;i<sizeof(a)/4;i++)
   {
      for(j=0;j<sizeof(a)/4;j++)
      {
         if(sum>k)
         sum=sum+a[i];
      }
   }
   return 0;
}