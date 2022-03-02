#include <iostream>
using namespace std;

int main() {
	int A[10], i, n;
	n = 5;
	cout<<"Enter the elements of array\n";
	for(i=0; i<n; i++)
	{
	    cin>>A[i];
	}
	cout<<"\nElements of array are: ";
	for(i=0; i<n; i++)
	{
	    cout<<A[i]<<" ";
	}
	int low, mid, high, t;
	low = 0;
	mid = 0;
	high = n-1;
	
	while(mid <= high)
	{
	    if(A[mid] < 0)
	    {
	        t = A[mid];
	        A[mid] = A[low];
	        A[low] = t;
	        mid++; low++;
	    }
	    else if(A[mid] == 0)
	    {
	        mid++;
	    }
	    else if(A[mid] > 0)
	    {
	        t = A[mid];
	        A[mid] = A[high];
	        A[high] = t;
	        high--;
	    }
	}
	cout<<"\nElemets of Sorted Array are: ";
	for(i=0; i<n; i++)
	{
	    cout<<A[i]<<" ";
	}
	return 0;
}