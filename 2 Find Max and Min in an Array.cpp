#include <iostream>
using namespace std;
int main()
{
    int A[5], i;
    int max, min, n;
    n = 5;  //check for n=1; as well

    cout<<"Enter elements of an Array:\n";
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }

    cout<<"\nElements of Array: ";
    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    if(n==1)
    {
        min = A[0];
        max = A[0];
        cout<<"\nMax: "<<max;
        cout<<"\nMin: "<<min;
    }

    else if(n>1)
    {
        min = A[0];
        max = A[1];

        for(i=0; i<n; i++)
        {
            if(A[i]>max)
            max = A[i];

            else if(A[i]<min)
            min = A[i];
        }
        cout<<"\nMax: "<<max;
        cout<<"\nMin: "<<min;
    }
    

    return 0;
}