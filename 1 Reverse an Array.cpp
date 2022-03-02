#include <iostream>
using namespace std;
int main() {
    
    int A[50], i, t, n;
    n = 5;                      //int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter elements of array\n";

    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }

    cout<<"\nElements of Array are: ";
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    for(i=0; i<n/2; i++)
    {
        t = A[n-1-i];
        A[n-1-i] = A[i];
        A[i] = t;
    }

    cout<<"\nReversed Array: ";
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}