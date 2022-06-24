#include <iostream>
#include <climits>

using namespace std;

void printSubArrays(int A[], int n)
{
    int i, j, k;
    
    int maxSum = INT_MIN;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            int sum = 0;
            cout<<"{";
            for(k=i; k<=j; k++)
            {
                sum += A[k];
                cout<<A[k]<<" ";
            }
            cout<<"}";
            cout<<"\n\n";
            
            if(sum > maxSum)
            maxSum = sum;
        }
    }
    
    cout<<"Max Sum Subarrays = "<<maxSum;
}

int main()
{
    
    int A[] = {-10, -20, 30, 40, -50};
    
    printSubArrays(A, 5);

    return 0;
}