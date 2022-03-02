#include <iostream>

using namespace std;

int main()
{
    int A[20], i, n;
    n = 8;
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

    int low, mid, high, t;

    low = 0; mid = 0;
    high = n-1;

    while(mid <= high)
    {
        if(A[mid] == 0)
        {
            t = A[low];
            A[low] = A[mid];
            A[mid] = t;
            low++;
            mid++;
        }
        else if(A[mid] == 1)
        {
            mid++;
        }
        else if(A[mid] == 2)
        {
            t = A[mid];
            A[mid] = A[high];
            A[high] = t;
            high--;
        }
    }

    cout<<"\nNew Sorted Array: ";

    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}
