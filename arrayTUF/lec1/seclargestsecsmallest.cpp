#include <iostream>
using namespace std;
int main()
{   
    //Brute approach 
    int i, j, b[2], a[] = {1, 2, 3, 4, 5}, n = 5;
    cout << a[0] << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1] && j < n - 1)
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
            }
        }
    }
    b[0] = a[1];
    b[1] = a[n - 2];
    cout << b[0] << endl
         << b[1];
    //Better approach
    int a[]={3,2,4,1,5},largest,seclargest,smallest;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1]&&i!=n-1)
        {
            largest=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>a[i+1]&&i!=n-1&&a[i]<largest)
        {
            seclargest=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1]&&i!=n-1)
        {
            smallest=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>a[i+1]&&i!=n-1&&a[i]<largest)
        {
            seclargest=a[i];
        }
    }
}