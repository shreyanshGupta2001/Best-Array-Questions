#include <iostream>

using namespace std;

int main()
{
    int A[10], i, last;
    int n;
    n = 5;

    cout<<"Enter 5 array elements\n";
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"\nElements of array are: ";
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    last = A[n-1];
    for(i=n-1; i>0; i--)
    {
        A[i] = A[i-1];
    }
    A[0] = last;
    
    cout<<"\nElements of the array after cyclically rotated by one: ";
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}
